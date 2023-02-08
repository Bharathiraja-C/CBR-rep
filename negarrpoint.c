#include<stdio.h>

int *neg(int a[],int n){
	static int x[10];
	int i,j=0;
	for(i=0;i<n;i++){
		if(a[i]<0){
			x[j]=a[i];
			j++;
		}
	}
	return x;
}
int main(){
	int *a,i,ar[10],n;
	printf("enter the size of aray\n");
	scanf("%d",&n);
	printf("enter the array elements\n");
	for(i=0;i<n;i++){
		scanf("%d",&ar[i]);
	}
	i=0;
	a=neg(ar,n)
	
	printf("The negative elements are\n");
	 while(a[i] != '\0')
		printf("%d\n",a[i++]);
	return 0;
}