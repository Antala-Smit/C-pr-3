//1. Write C program to print all alphabets from a to z. using do while loop
#include<stdio.h>

void main(){
	char A;
 	printf("Alphabets from A to Z :- \n");
    A='A';
 
    do{
    	printf("%c ", A);
        A++;
    }while(A<='Z');	
}
