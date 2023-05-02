#include <stdio.h>
#include <stdlib.h>

struct User
{
	char *name;
	char *email;
	int age;
};
struct User *new_user(char *name, char *email, int age)
{
	struct User *user;
	
	user = malloc(sizeof(struct User));
	user->name = "mane";
	user->email = "emman";
	user->age = 12;
	return (user);
}
int main(void)
{
	struct User *user;

	user = new_user("clement", "dada@gmail.com", 18);
	if (user == NULL)
		return (1);
	printf("User %s created!\n", user->name);
	printf("His email is: %s\n", user->email);
	printf("And he is %d years old\n", user->age);
	return (0);
}
