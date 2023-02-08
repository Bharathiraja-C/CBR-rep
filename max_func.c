#include<stdio.h>
int max(int[],int);
int main(){
	int n;
	printf("Enter the no of elements\n");
	scanf("%d",&n);
	int x[n];
	printf("Enter the elements\n");
	for(int i=0;i<n;i++){
		scanf("%d",&x[i]);
	}
	printf("The maximum value is %d",max(x,n));
	
}
int max(int x[],int n){
	int max=x[0];
	for(int i=0;i<n;i++){
		if(max<x[i]){
			max=x[i];
		}
	}
	return max;
}