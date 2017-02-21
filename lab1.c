#include <stdio.h>
#include <string.h>
#include <math.h>


#define BINARY 'b'
#define SUMA 1

int sum(int num1, int num2);
int Subtract(int num1, int num2);
int multiply(int num1, int num2);
void dec_bin(int n);
int bin_dec(long long n);

int main()
{
	int sum_return, sub_return, mult_return, i_i_menu_rta, i_i_num1, i_i_num2;
	char i_c_menu_rta, i_c_menu_rta1='y';
	printf("--------------------------------------------------------------------------------\n");
	printf("--------------------------------------------------------------------------------");
	printf("\n         Hello, I am a kawaii calculator, I can do the next tasks: \n\n");
	while (i_c_menu_rta1=='y') {
		printf("                          1. Sum two numbers.\n");
		printf("                          2. Subtract two numbers.\n");
		printf("                          3. Multiply two numbres.\n\n");
		printf("           The result will be in binary.\n");
		printf("           Which task do you want me to do? (1)(2)(3)\n");
		printf("           ");
		scanf("%d%*c",&i_i_menu_rta);
		if (i_i_menu_rta!=1 && i_i_menu_rta!=2 && i_i_menu_rta!=3) {
			printf("           Your choose it's invalid, please select other one: (1)(2)(3)\n" );
			printf("           ");
			scanf("%d%*c",&i_i_menu_rta);
		}
		printf("           What kind of number are you gonna enter? (b (binary) / d (decimal))\n");
		printf("           ");
		scanf("%c%*c",&i_c_menu_rta);
		if (i_c_menu_rta!=BINARY && i_c_menu_rta!='d') {
			printf("           Your choose it's invalid, please select other one: (b (binary) / d (decimal))\n" );
			printf("           ");
			scanf("%c%*c",&i_c_menu_rta);
		}
		if (i_c_menu_rta=='b') {
			long long i_l_num1, i_l_num2;
			printf("           Please enter the numbers you want to operate:\n");
			printf("           Number 1: ");
			scanf("%lld%*c",&i_l_num1);
			i_i_num1=bin_dec(i_l_num1);
			printf("           Number 2: ");
			scanxf("%lld%*c",&i_l_num2);
			i_i_num2=bin_dec(i_l_num2);
		}else{
			printf("           Please enter the numbers you want to operate:\n");
			printf("           Number 1: ");
			scanf("%d%*c",&i_i_num1);
			printf("           Number 2: ");
			scanf("%d%*c",&i_i_num2);
		}

		switch (i_i_menu_rta) {
			case SUMA: sum_return=sum(i_i_num1,i_i_num2);
							dec_bin(sum_return);
			break;
			case 2: sub_return=Subtract(i_i_num1,i_i_num2);
							dec_bin(sub_return);
		  break;
		  case 3: mult_return=multiply(i_i_num1,i_i_num2);
							dec_bin(mult_return);
		  break;
	  }
		printf("           Do you want to do another task? (y/n)\n");
		printf("           ");
		scanf("%c%*c",&i_c_menu_rta1);
	}
	printf("           Thank you very much for use our service, come back soon.\n");
	printf("                                                                   \n");
	printf("                                     __                            \n");
	printf("                                    |  |                           \n");
	printf("                                    |  |                           \n");
	printf("                              ____--   |______                     \n");
	printf("                                        ______|                    \n");
	printf("                                        ______|                    \n");
	printf("                              ____      ______|                    \n");
	printf("                                  --_________|                     \n\n\n");
}

int sum(int num1, int num2) {
					return num1+num2;
}

int Subtract(int num1, int num2){
					return num1-num2;
}

int multiply(int num1, int num2){
					return num1*num2;
}

void dec_bin(int n){

	unsigned long long binaryNumber = 0;
	int remainder, i = 1, step = 1;

	while (n!=0)
	{
			remainder = n%2;
			n /= 2;
			binaryNumber += remainder*i;
			//printf("%d\r",remainder );
			i *= 10;
	}
	  printf("           Your answer is: %lld\n", binaryNumber);
}

int bin_dec(long long n){
    int decimalNumber = 0, i = 0, remainder;
    while (n!=0)
    {
        remainder = n%10;
        n /= 10;
        decimalNumber += remainder*pow(2,i);
        ++i;
    }
    return decimalNumber;
}
