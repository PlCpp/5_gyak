#include<iostream>

//Ha nem lennének osztályok és egységbe zárás, akkor így kéne eljárnunk

struct Rational {
	int numerator;
	int denominator;
};

void initRational(Rational& rational, const int& numerator, const int& denominator) {
	rational.numerator = numerator;
	rational.denominator = denominator;
}

Rational inverse(const Rational& rational) {
	Rational r;
	r.denominator = rational.numerator;
	r.numerator = rational.denominator;
	
	return r;
}

//ha ezt a függvényt használnák, az futás hibát eredményezne, hiszen lokális változóra adunk vissza referenciát, de a lokális változó megszűnik ha befejeződött a függvény
/* Rational& inverse(const Rational& rational) { 
	Rational r;
	r.denominator = rational.numerator;
	r.numerator = rational.denominator;
	
	return r;
}*/

void printRational(const Rational& rational) {
	std::cout << rational.numerator << "/" << rational.denominator << std::endl;
}

int main() {
	Rational rational;
	initRational(rational, 1, 2);
	printRational(rational);
	
	Rational inv = inverse(rational);
	printRational(inv);
	
	return 0;
}

