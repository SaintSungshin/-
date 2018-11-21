#include<iostream>
using namespace std;

//숫자 + 각 자리의 수
int add(int a)
{
	int temp = a;
	int sum = temp;
	int digit;
	
		while (temp != 0) {
			digit = temp % 10;
			temp /= 10;
			sum += digit;
		}

		return sum;
}

/*
일단 모든 배열을 0으로 초기화 시킴
1부터 더해서 나온 값을 'list[값-1] = 값'하고
list값이 0인부분 찾아서 각 자리수 더하고....
마지막에 0인부분만 출력하기
*/

int main()
{
	const int NUMBER = 10000;
	int list[NUMBER] = { 0 };	

	for (int i = 1; i <= NUMBER; i++) {	//1부터 더해 나간 숫자 중에서 0인부분 찾기
		if (list[i - 1] == 0) {
			int a = add(i);
			while (a <= NUMBER) {
				list[a - 1] = a;
				a = add(a);	//각자리 수 더한 값의 결과값을 또 더하기 -> NUMBER보다 커질때 까지
			}
		}//지금까지 더해서 나오지 않은 숫자 찾아서 다시 for문으로 돌아가기
	}	
	
	for (int i = 0; i < NUMBER; i++) {
		if (list[i] == 0) {
			cout << i + 1 << endl;
		}
	}

	return 0;
}
