#ifndef MATH_UTILS_HPP
#define MATH_UTILS_HPP

#include <cstdint>

namespace math_utils {

    // Greatest Common Divisor (Euclidean Algorithm)
    long long gcd(long long a, long long b)
    {
        if (a < 0) a = -a;
        if (b < 0) b = -b;

        while (b != 0)
        {
            long long t = b;
            b = a % b;
            a = t;
        }

        return a;
    }

    // Least Common Multiple
    long long lcm(long long a, long long b)
    {
        if (a == 0 || b == 0)
            return 0;

        return (a / gcd(a, b)) * b;
    }

    // Floor division (works with negative numbers)
    long long floor_div(long long a, long long b)
    {
        long long q = a / b;
        long long r = a % b;

        if (r != 0 && ((a < 0) != (b < 0)))
            q--;

        return q;
    }

    // Ceil division (works with negative numbers)
    long long ceil_div(long long a, long long b)
    {
        long long q = a / b;
        long long r = a % b;

        if (r != 0 && ((a > 0) == (b > 0)))
            q++;

        return q;
    }

}

#endif