#include <stdio.h>
#include <string.h>

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
	printf("           Please entrer the numbers you want to operate:\n", );
	printf("           Number 1: ");
	scanf("%d%*c",&i_i_num1);
	printf("           Number 2: ");
	scanf("%d%*c",&i_i_num2);
	printf("           Which task do you want me to do? (1)(2)(3)\n");
	printf("           ");
	scanf("%d%*c",&i_i_menu_rta);

	if (i_i_menu_rta!=1 && i_i_menu_rta!=2 && i_i_menu_rta!=3) {

		printf("\n           Your choose it's invalid, please select other one: \n" );
		scanf("%d%*c",&i_i_menu_rta);

	}

switch (i_i_menu_rta) {
	case 1: sum_return=sum();
					strcpy(rta_bin[64],dec_bin(sum_return));
					printf("           Your number is \n");
	break;
	case 2: sub_return=Subtract();
					printf("           Your number is %d\n",sub_return);
	break;
	case 3: mult_return=multiply();
					printf("           Your number is %d\n",mult_return);
	break;
}

}


int sum() {
					int num1,num2;
					printf("           Please enter the numbers you want to sum: \n");

					return num1+num2;
}

int Subtract(){

					int num1,num2;
					printf("           Please enter the numbers you want to Subtract (number1-number2): \n");
					printf("           Number 1: ");
					scanf("%d%*c",&num1);
					printf("           Number 2: ");
					scanf("%d%*c",&num2);
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

void dec_bin(int a){
	char num_bin[64];
	int cont=0,div=a;

	while (div!=1) {
			if (div%2==1) {
				num_bin[cont]=1;
			}else{num_bin[cont]=0;}
			div=div/2;
			cont++;
	}
	printf("your number is: %s\n",&num_bin);
	return 0;
}
