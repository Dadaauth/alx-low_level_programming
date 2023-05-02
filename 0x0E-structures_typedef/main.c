#include <stdio.h>

struct User{
	char *name;
	char *email;
	int age;
};

int main(void)
{
	struct User user;
	struct User *ptr;

	/**
	user.name = "Clement";
	user.email = "dadaauthourity23@gmail.com";
	user.age = 18;
	printf("name = %s, email = %s, age = %d\n", user.name, user.email, user.age);*/
	ptr = &user;

	(*ptr).name = "Taiwo";
	(*ptr).email = "taiwo@gmail.com";
	(*ptr).age = 16;
	printf("name = %s, email = %s, age = %d\n", (*ptr).name, (*ptr).email, (*ptr).age);

	ptr->name = "Kehinde";
	ptr->email = "kehinde@gmail.com";
	ptr->age = 16;

	printf("name = %s, email = %s, age = %d\n", ptr->name, ptr->email, ptr->age);
	return (0);
}
