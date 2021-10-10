/*
 * =====================================================================================
 *
 *       Filename:  sharemem_in_fork.c
 *
 *    Description:  Share memory between forks
 *
 *        Version:  1.0
 *        Created:  10/10/2021 11:00:23 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dhruva Gole (181030017), goledhruva@gmail.com
 *   Organization:  VJTI
 *
 * =====================================================================================
 */

#include	<sys/types.h>
#include	<unistd.h>
#include	<stdio.h>
#include	<stdlib.h>

/* 
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 *  Description:  
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	static float A = 15.333, B = 22.777;
	register unsigned int count = 0;
		printf("The value of A = %4f\n", A);
	if (fork() == 0) {
		while ( count < 5 )
		{
			++count;
			printf("The value of A+1.01 = %4f\n", ++A);
		}
		}
	else {
		while ( count < 15 )
		{
			++count;
			printf("{PID:%d | count:%d} Hello, I am main()! and A = %4f\n", getpid(), count, ++A);
			sleep(1.05);
		}
	}
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
