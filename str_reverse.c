#include<stdio.h>
#include<string.h>
int main(){
	char a[10],b[10];
	printf("Enter the string:\n");
	gets(a);
	strcpy(b,strrev(a));
	printf("%s",b);
	return 0;
}