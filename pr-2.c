//2. Write C program to print multiplication table of any number.
#include<stdio.h>

void main(){
	int no,i=1,ans;
	printf("Enter no :-");
	scanf("%d",&no);
	
	while(i<=10){
		ans=no*i;
		printf("%d * %d = %d \n", no, i, ans);
		i++;
	}
}
