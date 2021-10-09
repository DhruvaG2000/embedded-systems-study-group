/*
 * =====================================================================================
 *
 *       Filename:  efficient_power.c
 *
 *    Description: A program to efficiently find power of a number
 *    ref. https://www.techiedelight.com/power-function-implementation-recursive-iterative/
 *
 *        Version:  1.0
 *        Created:  10/05/2021 08:41:01 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dhruva Gole (181030017), goledhruva@gmail.com
 *   Organization:  VJTI
 *
 * =====================================================================================
 */

#include <stdlib.h>
#include <stdio.h>

#define MATH_POW 0

// Iterative function to calculate `pow(x, n)` using
// binary operators
long my_power(int x, unsigned n)
{
	long int res = 1L;
	while(n){
--n;
	}
    // return result
    return res;
}

long power(int x, unsigned n)
{
    // initialize result by 1
    long pow = 1L;

    // loop till `n` become 0
    while (n)
    {
        // if `n` is odd, multiply the result by `x`
        if (n & 1) {
            pow *= x;
        }

        // divide `n` by 2
        n = n >> 1;

        // multiply `x` by itself
        x = x * x;
    }

    // return result
    return pow;
}

/*
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 */
int main ( int argc, char *argv[] )
{
	int x = 3;
	unsigned n = 3;
#if MATH_POW == 1
#include <math.h>
	printf("math pow = %f", pow(x,n));
#else
	printf("pow(%d, %d) = %ld", x, n, power(x, n));
#endif
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
