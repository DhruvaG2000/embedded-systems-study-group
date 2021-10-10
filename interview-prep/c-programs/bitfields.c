/*
 * =====================================================================================
 *
 *       Filename:  bitfields.c
 *
 *    Description:  a program to illustrate bitfields in C
 *
 *        Version:  1.0
 *        Created:  10/10/2021 01:53:41 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dhruva Gole (181030017), goledhruva@gmail.com
 *   Organization:  VJTI
 *
 * =====================================================================================
 */

#include	<stdio.h>
#include	<stdlib.h>

unsigned getbits(unsigned x, int p, int n)
{
	return (x >> (p+ 1-n)) & ~(~0 << n);
}

/*
 * ===  FUNCTION  ======================================================================
 *         Name:  main
=====================================================================================
 */
int main ( int argc, char *argv[], ... )
{
	unsigned ret = getbits(128,206,2);
	printf("result = %d",ret);
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
