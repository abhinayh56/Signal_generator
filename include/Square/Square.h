#ifndef SQUARE_H
#define SQUARE_H

#include <stdint.h>

template <typename T>
class Square
{
public:
    Square();
    ~Square();
    void init();
    void config(T A_, T f_, T pw_h_, T phi_, uint64_t t_us_, uint64_t dt_us_);
    T generate();
    T generate(uint64_t t_us_);
    void reset();

private:
    T A = 0;
    uint64_t T0 = 0;
    T pw_h = 0;
    T phi = 0;
    uint64_t t_us = 0;
    uint64_t dt_us = 0;
};

#include "../../src/Square/Square.tpp"

#endif // SQUARE_H
