//5. Write C program to enter a number and print its reverse & check weather num is palindrome or not?
#include<stdio.h>

void main(){
	int no,rev=0,r,o;
	printf("Enter Value :-");
	scanf("%d",&no);
	o=no;
	
	while(no!=0){
		r=no%10;
		rev=rev*10+r;
		no=no/10;
	}
	if(o==rev){
		printf("This is a palindrome. %d",o);
	}else{
		printf("This is not a palindrome. %d",o);
	}
}

