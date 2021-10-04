#include <iostream>
#include <cmath>

// � ������� �� 10^-6 ��������� �������� ������� ln((1+x)/x) �� ������� ��������

using namespace std;

int main()
{	
	// ��������� ����
	float S, x, a;
	unsigned int n;

	// ������� �������� � �� ���������� ���� ����
	cout << "Input x: ";
	cin >> x;
	n = 1;
	S = 0;
	a = 0;

	// ���������� �����
	do 
	{
		a += pow(-1, n + 1) * pow(x, n - 1) / n;
		n++;
		S += pow(-1, n + 1) * pow(x, n - 1) / n;
	} while ((S-a) > 0.000001);

	// �������� ���������
	cout << "Answer: " << S;
	return 0;
}
