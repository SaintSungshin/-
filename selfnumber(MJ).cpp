#include <iostream>
using namespace std;
#include <string>

int least(int sugar);
int main() {
	int sugar; //입력
	cout << " 범위";
	cin >> sugar;
	
	cout << least(sugar) << endl;
	
	system("pause");
	return 0;
}

int least(int amount) {
	int big, small; //5kg, 3kg 봉지

	if (amount < 3 || amount > 5000)
		return -1;

	else {
		small = 0;
		big = 0;
		while (big == 0) {
			
			if ((amount - (small * 3)) % 5 == 0) {
				big = (amount - (small * 3)) / 5;
			}

			else if ((small * 3) < amount)
				small++;

			else
				small = 0;
				break;
		}

		return (small == 0 && big == 0) ? -1 : small + big ;
		
	}
}