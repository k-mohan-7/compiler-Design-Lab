//No of Whitespaces & Newline
#include<stdio.h>
#include<string.h>
int main()
{
	char string[100];
	printf("Enter the string : ");
	scanf("%[^;]s",&string);
	int i,s=0,nw=0;
	int n=strlen(string);
	for(i=0;i<=n;i++){
		if(string[i]==' '){
			s+=1;	
		}
		else if(string[i] == '\n'){
			nw+=1;
		}
	}
	printf("No of whitespaces : %d",s);
	printf("\nNo of New lines : %d", nw+1);
}