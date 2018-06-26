
/**
 * _isalpha - checks if char is in alphabet
 * @c: character to be checked
 *
 * Return: 1 if alpha, otherwise 0
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
