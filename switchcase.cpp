#include <stdio.h>
int main() {
	int choice;
	double num1,num2,result;
	do{
		printf("\n===== Arithmetic calculator =====\n");
		printf("1.Addition \n");
		printf("2.Substraction \n");
		printf("3.Multiplication \n");
		printf("4.Division \n");
		printf("5.Exit\n");
		printf("Enter your choice(1-5):");
		scanf("%d",&choice);
		
		switch (choice){
			case 1:
				printf("Enter two numbers:");
				scanf("%lf %lf",&num1,&num2);
				result = num1 + num2;
				printf("Result: %.2lf + %.2ld = %.2lf\n",num1,num2,result);
				break;
			case 2:
				printf("Enter two numbers:");
				scanf("%lf %lf",&num1,&num2);
				result = num1 - num2;
				printf("Result: %.2lf + %.2ld = %.2lf\n",num1,num2,result);
				break;
			case 3:
				printf("Enter two numbers:");
				scanf("%lf %lf",&num1,&num2);
				result = num1 * num2;
				printf("Result: %.2lf * %.2lf = %.2lf\n",num1,num2,result);
				break;
			case 4:
				printf("Enter two numbers:");
				scanf("%lf %lf",&num1,&num2);
				if(num2 == 0) {
					printf("Error: Not divisible by zero.\n");
				} else {
					result = num1/num2;
					printf("Result: %.2lf / %.2lf =%.2lf\n",num1,num2,result);
				}
				break;
			case 5:
				printf("Existing the program...\n");
				break;
			default:
				printf("Invalid choice!Please enter a number between 1 to 5");
		}
	}while(choice != 5);
	return 0;
}
