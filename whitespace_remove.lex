//program to remove whitespaces
%{
#include<stdio.h>
#include<string.h>
%}
%%

[ \t][ \t]* {fprintf(out," "); }
[\n] {
                fprintf(out,"\n"); }
%%
main() {
        yyin = fopen("file1.txt","r");
        out = fopen("file2.txt","w");
        yylex();
}
