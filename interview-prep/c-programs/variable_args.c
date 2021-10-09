/*
 * =====================================================================================
 *
 *       Filename:  variable_args.c
 *
 *    Description:  A program which demonstrates the use of variable args to a function. Source: https://publications.gbdirect.co.uk//c_book/chapter9/stdarg.html
 *
 *        Version:  1.0
 *        Created:  10/05/2021 08:34:27 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dhruva Gole (181030017), goledhruva@gmail.com
 *   Organization:  VJTI
 *
 * =====================================================================================
 */


#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

int maxof(int, ...) ;
void f(void);

int main(){
        f();
        exit(EXIT_SUCCESS);
}

int maxof(int n_args, ...){
        register int i;
        int max, a;
        va_list ap;

        va_start(ap, n_args);
        max = va_arg(ap, int);
        for(i = 2; i <= n_args; i++) {
                if((a = va_arg(ap, int)) > max)
                        max = a;
        }

        va_end(ap);
        return max;
}

void f(void) {
        int i = 5;
        int j[256];
        j[42] = 24;
        printf("%d\n",maxof(3, i, j[42], 0));
}
