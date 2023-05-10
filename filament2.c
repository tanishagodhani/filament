#include<stdio.h>
main()
{
	char email[100]="tanisha@123gmail.com";
	
	char pass[100]="tanisha123";
	
	char email1[100];
	
	printf("enter your email =");
	gets(email1);
	
	char pass1[100];
	printf("enter your pass=");
	gets(pass1);
	
	if(strcmp(email,email1)==0)
	{
		if(strcmp(pass,pass1)==0)
		{
			printf("login sussesful");
		}
		else
		{
			printf("your pass is wrong");
		}
	}
	else
	{
		printf("youe email is wrong");
	}
}

