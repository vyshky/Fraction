#include"Fraction.h"

#define HOME_WORK
//#define TYPE_CONVERSIONS

void main()
{
	setlocale(LC_ALL, ""); 
#ifdef HOME_WORK
	Fraction a;
	cout << "Введите дробь 'a' в формате x/y: "; cin >> a;
	cout << "Вы ввели дробь 'a': "; cout << a;
	a.to_proper();
	cout << endl;
	cout << "Переводим неправильную дробь в правильную: "; a.print();
	a.to_improper();
	cout << "Переводим правильную дробь в неправильную: "; a.print();
	a.reduce();
	cout << "Сокращаем дробь: "; a.print();
	Fraction b;
	cout << "Введите дробь 'b' в формате x/y: "; cin >> b;
	cout << "Вы ввели дробь 'b': "; cout << b << endl;
	cout << "Значение выражения (a+=b) равно : "; (a += b).print();
	cout << "Значение выражения (a-=b) равно : "; (a -= b).print();
	cout << "Значение выражения (a*=b) равно : "; (a *= b).print();
	cout << "Значение выражения (a/=b) равно : "; (a /= b).print();
	Fraction c = a + b;
	cout << "Значение выражения (a+b) равно : "; c.print();
	c = a - b;
	cout << "Значение выражения (a-b) равно : "; c.print();
	c = a * b;
	cout << "Значение выражения (a*b) равно : "; c.print();
	c = a / b;
	cout << "Значение выражения (a/b) равно : "; c.print();
	cout << "Значение выражения (++a) равно : "; (++a).print();
	cout << "Значение выражения (a++) равно : "; a++.print();
	cout << "Значение выражения (--a) равно : "; (--a).print();
	cout << "Значение выражения (a--) равно : "; a--.print();
	cout << "Значение выражения (a == b) равно : " << (a == b) << endl;
	cout << "Значение выражения (a != b) равно : " << (a != b) << endl;
	cout << "Значение выражения (a <= b) равно : " << (a <= b) << endl;
	cout << "Значение выражения (a >= b) равно : " << (a >= b) << endl;
	cout << "Значение выражения (a > b) равно : " << (a > b) << endl;
	cout << "Значение выражения (a < b) равно : " << (a < b) << endl;
#endif // HOME_WORK

#ifdef TYPE_CONVERSIONS
	////явное преобразование значения 43 в char:
	//cout << (char)43 << endl;	//C-like style
	//cout << char(44) << endl;	//Functional style

	////Неявные преобразования:
	//int a = 2;		//No conversion
	//double b = 3.4;	//
	//cout << sizeof(a) << endl;
	//cout << sizeof(b) << endl;
	//cout << a / b << endl;	//Оператор * неявно преобразует переменную 'a' в тип double, 
	//						//чтобы вернуть результат double
	//double c = 4;	//От меньшего к бОльшему
	//int d = c;		//От бОльшего к меньшему, без потери данных
	//int e = 2.5;	//От бОльшего к меньшему, с потерей данных

	/*Fraction A(2, 3, 444);
	cout << A << endl;
	int a = (int)A;
	cout << a << endl;
	double b = A;
	cout << b << endl;
	int c = A;
	cout << c << endl;*/

	Fraction B = (Fraction)3;	//Сonversion from 'int' to 'Fraction'
						//Преобразование значения '3' типа 'int' во Fraction
						//Это преобразование возможно благодаря конструктору с одним параметром.
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
