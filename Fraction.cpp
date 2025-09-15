#include "Fraction.h"
#include <stdexcept>

using namespace std;

Fraction::Fraction(int n, int d) {
    if (d == 0) throw invalid_argument("Denominator cannot be zero");
    num = n;
    den = d;
}

Fraction Fraction::operator+(const Fraction& other) const {
    return Fraction(num * other.den + other.num * den, den * other.den);
}

Fraction Fraction::operator-(const Fraction& other) const {
    return Fraction(num * other.den - other.num * den, den * other.den);
}

Fraction Fraction::operator*(const Fraction& other) const {
    return Fraction(num * other.num, den * other.den);
}

Fraction Fraction::operator/(const Fraction& other) const {
    if (other.num == 0) throw invalid_argument("Division by zero");
    return Fraction(num * other.den, den * other.num);
}

Fraction Fraction::operator+(int value) const {
    return Fraction(num + value * den, den);
}

Fraction Fraction::operator-(int value) const {
    return Fraction(num - value * den, den);
}

Fraction Fraction::operator*(int value) const {
    return Fraction(num * value, den);
}

Fraction Fraction::operator/(int value) const {
    if (value == 0) throw invalid_argument("Division by zero");
    return Fraction(num, den * value);
}

Fraction operator+(int value, const Fraction& f) {
    return Fraction(f.getNum() + value * f.getDen(), f.getDen());
}

Fraction operator-(int value, const Fraction& f) {
    return Fraction(value * f.getDen() - f.getNum(), f.getDen());
}

Fraction operator*(int value, const Fraction& f) {
    return Fraction(f.getNum() * value, f.getDen());
}

Fraction operator/(int value, const Fraction& f) {
    if (f.getNum() == 0) throw invalid_argument("Division by zero");
    return Fraction(value * f.getDen(), f.getNum());
}

ostream& operator<<(ostream& os, const Fraction& f) {
    if (f.den == 1) os << f.num;
    else os << f.num << "/" << f.den;
    return os;
}
