//factorial of number using recursion

#include<stdio.h>
int fact(int);
void main()
{
int a,b,c,n;
printf("\nenter the number\n");
scanf("%d",&n);
c=fact(n);
printf("\nfactorial=%d\n",c);
}
int  fact(int n)
{
  if(n)
  return n*fact(n-1);
  else 
  return 1;

    
}
