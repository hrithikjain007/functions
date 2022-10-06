// find fist capital using recursion
  


#include<stdio.h>
void capl(char *);
void main()
{

char s[30];
printf("\nenter the string\n");
scanf("%s",s);
capl(s);


}

void capl(char *p)
{
 if(*p<91)
   {
    printf("%c",*p);
     return ;
    }
  capl(p+1);
}
