%{
#include<stdio.h>
int k=0;
%}

%%
[a-zA-Z]+ {if(yyleng>k){k=yyleng;} }
%%

int main()
{
printf("Enter the string \n");
yylex();
printf("The highest length of string  is %d ",k);
}
int yywrap(){}
