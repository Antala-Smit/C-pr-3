//3. Write C program to count number of digits in a number.
#include<stdio.h>

void main(){
	int no, co=0, i;
	printf("Enter Number :- ");
	scanf("%d",&no);
	i=no;
	
	while(i!=0){
		i=i/10;
		co++;
		
	}
	printf("Number of digits :- %d",co);
}
