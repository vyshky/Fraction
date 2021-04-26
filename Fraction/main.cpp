#include"Fraction.h"

#define HOME_WORK
//#define TYPE_CONVERSIONS

void main()
{
	setlocale(LC_ALL, "");
#ifdef HOME_WORK
	Fraction a;
	cout << "������� ����� 'a' � ������� x/y: "; cin >> a;
	cout << "�� ����� ����� 'a': "; cout << a;
	a.to_proper();
	cout << endl;
	cout << "��������� ������������ ����� � ����������: "; a.print();
	a.to_improper();
	cout << "��������� ���������� ����� � ������������: "; a.print();
	a.reduce();
	cout << "��������� �����: "; a.print();
	Fraction b;
	cout << "������� ����� 'b' � ������� x/y: "; cin >> b;
	cout << "�� ����� ����� 'b': "; cout << b << endl;
	cout << "�������� ��������� (a+=b) ����� : "; (a += b).print();
	cout << "�������� ��������� (a-=b) ����� : "; (a -= b).print();
	cout << "�������� ��������� (a*=b) ����� : "; (a *= b).print();
	cout << "�������� ��������� (a/=b) ����� : "; (a /= b).print();
	Fraction c = a + b;
	cout << "�������� ��������� (a+b) ����� : "; c.print();
	c = a - b;
	cout << "�������� ��������� (a-b) ����� : "; c.print();
	c = a * b;
	cout << "�������� ��������� (a*b) ����� : "; c.print();
	c = a / b;
	cout << "�������� ��������� (a/b) ����� : "; c.print();
	cout << "�������� ��������� (++a) ����� : "; (++a).print();
	cout << "�������� ��������� (a++) ����� : "; a++.print();
	cout << "�������� ��������� (--a) ����� : "; (--a).print();
	cout << "�������� ��������� (a--) ����� : "; a--.print();
	cout << "�������� ��������� (a == b) ����� : " << (a == b) << endl;
	cout << "�������� ��������� (a != b) ����� : " << (a != b) << endl;
	cout << "�������� ��������� (a <= b) ����� : " << (a <= b) << endl;
	cout << "�������� ��������� (a >= b) ����� : " << (a >= b) << endl;
	cout << "�������� ��������� (a > b) ����� : " << (a > b) << endl;
	cout << "�������� ��������� (a < b) ����� : " << (a < b) << endl;
#endif // HOME_WORK

#ifdef TYPE_CONVERSIONS
	////����� �������������� �������� 43 � char:
	//cout << (char)43 << endl;	//C-like style
	//cout << char(44) << endl;	//Functional style

	////������� ��������������:
	//int a = 2;		//No conversion
	//double b = 3.4;	//
	//cout << sizeof(a) << endl;
	//cout << sizeof(b) << endl;
	//cout << a / b << endl;	//�������� * ������ ����������� ���������� 'a' � ��� double, 
	//						//����� ������� ��������� double
	//double c = 4;	//�� �������� � ��������
	//int d = c;		//�� �������� � ��������, ��� ������ ������
	//int e = 2.5;	//�� �������� � ��������, � ������� ������

	/*Fraction A(2, 3, 444);
	cout << A << endl;
	int a = (int)A;
	cout << a << endl;
	double b = A;
	cout << b << endl;
	int c = A;
	cout << c << endl;*/

	Fraction B = (Fraction)3;	//�onversion from 'int' to 'Fraction'
						//�������������� �������� '3' ���� 'int' �� Fraction
						//��� �������������� �������� ��������� ������������ � ����� ����������.
	cout << B << endl;
	B.to_proper();
	cout << B << endl;
	Fraction C(5);
	cout << C << endl;
	Fraction D = Fraction(8);

	Fraction E = 2.754;
	cout << E << endl;
#endif // TYPE_CONVERSIONS

	//Fraction A;		//Default constructor
	//Fraction B = 3;	//Single argument constructor
	//Fraction C(1, 2);
	//Fraction D(3, 4, 5);
}
