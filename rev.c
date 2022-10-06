//write a program to revers a string
#include<stdio.h>
void rev(char *);
void main()
{
char s[30];
printf("\nenter the string\n");
scanf("%s",s);
rev(s);
}
void rev(char *p)
{ 

if(*p)
   rev(p+1);
  printf("%c",*p);

}
