#include<stdio.h>
int fact(int);
int main(){
	int n;
	printf("enter the number\n");
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=n;j>i;j--){
			printf(" ");
		}
		for(int j=0;j<=i;j++){
			printf("%d",fact(i)/(fact(i-j)*fact(j)));
			printf(" ");
		}
		printf("\n");
	}
	return 0;
}
fact(int n){
	if(n==0){
		return 1;
	}
	return n*fact(n-1);
}