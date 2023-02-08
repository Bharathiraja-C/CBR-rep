#include<stdio.h>
int main(){
	int n;
	printf("Enter the value:");
	scanf("%d",&n);
	int *p;
	p=&n;
	printf("Address of variable is %d\n",p);
	printf("value of the variable is %d\n",*p);
	return 0;
}