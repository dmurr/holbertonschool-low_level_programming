
/**
 * _abs - compute absolute value
 * @i: number to check absolute value of
 *
 * Return: absolute value
 */
int _abs(int i)
{
	if (i > 0)
		return (i);
	else if (i < 0)
		return (i * (-1));
	else
		return (0);
}
