#include <stdio.h>
#include <stdlib.h>
#include <iostream>

int main()
{
	int number1;
	int number2;
	int userOperation;
	int result;
	char quitAnswer = 'n';
	bool appLoop = true;

	do
	{
		system("CLS");
		std::cout << "***WELCOME TO CALCULATOR SAMPLE***" << std::endl << std::endl;
		std::cout << "Write the first number: " << std::endl;
		std::cin >> number1;
		std::cout << "Write the second number: " << std::endl << std::endl;
		std::cin >> number2;

		system("CLS");
		std::cout << "User numbers: " << number1 << " and " << number2 << std::endl << std::endl;
		std::cout << "Select one of the following:" << std::endl;
		std::cout << "1 >> +" << std::endl;
		std::cout << "2 >> -" << std::endl;
		std::cout << "3 >> *" << std::endl;
		std::cout << "4 >> /" << std::endl;
		std::cout << "5 >> %" << std::endl;
		std::cout << "6 >> ^" << std::endl;
		std::cout << "7 >> quit" << std::endl << std::endl;
		std::cout << "OPTION: ";
		std::cin >> userOperation;

		switch (userOperation)
		{
		case 1: //+
			result = number1 + number2;
			printf("%i + %i = %i ", number1, number2, result);
			getchar();
			break;

		case 2: //-
			result = number1 - number2;
			printf("%i - %i = %i ", number1, number2, result);
			getchar();
			break;

		case 3: //*
			result = number1 * number2;
			printf("%i * %i = %i ", number1, number2, result);
			getchar();
			break;

		case 4: // /
			result = number1 / number2;
			printf("%i / %i = %.2f ",number1,number2,(float)number1/number2);
			getchar();
			break;
		
		case 5: //%
			result = number1 % number2;
			printf("%i m %i = %i ", number1, number2, result);  //how to force % printing?
			getchar();
			break;

		case 6: //^
			if (number2 == 0)
			{
				result = 0;
			}
			else
			{
				result = number1;
				for (int i = 1; i < number2; i++)
				{
					result *= number1;
				}				
			}

			printf("%i ^ %i = %i ", number1, number2, result);
			getchar();
			break;

		case 7: //quit
			appLoop = false;
			break;

		default:
			std::cout << "Wrong input. Select 1-7";    //why exits when entering chars?
		}

		std::cout << std::endl << std::endl << "More operations(y/n)?" << std::endl;
		std::cin >> quitAnswer;

		if (quitAnswer == 'n')
		{
			appLoop = false;
		}

}while (appLoop == true);

std::cout << std::endl << "Thanks for using calculator sample";
getchar();
getchar();

return 0;
}
