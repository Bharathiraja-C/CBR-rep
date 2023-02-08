#include<stdio.h>
int swap(int *,int *);
int main(){
	int a,b;
	printf("enter the values of a and b\n");
	scanf("%d%d",&a,&b);
	printf("Before swap\n");
	printf("%d\n%d\n",a,b);
	swap(&a,&b);
	printf("After swap\n");
	printf("%d\n%d",a,b);
	
}
int swap(int *p,int *q){
	int t=*p;
	*p=*q;
	*q=t;
}