//program to convert to pig latin
c[a-zA-Z]
v[aeiouAEIOU]
%{
#include<stdio.h>
#include<string.h>
char mod[20];
FILE *out;
int i=0;
char dummy[3] = "say";
%}
%%
({v})({c})* {

                fprintf(out,"%say",yytext);
        }
({c})({c})* {
                //fprintf(out,"%s\n",yytext);
                char mod[20];
                printf("mod: %s",mod);
                //dummy[0] = yytext[0];
                for(i=1;yytext[i]!='\0';i++)
                {
                        mod[i-1] = yytext[i];
                }
                mod[i-1]=yytext[0];
                //printf("mod: %s\n",mod);
                //strcat(mod,dummy);
                mod[i]='\0';
                fprintf(out,"%say",mod);
                }
[^ c][^ \n\t]* { fprintf(out,"%s",yytext); }


[ \t][ \t]* {fprintf(out," "); }
[\n] {
                fprintf(out,"\n"); }
%%
main() {
        yyin = fopen("file1.txt","r");
        out = fopen("file2.txt","w");
        yylex();
}
