#include<stdio.h>
int main() {
	int num1,num2,sum,sub,mul,div;
	printf("enter two integers:");
	scanf("%d %d",&num1,&num2);
	
	//calculate the sum 
	sum=num1+num2;
	sub=num1-num2;
	mul=num1*num2;
	div=num1/num2;
	
	printf("%d+%d = %d\n",num1,num2,sum);
	printf("%d-%d= %d\n",num1,num2,sub);
	printf("%d*%d= %d\n",num1,num2,mul);
	printf("%d/%d= %d",num1,num2,div);	
	
	return 0;
}
