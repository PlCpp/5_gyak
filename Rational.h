#ifndef __RATIONAL__
#define __RATIONAL__

#include <sstream>

class Rational {
	
	private:
		int numerator;
		int denominator;
		static int numOfInstances;
		
	public:
		static const int DEFAULT_DENOMINATOR = 1;
		
		static int getNumOfInstances();
		
		/*Rational() {
			numerator = 0;
			denominator = 1;
		}*/
		
		/*Rational(const int& numerator, const int& denominator) {
			this->numerator = numerator;
			this->denominator = denominator;
		}*/		
		
		Rational(int numerator = 0, int denominator = 1): numerator(numerator), denominator(denominator) {
			++numOfInstances;
			if (denominator == 0) {
				this->denominator = DEFAULT_DENOMINATOR;
			} 
		}
		
		int getNumerator() {
			return numerator;
		}
		
		int getDenominator() {
			return denominator;
		}
		
		void setNumerator(const int& numerator) {
			this->numerator = numerator;
		}
		
		void setDenominator(const int& denominator) {
			this->denominator = denominator == 0 ? 1 : denominator;
		}
		
		Rational inverse() {
			Rational r;
			r.numerator = denominator;
			r.denominator = numerator;
			
			return r;
		}
		
		std::string toString() {
			std::stringstream line;
			line << numerator << "/" << denominator;
			return line.str();
		}
};

#endif
