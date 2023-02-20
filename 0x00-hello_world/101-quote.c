#include <stdio.h>
#include <unistd.h>
/**
 * main - short description
 * Return: Return description
 */
int main(void)
{
	const char msg[] = 
	"and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
	ssize_t len = sizeof(msg) - 1;
	write(STDERR_FILENO, msg, len);
	
	return (1);
}
