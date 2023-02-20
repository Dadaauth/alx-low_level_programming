#include <stdio.h>
#include <unistd.h>
/**
 * main - short description 
 * Return: Return description
 */
int main(void)
{
	const char msg[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(msg) - 1;
 	ssize_t ret = write(STDERR_FILENO, msg, len);
	if (ret != len)
	{
	       	return 1;
	}		    }

	return (1);
}
