#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * simple_print_buffer - prints buffer in hexa
 * @buffer: the address of memory to print
 * @size: the size of the memory to print
 *
 * Return: Nothing.
 */
void simple_print_buffer(char *buffer, unsigned int size)
{
    unsigned int i;

    i = 0;
    while (i < size)
    {
        if (i % 10)
        {
            printf(" ");
        }
        if (!(i % 10) && i)
        {
            printf("\n");
        }
        printf("0x%02x", buffer[i]);
        i++;
    }
    printf("\n");
}

/**
 * main - check the code for
 *
 * Return: Always 0.
 */
int main(void)
{
    char *p;
    int i;

    p = malloc(sizeof(char) * 30);
    printf("Size of p with malloc(): %lu\n", sizeof(*p));
    p = _realloc(p, sizeof(char) * 30, sizeof(char) * 120);
    if (p == NULL)
    {
	    printf("p returned is NULL\n");
	    return (1);
    }
    printf("size of p (%lu)\n", sizeof(p));
    for (i = 0; i < 120; i++)
	    printf("Value of p[%d] = %c\n", i, p[i]);
    i = 0;
    while (i < 120)
    {
	    p[i++] = 98;
    }
    for (i = 0; p[i]; i++)
	    printf("Value of p[%d] = %d\n", i, p[i]);
    simple_print_buffer(p, 120);
    free(p);
    return (0);
}
