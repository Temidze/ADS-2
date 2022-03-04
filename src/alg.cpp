// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"


double pown(double value, uint16_t n) {
    double step = value;
    for (uint16_t i=1; i < n; i++) {
        step = step * value;
    }
    return(step);
}

uint64_t fact(uint16_t n) {
    uint64_t s = 1;
    for (uint16_t i = 1; i <= n; i++) {
        s = s * i;
    }
    return(s);
}

double calcItem(double x, uint16_t n) {
    double s = pown(x,n)/fact(n);
    return(s);
}

double expn(double x, uint16_t count) {
    double s = 1;
    for (uint16_t i = 1; i <= count;i++) {
        s += pown(x, i)/fact(i);
    }
    return(s);
}

double sinn(double x, uint16_t count) {
    double s = 0;
    for (uint16_t i = 1; i <= count; i++) {
        s += pow(-1, i - 1) * pown(x, 2 * i - 1) / fact(2 * i - 1);
    }
    return(s);
}

double cosn(double x, uint16_t count) {
    double c = 0;
    for (uint16_t i = 1; i <= count; i++) {
        c += pow(-1, i - 1) * pown(x, 2 * i - 2) / fact(2 * i - 2);
    }
    return(c);
}
