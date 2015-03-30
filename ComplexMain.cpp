/* 
 * File:   ComplexMain.cpp
 * Author: MHerzog
 *
 * Created on March 30, 2015, 5:25 PM
 */

#include <ostream>
#include <fstream>
#include <iomanip>
#include <cstdlib>
#include <iostream>
#include "Complex.h"

using namespace std;

int main(int argc, char** argv) {
    Complex num1 = Complex(2, 3);
    Complex num2 = Complex(3, 4);
    Complex num3 = num1 + num2;
    Complex num4 = num1*num2;
    Complex num5 = num1/num2;
    cout << "real: " << num1.getReal() << endl;
    cout << "imaginary: " << num1.getImaginary() << endl;
    cout << num3 << endl;
    cout << num4 << endl;
    cout << num5 << endl;
    cout << "num3 conjugate 5 - 7i: " << num3.conjugate() << endl;
    cout << "num4 conjugate -6 - 17i: " << num4.conjugate() << endl;
    cout << "num5 conjugate 0.72 - 0.04i: " << num5.conjugate() << endl;
    
    
    return 0;
}

