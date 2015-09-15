//  Junk.c
//
//
//
#define _USE_MATH_DEFINES
#include<stdio.h>
#include<math.h>

int main()
{
	int cycle = 1;
	while (cycle)
	{
		double data = 0;
		int choice = 0;
		int right = 0;
		fflush(stdin);

		printf("1 - Evaluate\n");
		printf("2 - Quit\n");

		right = scanf("%i", &choice);
		if (!right)
		{
			printf("Wrong value type for menu selection.\n\n");
			continue;
		}

		switch (choice)
		{
		case 1:
		{
			printf("Input value \n");

			right = 0;
			right = scanf("%lg", &data);
			if (!right)
			{
				printf("Wrong value type.\n\n");
				continue;
			}

			printf("Original value: %lg\n", data);

			double result1 = 0;
			double result2 = 0;
			double temp = 0;
			double top = 0;
			double bottom = 0;

			temp = pow(data, 2);
			temp -= 4;
			if (temp < 0)
			{
				printf("Error: (Arg)^2 must be >= 4\n\n");
				continue;
			}
			temp = sqrt(temp);
			top = (temp * 2 + data * 2);
			if (top < 0)
			{
				printf("Error: 2*arg +2(sqrt(arg^2 - 4)) must be >= 0\n\n");
				continue;
			}
			top = sqrt(top);
			bottom = (temp + data + 2);

			result1 = top / bottom;

			temp = data + 2;
			if (temp < 0)
			{
				printf("Error: (Arg + 2) must be >= 0\n\n");
				continue;
			}
			result2 = (1 / sqrt(temp));


			printf("Z1: %lg\n", result1);
			printf("Z2: %lg\n\n", result2);

			break;
		}
		case 2:
		{
			cycle = 0;
			continue;
		}
		default:
		{
			printf("No such option you dummy! \n\n");
		}
		}


	}
	return 0;
}

