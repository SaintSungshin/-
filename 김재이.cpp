#include <iostream>
using namespace std;

int main()
{
	int array[10000];


	for (int generator = 0; generator < 10000; generator++)
	{
		if (generator / 10 == 0)
		{
			int value;
			value = generator + generator;

			if (value < 10000)
			{
				array[value] = 1;
			}
		}

		if (generator / 100 == 0)
		{
			int value;
			value = generator + (generator / 10) + (generator % 10);
			if (value < 10000)
			{
				array[value] = 1;
			}
		}

		if (generator / 1000 == 0)
		{
			int value;
			int first = (generator % 100) % 10;
			int second = (generator % 100) / 10;
			int third = generator / 100;
			value = generator + first + second + third;
			if (value < 10000)
			{
				array[value] = 1;
			}
		}

		if (generator / 10000 == 0)
		{
			int value;
			int first = ((generator % 1000) % 100) % 10;
			int second = ((generator % 1000) % 100) / 10;
			int third = (generator % 1000) / 100;
			int fourth = generator / 1000;
			value = generator + first + second + third + fourth;
			if (value < 10000)
			{
				array[value] = 1;
			}
		}
	}

	for (int i = 0; i < 10000; i++)
	{
		if (array[i] != 1)
		{
			cout << (i) << endl;
		}
	}

	system("pause");
	return 0;
}