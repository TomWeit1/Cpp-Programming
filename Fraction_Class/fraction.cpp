#include "Fraction.h"
#include <iostream>
using namespace std;

Fraction::Fraction(){
    this->numerator = 1;
    this->denominator = 1;
};

Fraction::Fraction(int num, int denom){
    this->numerator = num;
    if (denom != 0){
        this->denominator = denom; 
    };
    //TODO: add throw
};

void Fraction::print()
{
    cout << this->numerator << "/" << this->denominator;
};

Fraction Fraction::operator+(Fraction other)
{

};
