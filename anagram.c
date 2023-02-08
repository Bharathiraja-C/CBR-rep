#include<stdio.h>
#include<string.h>
int main(){
	int i,j,t,k,n=0,m=0,count=0;
	char x[10],y[10];
	printf("enter the 1st string\n");
	gets(x);
	printf("enter the 2nd string\n");
	gets(y);
	while(x[m]!='\0'){
		m++;
	}
	while(y[n]!='\0'){
		n++;
	}
	for(i=0;i<m;i++){
		for(j=i+1;j<m;j++){
		if(x[i]<x[j]){
			t=x[i];
			x[i]=x[j];
			x[j]=t;
		}
	}
	}
	for(j=0;j<n;j++){
		for(i=j+1;i<n;i++){
		if(y[j]<y[i]){
			k=y[j];
			y[j]=y[i];
			y[i]=k;
		}
	}
	}
	for(int l=0;l<m;l++){
		if(x[l]==y[l]){
			count++;
		}
	}
	if(count==m){
		printf("Anagram");
	}
	else{
		printf("not an anagram");
	}
	return 0;
}