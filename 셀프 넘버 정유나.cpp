#include<iostream>
using namespace std;

//���� + �� �ڸ��� ��
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
�ϴ� ��� �迭�� 0���� �ʱ�ȭ ��Ŵ
1���� ���ؼ� ���� ���� 'list[��-1] = ��'�ϰ�
list���� 0�κκ� ã�Ƽ� �� �ڸ��� ���ϰ�....
�������� 0�κκи� ����ϱ�
*/

int main()
{
	const int NUMBER = 10000;
	int list[NUMBER] = { 0 };	

	for (int i = 1; i <= NUMBER; i++) {	//1���� ���� ���� ���� �߿��� 0�κκ� ã��
		if (list[i - 1] == 0) {
			int a = add(i);
			while (a <= NUMBER) {
				list[a - 1] = a;
				a = add(a);	//���ڸ� �� ���� ���� ������� �� ���ϱ� -> NUMBER���� Ŀ���� ����
			}
		}//���ݱ��� ���ؼ� ������ ���� ���� ã�Ƽ� �ٽ� for������ ���ư���
	}	
	
	for (int i = 0; i < NUMBER; i++) {
		if (list[i] == 0) {
			cout << i + 1 << endl;
		}
	}

	return 0;
}