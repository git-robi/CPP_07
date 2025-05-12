#pragma once

template <typename T>
T max(T a, T b)
{
    if (a > b)
        return a;
    return b;
}