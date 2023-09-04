#include "main.h"

/**
 * get_bit - returns the value of the bit at an index in the decimal number
 * @n: the number to search
 * @index: index of a bit
 *
 * Return: value of the bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}
