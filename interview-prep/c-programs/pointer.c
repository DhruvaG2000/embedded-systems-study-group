/*
 * =====================================================================================
 *
 *       Filename:  pointer.c
 *
 *    Description:	A program to demonstrate pointepts in C. ref. https://www.hackerrank.com/challenges/students-marks-sum/problem 
 *        Version:  1.0
 *        Created:  10/05/2021 08:10:57 PM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Dhruva Gole (181030017), goledhruva@gmail.com
 *   Organization:  VJTI
 *
 * =====================================================================================
 */

#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

//Complete the following function.

int marks_summation(int* marks, int number_of_students, char gender) {
  //Write your code here.
  long int sum = 0;
  if (gender == 'b') {  //  0, 2, 4 ...
    for (int i = 0; i < number_of_students ; i += 2) {
        sum += *marks;
        marks+=2;
    }
  }
  else {    //  1, 3, 5 ...
    marks += 1;
    for (int i = 0; i < number_of_students ; i += 2) {
        sum += *marks;
        marks += 2;
    }
  }
  return sum;
}

int main() {
    int number_of_students;
    char gender;
    int sum;

    scanf("%d", &number_of_students);
    int *marks = (int *) malloc(number_of_students * sizeof (int));

    for (int student = 0; student < number_of_students; student++) {
        scanf("%d", (marks + student));
    }

    scanf(" %c", &gender);
    sum = marks_summation(marks, number_of_students, gender);
    printf("%d", sum);
    free(marks);

    return 0;
}
