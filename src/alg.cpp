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
    int count = 0;
    int i = 1;
    while (count != n) {
	i++;
	if (checkPrime(i)) count++;
  }
  return i;
}

uint64_t nextPrime(uint64_t value) {
  int i = value + 1;
  while (!checkPrime(i)) i++;
  return i;
}

uint64_t sumPrime(uint64_t hbound) {
  int sum = 0;
  int i = 2;
  while (i != hbound) {
	if (checkPrime(i)) sum += i;
  	i++;
  }
  return sum;
}
