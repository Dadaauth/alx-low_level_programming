#include <stdio.h>
#include <stdbool.h>
#define _GNU_SOURCE
#include <dlfcn.h>
#include <time.h>
 
int rand()
{	
	static int count = 1;
	int rtn_val = 0;
	switch (count)
	{
		case 1:
			rtn_val = 8;
			break;
		case 2:
			rtn_val = 8;
			break;
		case 3:
			rtn_val = 7;
			break;
		case 4: 
			rtn_val = 9;
			break;
		case 5:
			rtn_val = 23;
			break;
		case 6:
			rtn_val = 74;
			break;
	}
	count++;
	return (rtn_val);
}
/**
time_t time(time_t *tloc)
{
	return (0);
}

int srand()
{

}
int random()
{
	return (12);
}
int rand_r()
{
	return (12);
}
int random_r()
{
	return (12);
}
*/
