%{
#include<stdio.h>
int p=0;
int n=0;
%}

%%

[-][0-9]+ { printf("YOu had entered negitive number\n"); n++; }
[0-9]+  { printf("you had entered positve number\n"); p++; }

%%

int main()
{
printf("Enter the number\n");
yylex();
printf("No.of positve numbers is %d\n",p);
printf("No.of negitive numbers is %d\n",n);
}
int yywrap(){}
