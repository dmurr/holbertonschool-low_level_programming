
/**
 * _islower - checks if char is lowercase
 * @c: the char to be checked
 *
 * Return: 1 if lowercase, 0 otherwise
 */

int _islower(int c)
{
	if (c < 123 && c > 96)
		return (1);
	else
		return (0);
}
