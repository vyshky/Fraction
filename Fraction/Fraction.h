#pragma once
#include <iostream>

using namespace std;

using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

class Fraction
{
	int integer;
	int numerator;
	int denominator;

public:

	int get_integer() const;
	int get_numerator() const;
	int get_denominator() const;
	/*-------------------------------*/
	void set_integer(int x);
	void set_numerator(int x);
	void set_denominator(int x);
	/*--------------------------------*/
	Fraction();
	/*explicit */Fraction(int integer);
	//Fraction(double decimal);
	Fraction(int numerator, int denominator);
	Fraction(int integer, int numerator, int denominator);
	Fraction(const Fraction& other);
	~Fraction();
	/*-----------------------------------*/
	Fraction& operator=(const Fraction& other);
	Fraction& operator+=(Fraction& other);
	Fraction& operator-=(Fraction& other);
	Fraction& operator*=(Fraction& other);
	Fraction& operator/=(Fraction& other);
	Fraction& operator++();
	Fraction operator++(int);
	Fraction& operator--();
	Fraction operator--(int);

	//				Type cast operators:
	explicit operator int()const;	//explicit - явный
	operator double()const;
	operator char()const;

	/*------------------------------------*/
	void to_proper();
	void to_improper();
	void reduce();
	void print() const;
};


Fraction operator+(Fraction left, Fraction right);
Fraction operator-(Fraction left, Fraction right);
Fraction operator*(Fraction left, Fraction right);
Fraction operator/(Fraction left, Fraction right);
/*------------------------------------------------------------*/
bool operator==(Fraction left, Fraction right);
bool operator!=(Fraction left, Fraction right);
bool operator<=(Fraction left, Fraction right);
bool operator>=(Fraction left, Fraction right);
bool operator>(Fraction left, Fraction right);
bool operator<(Fraction left, Fraction right);
/*-------------------------------------------------------------*/
ostream& operator<<(ostream& os, const Fraction& obj);
istream& operator>>(istream& is, Fraction& obj); //есть вопросы , нужно доработать
