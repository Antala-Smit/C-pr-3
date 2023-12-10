//4. Write C program to find sum of first and last digit of a number.
#include<stdio.h>

void main(){
	int no, sum=0, first,last;
	printf("Enter first and last digit of a number :- ");
	scanf("%d",&no);
	
	last=no%10;
	
	first=no;
	
	while(no>=10){
		no=no/10;
	}
	
	first=no;
	
	nsum=first+last;
	
	printf("sum of first and last digit of a number :-%d",sum);
}
