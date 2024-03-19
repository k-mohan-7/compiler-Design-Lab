%{
#include<stdio.h>
%}

%%
www\.[a-zA-Z]+\.[com] {printf("you Entered Valid URL");}
[a-zA-Z]\   {printf("you had entered Wrong URL ");}
.|\n  { }
%%

int main()
{
printf("Enter the url");
yylex();
} 
int yywrap(){}
