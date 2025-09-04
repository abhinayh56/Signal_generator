#ifndef SINE_H
#define SINE_H

#include <stdint.h>
#include <cmath>
#include "../../../Constants/src/Constants.h"

template <typename T>
class Sine
{
public:
    Sine();
    ~Sine();
    void init();
    void config(T A, T f, T phi, uint64_t t_us, uint64_t dt_us);
    T generate(uint64_t t);
    void reset();

private:
    T A = 0;
    T w = 0;
    T phi = 0;
    uint64_t t_us = 0;
    uint64_t dt_us = 0;
};

#include "../../src/Sine/Sine.tpp"

#endif // SINE_H
