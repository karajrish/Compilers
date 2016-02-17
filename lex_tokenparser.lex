d[0-9]
l[A-Za-z]
%{
        //int idcnt=0,kwcnt=0,opcnt=0;
        
	#include<stdio.h>
        #include<string.h>
        int idcnt=0,kwcnt=0,opcnt=0,constants=0;
        char line[20];
        int count=0,i=0;
        FILE *out;
%}
%%

int|float|for   {
                kwcnt++;
                printf("%s is a keyword\n",yytext);
                }
({l}|_)({l}|{d}|_)* {
                idcnt++;
                printf("%s is an identifier \n",yytext);
                }
[+-=*/><!] {    opcnt++;
                printf("%s is an operator \n",yytext);
        }
([\t ])* {
                printf("Space encountered");
        }
({d})({d})* {
                constants++;
                printf("%s is a constant",yytext);
                }

\n      {
        printf("no of identifier %d\n",idcnt);
        printf("no of keyword %d\n",kwcnt);
        printf("no of operators %d\n",opcnt);
        printf("no of constants %d\n",constants);
        }
({d})({l}|{d})* {
                printf("Invalid identifier\n");
                }
%%
int main()
{
yyin=fopen("in.c","r");
out=fopen("out.c","w");
yylex();
getch();
}
int yywrap()
{
return 1;
}
