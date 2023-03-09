#include "main.h"
#include <stdio.h>

int check_equal(char *s1, char *s2, int i)
{
	int k;

	k = 1;
	

	if ((*(s1 + i) != '\0' && *(s2 + i) != '\0') || *(s2 + i)== '*')
	{
		if ((*(s1 + i) != *(s2 + i)) || *(s2 + i) != '*')
			return (0);
		i++;
		k = check_equal(s1, s2, i);
	}
	return (k);
}
int wildcmp(char *s1, char *s2)
{
	return (check_equal(s1, s2, 0));
}
