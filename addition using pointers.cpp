#include<stdio.h>
int main()
{
	int a,b;
	scanf("%d %d",&a,&b);
	int *ptr=&a;
	int *qtr=&b;
	printf("%d",*ptr+*qtr);
}