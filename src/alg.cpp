// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


bool checkPrime(uint64_t value) {
    for (int i = 2; i * i <= value; i++) {
        if (value % i == 0) return false;
    }
    return true;
}

uint64_t nPrime(uint64_t n) {
    uint64_t count = 0;
    int i = 1;
    while (count != n) {
        i++;
        if (checkPrime(i)) {
            count++;
        }
  }
  return i;
}

uint64_t nextPrime(uint64_t value) {
  uint64_t i = value + 1;
  while (!checkPrime(i)) i++;
  return i;
}

uint64_t sumPrime(uint64_t hbound) {
    uint64_t sum = 0;
    uint64_t i = 2;
    while (i != hbound) {
    if (checkPrime(i)) sum += i;
    i++;
    }
  return sum;
}
