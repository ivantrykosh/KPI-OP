#include <iostream>
#include <cmath>

// � ������� �� 10^-6 ��������� �������� ������� ln((1+x)/x) �� ������� ��������

using namespace std;

int main()
{	
	// ��������� ����
	float s, x, a, S;
	unsigned int n;

	// ������� �������� � �� ���������� ���� ����
	cout << "Input x: ";
	cin >> x;
	n = 1;
	S = 1;

	// ���������� �����
	do 
	{
		a = pow(-1, n + 1) * pow(x, n - 1) / n;
		n++;
		s = pow(-1, n + 1) * pow(x, n - 1) / n;
		S += s;
	} while (abs(s-a) > 0.000001);

	// �������� ���������
	cout << "Answer: " << S;
	return 0;
}
