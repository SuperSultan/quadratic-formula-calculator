/* This will solve the quadratic equation ax^2+bx+c = 0,
   for given coefficients, a, b, and c which are real numbers.
   The program will:
1. Determine if the roots of the given function are complex
   and print a message saying so.
2. If the two roots are real numbers, then your program will
   calculate the two roots using the quadratic formula and
   print them out as shown in the sample runs.
	Written by: Afnan Sultan
	Date Last Modified: 6/7/17
*/

#include <stdio.h>
#include <math.h>

// Function Declarations
double getData (double* a, double* b, double* c);
double calculateRoots (double* a, double* b, double* c, double* quadratic1, double* quadratic2, double* 
discriminant);
double printResults (double* a, double* b, double* c, double* quadratic1, double* quadratic2);

double getData (double* a, double* b, double* c) {

printf("\nEnter a: ");
scanf("%lf", a);
printf("Enter b: ");
scanf("%lf", b);
printf("Enter c: ");
scanf("%lf", c);

printf("a: \t\t%lf\n", *a);
printf("b: \t\t%lf\n", *b);
printf("c: \t\t%lf\n", *c);

return;
}//getData

double calculateRoots (double* a, double* b, double* c, double* quadratic1, double* quadratic2, double* 
discriminant) {

*discriminant = ((*b)*(*b)) - 4 * (*a) * (*c);
if (*discriminant  < 0)	{
	printf("The roots are complex!\n"); 
	return -1.0;
			}
	else
	{
*quadratic1 = (-(*b) + sqrt(*discriminant))/(2 * (*a));
*quadratic2 = (-(*b) - sqrt(*discriminant))/(2 * (*a));
	}
return 1.0;
}//calculateRoots

double printResults (double* a, double* b, double* c, double* quadratic1, double* quadratic2) {

printf("Root 1:\t\t%lf\n", *quadratic1);
printf("Root 2:\t\t%lf\n", *quadratic2);

return;
}//printResults

int main (void) {

printf("*******************************************************\n");
printf("* This program will solve the quadratic equation      *\n");
printf("* ax^2+bx+c = 0, for given coefficients, a, b, and c  *\n");
printf("* which are real numbers. The program will:           *\n");
printf("* 1. Determine if the roots of the given equation are *\n");
printf("*     are complex and print a message saying so.      *\n");
printf("* 2. If the two roots are real numbers, then your     *\n");
printf("*    program will calculate the two roots using the   *\n");
printf("*    quadratic formula and print them out as shown    *\n");
printf("*    in the sample runs.                              *\n");
printf("*******************************************************");

// Local declarations
double a;
double b;
double c;
double quadratic1;
double quadratic2;
double discriminant;
double cue;

getData(&a, &b, &c);

cue = calculateRoots(&a, &b, &c, &quadratic1, &quadratic2, &discriminant);

	if(cue >= 0){
   printResults(&a, &b, &c, &quadratic1, &quadratic2);	 
		   }

}//main
