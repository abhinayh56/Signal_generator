#include "../../include/Square/Square.h"

template <typename T>
Square<T>::Square()
{
}

template <typename T>
Square<T>::~Square()
{
}

template <typename T>
void Square<T>::init()
{
}

template <typename T>
void Square<T>::config(T A_, T f_, T pw_h_, T phi_, uint64_t t_us_, uint64_t dt_us_)
{
    A = A_;
    T0 = (uint64_t)((T)(1.0) / f_);
    pw_h = pw_h_;
    phi = phi_;
    t_us = t_us_;
    dt_us = dt_us_;
}

template <typename T>
T Square<T>::generate()
{
    T t_now = t_us % T0;
    T y;
    
    T y = A * std::sin(w * (T)t_us * (T)MICRO + phi);
    t_us += dt_us;
    return y;
}

template <typename T>
T Square<T>::generate(uint64_t t_us_)
{
    t_us = t_us_;
    T y = A * std::sin(w * (T)t_us * (T)MICRO + phi);
    t_us += dt_us;
    return y;
}

template <typename T>
void Square<T>::reset()
{
    t_us = 0;
}
