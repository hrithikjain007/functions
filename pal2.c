//to check if a string is palindrom or not

#include<stdio.h>

#include<string.h>
void pal(char *);
void main()
{
char s[20];
printf("enter the string");
scanf("%s",s);
pal(s);
}
void pal( char *p)
{
int i,j;
  for(i=0;p[i];i++);
  for(j=0;j<=i;j++,i--)
  {
      if(p[j]!=p[i])
         break;
   }
   if(j>i)
     printf("\npalindrom\n");
    else 
     printf("\nnot palindrom\n");
    
}
