#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
	int n=0;
	char c[10];
	printf("enter the string:\n");
	gets(c);
	while(c[n]!='\0'){
		if(isupper(c[n])){
			c[n]=tolower(c[n]);
		}
		else if(islower(c[n])){
			c[n]=toupper(c[n]);
		}
		n++;
	}
	printf("%s",c);
	return 0;
}