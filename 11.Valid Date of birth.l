%{
#include<stdio.h>
%}

%%
[1-30|31]\-[1-12]\-[1990-2024]+ {printf("YOU Entered Correct date of birth\n");}
[0-9] {printf("you had entered  wrong date of birth\n");}
[a-z] {printf("you had entered  wrong date of birth\n");}

%%
int main()
{
printf("enter the date of birth\n");
yylex();
}
int yywrap(){}
