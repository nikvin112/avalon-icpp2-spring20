#include <iostream>
using namespace std;

enum Grade
{
	F = 1,   // ������
	D = 2,  // �������������������
	C = 3,  // �����������������
	B = 4,  // ������
	A = 5,  // �������      
};
int main()
{
	Grade mark = Grade::B;
	cout << mark << endl;
	int temp;
	cin >> temp;
	mark = static_cast<Grade> (temp);
}