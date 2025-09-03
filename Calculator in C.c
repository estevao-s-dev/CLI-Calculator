/* My Calculator in C language */

// Libraries
#include <stdio.h>
#include <stdint.h>
#include <math.h>

// Functions

float sum       (void);
float sub       (void);
float multi     (void);
float div       (void);
float power     (void);
float sqroot    (void);

// -- Main --

int main (void)
{
    printf  ("Hi! I'm the calculator!\nDo you want to calculate? Y/N ", " ");
    char    confirmation;
    scanf   ("%s", & confirmation);

    if (confirmation == 'N')
    {
        printf("Alright, goodbye.\n");
    }
    
    while (confirmation == 'Y')
    {

        printf  ("Operations:\n1. + \n2. - \n3. * \n4. / \n5. ^\n6. Sqroot\n \n");
        char    operation;
        printf  ("Choose your operation number: ");
        scanf   ("%s", & operation);


        if (operation == '1')
        {
                // runs sum function
                sum();
        }

        else if (operation == '2')
        {
                // runs sub function
                sub();
        }

        else if (operation == '3')
        {
                // runs multiplication function
                multi();
        }

        else if (operation == '4')
        {
                // runs division function
                div();
        }

        else if (operation == '5')
        {
                // runs power function
                power();
        }

        else if (operation == '6')
        {
                // runs sqroot function
                sqroot();
        }

        printf  ("\n");
        printf  ("Do you want to calculate more? Y/N ", " ");
        scanf   ("%s", & confirmation);
        
        if (confirmation == 'N')
        {
                printf  ("Alright, goodbye.\n");
                break; // Exit program.
        }

        if (confirmation == 'Y')
        {
                continue; // Program keeps running.
        }
    }

}

// --- xx ---

// Functions Logic

float sum       (void)
{
    float   x;
    printf  ("First number: ");
    scanf   ("%f", & x);
    float   y;
    printf  ("Second number: ");
    scanf   ("%f", & y);
    float   z = x + y;
    return  printf   ("Result: "), printf    ("%.2f", z);
} 

float sub       (void)
{
    float   x;
    printf  ("First number: ");
    scanf   ("%f", & x);
    float   y;
    printf  ("Second number: ");
    scanf   ("%f", & y);
    float   z = x - y;
    return  printf   ("Result: "), printf    ("%.2f", z);

}

float multi     (void)
{
    float   x;
    printf  ("First number: ");
    scanf   ("%f", & x);
    float   y;
    printf  ("Second number: ");
    scanf   ("%f", & y);
    float   z = x * y;
    return  printf   ("Result: "), printf    ("%.2f", z);
}

float div       (void)
{
    float   x;
    printf  ("First number: ");
    scanf   ("%f", & x);
    float   y;
    printf  ("Second number: ");
    scanf   ("%f", & y);
    float   z = x / y;
    return  printf   ("Result: "), printf    ("%.2f", z);
}
float power     (void)
{
    float   x;
    printf  ("base number: ");
    scanf   ("%f", & x);
    float   y;
    printf  ("Exponential number: ");
    scanf   ("%f", & y);
    float   z = pow(x, y);
    return  printf   ("Result: "), printf    ("%.2f", z);
}

float sqroot    (void)
{
    float   x;
    printf  ("Base number: ");
    scanf   ("%f", & x);
    float   z = sqrtf(x);
    return  printf   ("Result: "), printf    ("%.2f", z);

}
