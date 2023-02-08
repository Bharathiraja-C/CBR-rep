#include<stdio.h>
int main(){
	int i=0,n,j=0,count;
	char x[10];
	char y[10];
	printf("Enter the string\n");
	gets(x);
	while(x[i]!='\0'){
		i++;
	}
	n=i;
	while(i>=0){
		y[j]=x[i-1];
		i--;
		j++;
	}
	for(int k=0;k<n;k++){
		if(x[k]==y[k]){
			count++;
		}
	}
	if(count==n){
		printf("Palindrome");
	}
	else{
		printf("not a palindrome");
	}
	return 0;	
}