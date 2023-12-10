//8. Program Check weather num is prime or not
#include<stdio.h>

void main(){
	int n, i, c=0;
	
	printf("Enter Number :-");
	scanf("%d",&n);
	
	for (i=2; i<=sqrt(n);i++) {
		if(n%i==0){
			c++;
		}
	}
	if(c == 0){
		printf("prime Number");
	}else{
		printf("Not Prime Number");
	}
}

