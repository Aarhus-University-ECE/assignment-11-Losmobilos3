#include "sumn.h"

#include<stdio.h>
#include <assert.h>

int sumn (int n)
{
    assert(n >= 1);
    if (n == 1) . // base case
        return 1;
    return 2*n-1 + sumn(n-1); // sums the current uneven number, and recurses to the one before.
}