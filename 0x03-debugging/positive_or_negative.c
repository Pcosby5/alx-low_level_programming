#include "main.h"

/**
 * positive_or_negative - Determines if a number is zero, positive or negative
 * 0: is the number to investigate 
 * Return: Always 0 (Success)
 */

void positive_or_negative(int i)
{

if (i > 0)
{
printf("%d is positive\n", i);
}
else if (i < 0)
{
printf("%d is negative\n", i);
}
else
{
printf("%d is zero\n", i);
}
return;
}
