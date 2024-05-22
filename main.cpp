#include <iostream>

using namespace std;

class Fraction {
private:
    int numerator;
    int denominator;

public:
    Fraction(int numerator = 0, int denominator = 1) : numerator(numerator), denominator(denominator) {
        if (denominator < 0) {
            numerator = -numerator;
            denominator = -denominator;
        }
    }

    Fraction& operator=(const Fraction& other) {
        if (this != &other) {
            numerator = other.numerator;
            denominator = other.denominator;
        }
        return *this;
    }

    Fraction operator+(const Fraction& other) const {
        int num = numerator * other.denominator + other.numerator * denominator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    bool operator==(const Fraction& other) const {
        return numerator == other.numerator && denominator == other.denominator;
    }

    bool operator!=(const Fraction& other) const {
        return !(*this == other);
    }

    Fraction operator*(const Fraction& other) const {
        int num = numerator * other.numerator;
        int den = denominator * other.denominator;
        return Fraction(num, den);
    }

    Fraction& operator--() {
        numerator -= denominator;
        return *this;
    }

    Fraction operator--(int) {
        Fraction temp = *this;
        numerator -= denominator;
        return temp;
    }

    void print() const {
        cout << numerator << "/" << denominator << endl;
    }
};

int main() {
    Fraction f1(3, 2), f2(1, 4);
    Fraction f3;
    f3 = f1;
    cout << "Fraction f1: ";
    f1.print();
    cout << "Fraction f3 after assignment: ";
    f3.print();

    Fraction f4 = f1 + f2;
    cout << "f1 + f2: ";
    f4.print();

    Fraction f5 = f1 * f2;
    cout << "f1 * f2: ";
    f5.print();

    cout << "f1 == f2: " << (f1 == f2) << endl;
    cout << "f1 != f2: " << (f1 != f2) << endl;

    --f1;
    cout << "Fraction f1 after prefix decrement: ";
    f1.print();

    f1--;
    cout << "Fraction f1 after postfix decrement: ";
    f1.print();

    return 0;
}
