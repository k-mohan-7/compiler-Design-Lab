%{
#include<stdio.h>
%}

%%
[aeiou][A-Za-z]+ { printf("Accepted : %s\n",yytext); }
. { printf("Rejected : %s\n",yytext); }
%%

int main()
{
printf("Enter the string: \n");
yylex();
}

int yywrap(){} 
