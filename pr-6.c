//6. Write C program to calculate factorial of a number.
#include<stdio.h>

void main(){
	int i, f=1,no;
	
	printf("Enter Number :-");
	scanf("%d,&no");
	
	for(i=1;i<=no;i++){
		f=f*i;
	}
	printf("factorial of a number: %d",f);
}
