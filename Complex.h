/* 
 * File:   Complex.h
 * Author: MHerzog
 *
 * Created on March 30, 2015, 5:05 PM
 */

#ifndef COMPLEX_H
#define	COMPLEX_H

class Complex {
public:
    Complex();
    Complex(double a, double b);
    Complex(const Complex &orig);
    double getReal();
    double getImaginary();
    Complex operator+(const Complex &other);
    Complex operator-(const Complex &other);
    Complex operator*(const Complex &other);
    Complex operator/(const Complex &other);
    Complex conjugate();
    friend std::ostream &operator << (std::ostream &output, const Complex &op);
private:
    double a; //real component
    double b; //imaginary component --> associated with i within a+bi
};

#endif	/* COMPLEX_H */

