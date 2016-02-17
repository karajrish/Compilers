#include<iostream>
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<vector>
const char Keywords[64][20]={
                  "asm","auto","bool","break","case","catch",
                  "char","class","const","const_cast",
                  "continue","default","delete","do","double",
                  "dynamic_cast","else","enum","explicit",
                  "export","extern","false","float","for",
                  "friend","goto","if","inline","int","long",
                  "main","mutable","namespace","new",
                  "operator","private","protected","public",
                  "register","reinterpret_cast","return",
                  "short","signed","sizeof","static",
                  "static_cast","struct","switch","template",
                  "this","throw","true","try","typedef",
                  "typeid","typename","union","unsigned",
                  "using","virtual","void","volatile",
                  "wchar_t","while"
                };

//vector<string> tokens = new vector<string>;
int no_tokens,no_keywords,no_operators,no_punc,no_literals,no_constants;
using namespace std;
char str[] = "- this, a sample string.";
char delim[]=" ,.-[](){}";
char keywords[][] = {"cin","cout","int","float","char","double"};
void tokenize(char str[], char delim[]);
bool isvalidid(char str[])
int main()
{
        tokenize(str,delim);

        return 0;
}
void tokenize(char str[], char delim[])
{

        char * pch;
        pch = strtok(str,delim);
        while(pch !=NULL)
        {
                printf("%s\n",pch);
                tokens.push_back(pch);
                pch = strtok(NULL,delim);
        }

}
const bool isPositiveDigit(constchar* Token)
 {
if(strlen(Token)>2 || strlen(Token)==0)
       return false;

    elseif(strlen(Token)==2 && (Token[0]!='+' ||
                       Token[1]=='0' || !isdigit(Token[1])))
       return false;

    elseif(strlen(Token)==1 && (Token[0]=='0' || !isdigit(Token[0])))
       return false;

    return true;
 }

const bool isNegativeDigit(constchar* Token)
 {
    if(strlen(Token)!=2 || Token[0]!='-' ||
                       Token[1]=='0' || !isdigit(Token[1]))
       return false;

    return true;
 }

 const bool isIdentifier(constchar* Token)
 {
    if(!isalpha(Token[0]) && Token[0]!='_')
       return false;

    int length=strlen(Token);

    for(int count=1;count<length;count++)
    {
       if(!isalpha(Token[count]) && !isdigit(Token[count]) &&
                             Token[count]!='_')
      return false;
    }

    return true;
 }
/*
bool isvalidid(char str[])
{
        if(isalpha(str[0])){
                return true;
        }
        else if(str[0]=='_')
        {
                return true;
        }
        else return false;
}*/
const bool isIdentifier(const char* Token)
{
    if(!isalpha(Token[0]) && Token[0]!='_')
       return false;

    int length=strlen(Token);

    for(int count=1;count<length;count++)
    {
       if(!isalpha(Token[count]) && !isdigit(Token[count]) &&
                             Token[count]!='_')
      return false;
    }

    return true;
 }

const bool isKeyword(const char* Token)
 {
    if(strlen(Token)>16 || strlen(Token)==0)
       return false;


    for(int count=0;count<64;count++)
    {
       if(strcmpi(Keywords[count],Token)==0)
      return true;
    }

    return false;
 }
