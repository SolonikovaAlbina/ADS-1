// Copyright 2022 NNTU-CS
#include <cmath>
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
  if (value > 1) {
    for (int i = 2; i <= sqrt(value); i++)
      if (value % i == 0) {
        return false;
      }
    return true;
  } else {
    return false;
  }
}

uint64_t nPrime(uint64_t n) {
  uint64_t simple = 0;
  for (int i = 0; ; i++) {
    if (checkPrime(i) == true) {
      simple++;
    }
    if (simple == n) {
      return i;
    } else {
      continue;
    }
  }
  return 0;
}

uint64_t nextPrime(uint64_t value) {
  for (uint64_t i = value + 1; ; i++) {
    if (checkPrime(i))
      return i;
  }
}

uint64_t sumPrime(uint64_t hbound) {
uint64_t sum = 0;
  if (hbound > 2) {
    for (int i = 2; i < hbound; i++) {
      if (checkPrime(i)) {
        sum = sum + i;
      }
    }
  }
  return sum;
}
