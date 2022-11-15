/*
 * Fibonacci numbers defined recursively
 */
#include "fib.h"

#include <assert.h>		/* assert */
#include <stdio.h>		/* printf */

/* Fibonacci function definition */
int fib (int n, int p, int pp)
{
    assert (n >= 1);

    if (pp == 0)
    {
        pp = 1;
        n--;
    }
    else if (p == 0)
        p = 1;
    else if (n%2 == 0) 
        pp += p;
    else
        p += pp;

    if (n <= 1)
        return p + pp;

    return fib(n-1, p, pp);
}
