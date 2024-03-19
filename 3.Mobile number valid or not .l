%{
#include <stdio.h>
%}

%%

[0-9]+ { printf("%s is entered NUM UPDATED\n", yytext); }

%%

int main()
{
printf("enter the NUM");
yylex();

}
int yywrap()
{
  return 1;
}
