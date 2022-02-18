// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
  int count = 0;
  for (int x = 2; x < value; x++) {
    if ((value % x) == 0)
      count = count++;
  }
  if (count != 0)
    return false;
  else
    return true;
}

uint64_t nPrime(uint64_t n) {
  int simple = 0;
  for (uint64_t i = 2; ; ++i)
  {
    if (checkPrime(i))
    {
      simple++;
    }
    if (simple == n)
    {
      return i;
    }
  }		
}

uint64_t nextPrime(uint64_t value) {
  for (uint64_t i = value + 1; ; i++)
  {
    if (checkPrime(i))
      return i;
  }
}

uint64_t sumPrime(uint64_t hbound) {
int sum = 0;
  for (int i = 0; i < hbound; i++)
  {
    if (checkPrime(i))
    {
      sum = sum + i;
    }
  }
  return sum;
}
