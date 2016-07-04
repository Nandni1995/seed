#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,k=0,sum[10],t=1,a;
clrscr();
scanf("%d",n);
a=n;
while(n!=0)
{
sum[k++]=n%10;
n=n/10;
}
for(i=1;i<k;i++)
{
t=t*sum[i];
}
printf("%d",t*a);
getch();
}
