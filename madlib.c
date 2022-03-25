#include <stdio.h>
int main(){
	char noun[15];
	char adjective[15];
	char subject[15];
	printf("Enter the name of a person: ");
	fgets(noun, 15, stdin);
	printf("Enter a adjective: ");
	scanf("%s", &adjective);
	printf("Enter a subject: ");
	scanf("%s", &subject);
//idk why fgets didnt work here in the next /line i had to use scanf.
//	fgets(subject, 15, stdin);
	printf("my name is %s", noun);
	printf("i am a %s person", adjective);
	printf("my fav subject is %s", subject);
	return 0;
}
