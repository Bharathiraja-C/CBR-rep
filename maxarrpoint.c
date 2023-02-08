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
	int max=*p;
	for(int j=0;j<n;j++){
		if(max<*(p+j)){
			max=*(p+j);
		}
	}
	printf("%d\n",max);
}