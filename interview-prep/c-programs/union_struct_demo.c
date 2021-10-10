/*
 * =====================================================================================
 *
 *       Filename:  union_struct_demo.c
 *
 *    Description:  A demo program to show union saves space
 *
 *        Version:  1.0
 *        Created:  10/10/2021 02:53:29 PM
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

typedef enum {False, True} bool;

typedef struct
{
	bool bldg, villa;
	int rooms, floors;
} houseStruct;

typedef struct
{
	union
	{
		bool bldg, villa;
	};
	union
	{
		int rooms, floors;
	};
} houseUnion;


/*
 * ===  FUNCTION  ======================================================================
 *         Name:  showHouse
 *  Description:  function to show size and contents of house structure
 * =====================================================================================
 */
void showHouse ( houseUnion* h1, houseStruct* h2)
{
	printf("The size of struct = %ld\n", sizeof(*h2));
	printf("The size of struct with union = %ld\n", sizeof(*h1));
}		/* -----  end of function showHouse  ----- */

/*
 * ===  FUNCTION  ======================================================================
 *         Name:  main
 * =====================================================================================
 */
	int
main ( int argc, char *argv[] )
{
	houseStruct a_struct;
	houseUnion a_union;
	showHouse (&a_union ,&a_struct);
	return EXIT_SUCCESS;
}				/* ----------  end of function main  ---------- */
