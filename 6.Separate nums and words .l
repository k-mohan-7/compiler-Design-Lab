%{
#include<stdio.h>
%}

%%
[0-9]+ { printf("%s NUmber Found\n",yytext); }
[A-Za-z]+ { printf("%s Word Found\n",yytext); }
%%

int main()
{
printf("Enter the sentence you need to detect Words and NUmbers");
yylex();
}

int yywrap(){}
