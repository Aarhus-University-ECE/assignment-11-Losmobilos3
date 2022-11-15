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

    if (pp == 0) // initialize first parent
    {
        pp = 1;
        n--;
    }
    else if (p == 0) // initialize second parent
        p = 1;
    else if (n%2 == 0)  //
        pp += p;        // Alterate between, even and uneven parent to progress the fibonacci sequence
    else                //
        p += pp;        // 

    if (n <= 1)
        return p + pp; // if we've reached our number, return fibonacci number n.

    return fib(n-1, p, pp); // call next fib number.
}
