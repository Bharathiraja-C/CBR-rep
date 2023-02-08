#include<stdio.h>
int main()
{
	int i,j=0,k=0,l=0;
	char c[10];
	printf("Enter the character\n");
	gets(c);
	while(c[i]!='\0'){
		if((c[i]>='a' && c[i]<='z')||(c[i]>='A' && c[i]<='Z')){
			j++;
		}
		else if(c[i]>='0' && c[i]<='9'){
			k++;
		}
		else{
			l++;
		}
		i++;
	}
	printf("no of alpha %d\n",j);
	printf("no of numerics %d\n",k);
	printf("no of special chars %d\n",l);
	return 0;
}