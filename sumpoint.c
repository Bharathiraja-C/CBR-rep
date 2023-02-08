#include<stdio.h>
int main(){
	int a,b,*p,*q,c;
	printf("enter the value of a and b\n");
	scanf("%d",&a);
	scanf("%d",&b);
	p=&a;
	q=&b;
	c=*p+*q;
	printf("sum of %d and %d is %d",a,b,c);
	return 0;
}