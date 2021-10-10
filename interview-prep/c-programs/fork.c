/*
 * =====================================================================================
 *
 *       Filename:  fork.c
 *
 *    Description:  A simple fork demo
 *
 *        Version:  1.0
 *        Created:  10/10/2021 07:00:02 PM
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

pid_t fork(void);
void printChild(float* a , float* b )
{
	register int i = 0;
	*b = *a + *b;
	printf("{PID:%d} Inside func, a+b = %f\n",getpid(), *b);
	while(i < 5)
	{
		printf("{PID:%d | count:%d} Inside func, b+b = %f\n",getpid(), i, (*b)+=*b);
		sleep(1);
		i++;
	}
	return;
}

/*
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	float A = 15.333, B = 22.777;
	register unsigned int count = 0;
	if (fork() == 0) {
		printChild(&A,&B);
	}
	else {
		while ( count < 15 )
		{
			++count;
			printf("{PID:%d | count:%d} Hello, I am main()!\n", getpid(), count);
			sleep(1.05);
		}
	}
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */

/* OUTPUT -----------------------------------------------------------------------------
   > $ ./myfork
	   {PID:67985}Hello, I am main()!
	   {PID:67986}Inside func, a+b = 38.110001
	   {PID:67986}{count = 0}Inside func, b+b = 76.220001
	   {PID:67985}Hello, I am main()!
	   {PID:67986}{count = 1}Inside func, b+b = 152.440002
	   {PID:67985}Hello, I am main()!
	   {PID:67986}{count = 2}Inside func, b+b = 304.880005
	   {PID:67985}Hello, I am main()!
	   {PID:67986}{count = 3}Inside func, b+b = 609.760010
	   {PID:67985}Hello, I am main()!
	   {PID:67986}{count = 4}Inside func, b+b = 1219.520020
	   {PID:67985}Hello, I am main()!
	   address {b = 0xf72511b4}
	   {PID:67985}Hello, I am main()!
	   {PID:67985}Hello, I am main()!
	   {PID:67985}Hello, I am main()!
	   {PID:67985}Hello, I am main()!
	   {PID:67985}Hello, I am main()!
	   {PID:67985}Hello, I am main()!
	   {PID:67985}Hello, I am main()!
	   {PID:67985}Hello, I am main()!
	   {PID:67985}Hello, I am main()!

-----------------------------------------------------------------------------*/
