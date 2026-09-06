#include<stdio.h>
#include<stdlib.h>
int main()
{
int a,b;char x;
printf("enter a: x :b");
scanf("%d %c %d",&a,&x,&b);
switch(x)
{
case '+':printf("%d",a+b);
break;
case '-': printf ("%d",a-b);
break;
case '*':printf("%d",a*b);
break;
case '/':printf("%d",a/b);
break ;
}
return(0);
}