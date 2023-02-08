#include<stdio.h>
int *oddarr(int);
int *oddarr(int n){
	static int oddnum[20];
	int i,odd=1;
	for(i=0;i<n;i++){
		oddnum[i]=odd;
		odd+=2;
	}	
	return oddnum;
}
int main(){
	int *a;
	a=oddarr(10);
	for(int i=0;i<10;i++){
		printf("%d\n",a[i]);
	}
}