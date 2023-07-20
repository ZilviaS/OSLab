#include<stdio.h>
int main(){
	int a,b,c = 0,i;
	while(i < 1){
		printf("Enter Number : ");
		scanf("%d",&a);
		if (a <1){
			i = 1;
		}else{ b += a; c++ ; a = 0;}
	}
	printf("Sum : %d ,AVG : %d,C : %d",b,b/c,c);
	return 0;
}
