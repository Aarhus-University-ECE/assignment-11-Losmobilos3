#include "sum.h"

#include<stdio.h>
#include<assert.h>

/* Sum integers 1 to n */
int sum (int n)
{
/* pre-condition */
  assert (n >= 1);
/* post-condition */
  if (n > 1)
    return n + sum (n - 1);
  else
    return 1;
}

/* Sum integers 1 to n */
int sumtail (int n, int total)
{
  assert(n >= 1);
  if (n == 1)
    return total + 1; // base case, if n = 1, return the sum, since we know the sum of 1 is 1.

  return sumtail(n-1, total + n); // adds current number to the sum, and calls the next number with recursion
}

/* Sum integers 1 to n */
int sumwhile (int n)
{
  assert(n >= 1);
  int total = 0; // stores SUM
  while (n != 0) // While the value isn't 1, add the current number to the sum
  {
    total += n;
    n--;
  }
  return total;
}

