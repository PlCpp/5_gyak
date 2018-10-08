//FIGYELEM: a Rational.h és Rational.cpp állományokkal együtt kell fordítani!
//Pl.: g++ -ansi -pedantic Rational_main.cpp Rational.h Rational.cpp

#include <iostream>
#include "Rational.h"

int main() {
	
	Rational r(1, 2);
	std::cout << r.toString() << std::endl;
	Rational inverse = r.inverse();
	std::cout << inverse.toString() << std::endl;
	
	std::cout << r.getNumerator() << std::endl;
	r.setDenominator(0);
	std::cout << r.getDenominator() << std::endl;
	
	std::cout << "Number of instances: " << Rational::getNumOfInstances() << std::endl;
	//std::cout << "Number of instances: " << Rational::numOfInstances << std::endl; // fordítási hiba
	return 0;
}
