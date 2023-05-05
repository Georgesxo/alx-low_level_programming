#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * flip_bits - counts the number of bits to change
 * to get from one number to another
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int count = 0;
unsigned long int exclusive = n ^ m;
unsigned int i = 0;
while (exclusive > 0)
{
if (exclusive & 1)
count++;
exclusive >>= 1;
i++;
}
return (count);
}
