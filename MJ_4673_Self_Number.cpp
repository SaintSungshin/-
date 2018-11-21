#include <iostream>
using namespace std;

int d(int num) {

	int temp = num;
	int sum = temp;
	int digit;

	while (temp != 0) {
		digit = temp % 10;
		temp /= 10;
		sum += digit;
	}

	return sum;
}

int main() {
	const int MAX = 100;
	int ary[MAX] = { 0 };

	for (int i = 1; i <= MAX; i++) {
		if (ary[i - 1] == 0) {
			int output = d(i);

			while (output <= MAX) {
				ary[output - 1] = output;
				output = d(output);
			}
		}
	}

	for (int j = 0; j < MAX; j++) {
		if (ary[j] == 0)
			cout << j + 1 << endl;
	}

	system("pause");
	return 0;
}