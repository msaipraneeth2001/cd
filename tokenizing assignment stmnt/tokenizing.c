#include<stdio.h>
#include<string.h>
void main()
{ 
	char a[10];
	int x,i;
	printf("enter exp\n");
	gets(a);
	for(i=0;a[i]!='\0';i++)
	{ 
		if((a[i]>='A' && a[i]<='Z') || (a[i]>='a' && a[i]<='z'))
			printf("\n %c is variable",a[i]);
		else if(a[i]=='=')
			printf("\n %c is assignment operator ",a[i]);
		else if( a[i]=='+' || a[i]=='-' || a[i]=='*' || a[i]=='/' )
			printf("\n %c is arithmetic operator ",a[i]);
		else if(a[i]>='0' && a[i]<='9')
			printf("\n %c is integer ",a[i]);
		else
			printf("\n %c is other character",a[i]);
	}
}