class Fraction {
    private:
    int numerator;
    int denominator;
    Fraction::Fraction();
    Fraction::Fraction(int num, int denom);

    public:
    void Fraction::print();
    Fraction Fraction::operator+(Fraction other);

};
