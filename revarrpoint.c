#include<stdio.h>
int main(){
	int n;
	printf("Enter the size of array:\n");
	scanf("%d",&n);
	int a[n];
	printf("enter the array values\n");
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int *p=a;
	printf("the array values are\n");
	for(int j=n-1;j>=0;j--){
		printf("%d\n",*(p+j));
	}
}