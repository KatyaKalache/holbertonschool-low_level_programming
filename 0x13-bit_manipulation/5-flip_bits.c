/**
 * flip_bits - the number of bits to be flipped
 * @n: number
 * @m: to be flipped
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int i;
	unsigned int be_flipped = 0;
	unsigned int size;

	size = sizeof(unsigned long int) * 8 - 1;

	for (i = 0; i < size; i++)
	{
		if (((n ^ m) >> i) & 1)
			be_flipped++;
	}
	return (be_flipped);
}
