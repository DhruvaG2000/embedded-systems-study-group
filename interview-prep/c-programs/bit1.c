/*
 * =====================================================================================
 *
 *       Filename:  bit1.c
 *
 *    Description: a bitwise operator program in C
 *
 *        Version:  1.0
 *        Created:  10/05/2021 04:42:53 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dhruva Gole (181030017), goledhruva@gmail.com
 *   Organization:  VJTI
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <stdlib.h>

const char* even_odd( int );
const char* pos_neg( int, int );
void swap (int*, int*);

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	signed int a=-2, b=128;
	printf("This is bitwise operator program\n");
	printf("a = %d, \nb = %d", a, b);
	printf("\n%s\n",even_odd(a));
	printf("\n%s\n",pos_neg(a,b));
	swap(&a,&b);
	printf("a = %d, \nb = %d", a, b);
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */


/*
 * ===  FUNCTION  ======================================================================
 *         Name:  unsigned int even_odd
 *  Description:  returns odd or eve
 * =====================================================================================
 */
const char *even_odd ( int a )
{
	char *reply;
	if (a & 1)
	{
		reply = "odd";	//	for odd
	}
	else
	{
		reply = "eve";	//	for even
	}
	return reply;
}		/* -----  end of function unsigned int even_odd  ----- */


/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  const char *pos_neg
 *  Description:  Tells if one of the numbers is negative
 * =====================================================================================
 */
const char *pos_neg ( int a, int b )
{
	char *reply;
	if ( ( a ^ b ) < 0 )
		reply = "One of them is negative\n";
	else
		reply = "Both are positive\n";
	return reply;
}		/* -----  end of function const char *pos_neg  ----- */


/*
 * ===  FUNCTION  ======================================================================
 *         Name:  swap
 *  Description: swap 2 numbers passed to it
 * =====================================================================================
 */
	void
swap ( int* a, int* b )
{
	*a = *a ^ *b;
	*b = *a ^ *b;
	*a = *a ^ *b;
}		/* -----  end of function swap  ----- */
