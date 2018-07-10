#ifndef _HOLBERTON_H_
#define _HOLBERTON_H_

void _putchar(char);



void print_alphabet(void);


/**
 * print_alphabet_x10 - prints alphabet 10 times with newline
 *
 */
void print_alphabet_x10(void);


/**
 * _islower - checks for lowercase letter
 * @c: letter to be checked
 *
 * Return: 1 if lowercase, 0 otherwise
 */
int _islower(int c);


/**
 * _isalpha - checks letter for lowercase or uppercase
 * @c: character to be checked
 *
 * Return: 1 if greater than zero, 0 if 0, -1 if less than zero
 */
int _isalpha(int c);

/**
 * print_sign - checks if positive or negative
 * @n: number to be checked
 *
 * Return: sign
 */
int print_sign(int n);

/**
 * _abs - computes absolute value of an integer
 * @int: integer of which we find the absolute value 
 *
 * Return: distance from zero
 */
int _abs(int);

/**
 * print_last_digit - last digit
 *
 */
int print_last_digit(int);


/**
 * jack-bauer - print every minute of the day
 *
 */
void jack_bauer(void);

/**
 * times_table - create multiplication table
 *
 */
void times_table(void);


/**
 * add - return sum
 * @int: 1st num to be added
 *
 */
int add(int, int);


/**
 * print_to_98 - print all numbers betweet n and 98
 * @n: number to be checked
 *
 */
void print_to_98(int n);


#endif /* _HOLBERTON_H_ */
