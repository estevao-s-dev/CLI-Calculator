/****************************************************************
Title:
	My calculator in C language with the Linux kernel coding
	style.

About:
	CLI calculator project using standard C libraries, 
	therefore, can compile and run on any OS
	with a C compiler.

License:
	The Unlicense - please refer to <https://unlicense.org>
Author: 
	Estevão Salles <mail.estevao.s@gmail.com>

*****************************************************************/ 
 
// Libraries/Headers
#include <stdio.h>
#include <stdint.h>
#include <math.h>
#include "clean_iobuffer.h"

// Functions
void sum(void);
void sub(void);
void multi(void);
void div(void);
void power(void);
void sqroot(void);


// --- Main ---
int main(void)
{
	
	char input[2] = {0};
	char confirmation = '\0';
	
	do {
		printf("Hi! I'm the calculator!\nDo you want to calculate? (Y/N) ");
		fgets(input, sizeof(input), stdin);
		sscanf(input, " %c", &confirmation); // " %c" more prone to user typos.
		
		if (confirmation != 'Y' && confirmation != 'N' && confirmation != 'y' && confirmation != 'n')

			printf("Invalid answer, try again...\n");
			

	} while (confirmation != 'Y' && confirmation != 'N' && confirmation != 'y' && confirmation != 'n');

	if (confirmation == 'N' || confirmation == 'n')

		printf("Alright, good bye.\n");
    
	while (confirmation == 'Y' || confirmation == 'y') {

		char number[2] = {0};
		int operation = 0;
		
		do {

			printf("Operations:\n1. + \n2. - \n3. * \n4. / \n5. ^\n6. Sqroot\n \n");
			printf("Choose your operation number: ");
			fgets(number, sizeof(number), stdin);
			sscanf(number,"%i", &operation);
			
			if (operation != 1 && operation != 2 && operation != 3 && operation != 4 
					&& operation != 5 && operation != 6)

				printf("Invalid answer, try again...\n");	

		} while (operation != 1 && operation != 2 && operation != 3 && operation != 4 
				&& operation != 5 && operation != 6);

		switch (operation) {

		case 1:
			sum();
			break;

		case 2:
			sub();
			break;
			
		case 3:
			multi();
			break;

		case 4:
			div();
			break;

		case 5:
			power();
			break;

		case 6:
			sqroot();
			break;
		}

		do {
			printf("\n");
			printf("Do you want to calculate more? (Y/N) ");
			fgets(input, sizeof(input), stdin);
			sscanf(input, " %c", &confirmation);

			if (confirmation != 'Y' && confirmation != 'N' && confirmation != 'y' 
					&& confirmation != 'n')
				
				printf("Invalid answer, try again...\n");
			
		} while (confirmation != 'Y' && confirmation != 'N' && confirmation != 'y' 
				&& confirmation != 'n');

		
		if (confirmation == 'N' || confirmation == 'n') {
			
			printf("Alright, goodbye.\n");
			break; // exit loop.
		}
		
		if (confirmation == 'Y' || confirmation == 'y') {
			
			printf("\n");	
			continue; // go straight to the beginning of loop.
		}

	}
	
	return 0;
}
// --- Main End ---


// Functions Logic:
void sum(void)
{

	char num1[100] = {0}, num2[100] = {0};
	double x = 0, y = 0, z = x + y;
	printf("First number: ");
	fgets(num1, sizeof(num1), stdin);
	sscanf(num1, "%lf", &x);
	
	printf("Second number: ");
	fgets(num2, sizeof(num2), stdin);
	sscanf(num2, "%lf", &y);
	
	printf("Result: "), printf("%.2f", z);
	
	

}

void sub(void)
{

	float x, y, z;
	printf("First number: ");
	scanf("%f", &x);
	printf("Second number: ");
	scanf("%f", &y);
	z = x - y;
	printf("Result: "), printf("%.2f", z);
}

void multi(void)
{
	float x, y, z;
	printf("First number: ");
	scanf("%f", &x);
	printf("Second number: ");
	scanf("%f", &y);
	z = x * y;
	printf("Result: "), printf("%.2f", z);
}

void div(void)
{
	float x, y, z;
	printf("First number: ");
	scanf("%f", &x);
	printf("Second number: ");
	scanf("%f", &y);
	z = x / y;
	printf("Result: "), printf("%.2f", z);
}

void power(void)
{
	float x, y, z;
	printf("base number: ");
	scanf("%f", &x);
	printf("Exponential number: ");
	scanf("%f", &y);
	z = pow(x, y);
	printf("Result: "), printf("%.2f", z);
}

void sqroot(void)
{
	float x, y;
	printf("Base number: ");
	scanf("%f", &x);
	y = sqrtf(x);
	printf("Result: "), printf("%.2f", y);
}
