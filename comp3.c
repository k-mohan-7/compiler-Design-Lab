//Comment Or Not
#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	printf("Enter a string : ");
	scanf("%s",&string);
	int n = strlen(string);
	if(string[0]=='/') 
	{
		if(string[1]=='/')
		{
			printf("Its a comment");
		}
		else if(string[1]=='*'){
			if(string[n-1]=='/'){
				if(string[n-2] == '*'){
					printf("Its a comment");
				}
				else{
					printf("Its not a comment");
				}
			}
			else{
				printf("Its not a comment");
			}
		}
		else{
			printf("Its not a comment");
		}
	}
	else{
		printf("Its not a comment");
}
	return 0;
}		