#include "../../include/Sine/Sine.h"

template <typename T>
Sine<T>::Sine()
{
}

template <typename T>
Sine<T>::~Sine()
{
}

template <typename T>
void Sine<T>::init()
{
}

template <typename T>
void Sine<T>::config(T A_, T f_, T phi_, uint64_t t_us_, uint64_t dt_us_)
{
    A = A_;
    w = MATH_2_PI * f_;
    phi = phi_;
    t_us = t_us_;
    dt_us = dt_us_;
}

template <typename T>
T Sine<T>::generate()
{
    T y = A * std::sin(w * (T)t_us * (T)MICRO + phi);
    t_us += dt_us;
    return y;
}

template <typename T>
T Sine<T>::generate(uint64_t t_us_)
{
    t_us = t_us_;
    T y = A * std::sin(w * (T)t_us * (T)MICRO + phi);
    t_us += dt_us;
    return y;
}

template <typename T>
void Sine<T>::reset()
{
    t_us = 0;
}
