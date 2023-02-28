/**
 * _strlen - returns the length of a string
 * @s: the string to work on
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}
