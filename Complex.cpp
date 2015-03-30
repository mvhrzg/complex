/* 
 * File:   Complex.cpp
 * Author: MHerzog
 * 
 * Created on March 30, 2015, 5:05 PM
 */

#include <ostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include "Complex.h"

Complex::Complex() {
    a = 0;
    b = 0;
}//constructor

Complex::Complex(double a, double b) {
    this->a = a;
    this->b = b;
}//constructor

Complex::Complex(const Complex &other){
    a = other.a;
    b = other.b;
}//constructor

double Complex::getReal(){
    return a;
}//getReal

double Complex::getImaginary(){
    return b;
}//getImaginary

Complex Complex::operator+(const Complex &other){
    Complex result;
    
    result.a = a + other.a;
    result.b = b + other.b;
    return result;
}//operator+

Complex Complex::operator-(const Complex &other){
    Complex result;
    
    result.a = a - other.a;
    result.b = b - other.b;
    return result;
}//operator-

Complex Complex::operator*(const Complex &other){
    Complex result;
    
    result.a = a * other.a - b * other.b;
    result.b = a * other.a + b * other.b - 1;
    
    return result;
}//operator*

Complex Complex::operator/(const Complex &other){
    Complex result;
    
    result.a = (a * other.a + b * other.b)/(other.a*other.a + other.b*other.b);
    result.b = (b * other.a - a * other.b)/(other.a*other.a + other.b*other.b);
    return result;
}//operator/


Complex Complex:: conjugate(){
    Complex result;
    result.a = a;
    result.b = -b;
    return result;
}
std::ostream &operator << (std::ostream &output, const Complex &op){
    std::string symbol = " + ";
    if (op.b < 0){
        symbol = " ";
    }
    output << op.a << symbol << op.b << "i";
    
    return output;
}//friend