#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main(){
	int n,i=0,k=0,count=0;;
	char x[20],y[20];
	printf("enter the string1\n");
	gets(x);
	printf("enter the string2\n");
	gets(y);
	while(x[i]!='\0'){
		i++;
	}
	while(y[k]!='\0'){
		k++;
	}
	for(int j=0;j<i;j++){
		if(x[j]==y[j]){
			count++;
		}
	}
	if(count==i){
		printf("Strings are same\n");
		}
		else{
			printf("not same\n");
		}
		
	return 0;
	
}