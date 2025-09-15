#pragma once
#include <iostream>

class Fraction {
    int num;
    int den;

public:
    Fraction(int n = 0, int d = 1);

    int getNum() const { return num; }
    int getDen() const { return den; }

    Fraction operator+(const Fraction& other) const;
    Fraction operator-(const Fraction& other) const;
    Fraction operator*(const Fraction& other) const;
    Fraction operator/(const Fraction& other) const;

    Fraction operator+(int value) const;
    Fraction operator-(int value) const;
    Fraction operator*(int value) const;
    Fraction operator/(int value) const;

    friend std::ostream& operator<<(std::ostream& os, const Fraction& f);
};

Fraction operator+(int value, const Fraction& f);
Fraction operator-(int value, const Fraction& f);
Fraction operator*(int value, const Fraction& f);
Fraction operator/(int value, const Fraction& f);
