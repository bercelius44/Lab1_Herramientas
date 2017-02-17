#include <stdio.h>
#include <string.h>
#include <math.h>


int sum();


int main()
{
	int sum_return, sub_return, mult_return, i_i_menu_rta, i_i_num1, i_i_num2;
	char rta_bin[64];

	printf("\n         Hello, I am a kawaii calculator, I can do the next tasks: \n\n");
	printf("                          1. Sum two numbers.\n");
	printf("                          2. Subtract two numbers.\n");
	printf("                          3. Multiply two numbres.\n\n");
	printf("           The result will be in binary.\n");
	printf("           Please enter the numbers you want to operate:\n");
	printf("           Which task do you want me to do? (1)(2)(3)\n");
	printf("           ");
	scanf("%d%*c",&i_i_menu_rta);
	printf("           Number 1: ");
	scanf("%d%*c",&i_i_num1);
	printf("           Number 2: ");
	scanf("%d%*c",&i_i_num2);


	if (i_i_menu_rta!=1 && i_i_menu_rta!=2 && i_i_menu_rta!=3) {

		printf("\n           Your choose it's invalid, please select other one: \n" );
		scanf("%d%*c",&i_i_menu_rta);

	}

switch (i_i_menu_rta) {
	case 1: sum_return=sum(i_i_num1,i_i_num2);
					dec_bin(sum_return);

	break;
	case 2: sub_return=Subtract(i_i_num1,i_i_num2);
					dec_bin(sub_return);
	break;
	case 3: mult_return=multiply();
					printf("           Your number is %d\n",mult_return);
	break;
}

}


int sum(int num1, int num2) {
					return num1+num2;
}

int Subtract(int num1, int num2){
					return num1-num2;
}

int multiply(){

					int num1,num2;
					printf("           Please enter the numbers you want to multiply: \n");
					printf("           Number 1: ");
					scanf("%d%*c",&num1);
					printf("           Number 2: ");
					scanf("%d%*c",&num2);
					return num1/num2;

}

void dec_bin(int n){
	long long binaryNumber = 0;
	int remainder, i = 1, step = 1;

	while (n!=0)
	{
			remainder = n%2;
			n /= 2;
			binaryNumber += remainder*i;
			i *= 10;
	}
	  printf("           Your answer is: %ld\n", binaryNumber);
	return 0;
}
