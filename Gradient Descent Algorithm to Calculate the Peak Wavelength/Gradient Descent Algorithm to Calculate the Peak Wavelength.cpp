// Define _USE_MATH_DEFINES to access mathematical constants
#define _USE_MATH_DEFINES

// Include the C++ library with mathematical functions
#include <cmath>

// Include the header file that is a part of C++ standard library for input and output
#include <iostream>

// Use namespace std that contains classes, functions, and objects provided by the C++ standard library
using namespace std;

// Physical constants definitions
const double h = 6.62607015e-34;     // Planck's constant (J·s)
const double c = 299729458;            // Speed of light (ms^-1)
const double k = 1.380649e-23;       // Boltzmann constant (JK^-1)

// Mathematical constants definitions
const double pi = M_PI;
const double NeperNumber = M_E;

// Function to calculate the the gradient of tangent at the current point on the spectral power density function
// using its derivative with respect to wavelength
double derivative(double lambda, double T) {

    return (((2 * pi * h * pow(c, 2)) / (pow(lambda, 6) * pow(pow(NeperNumber, h * c / (lambda * k * T)) - 1, 2)))
        * (5 - 5 * pow(NeperNumber, h * c / (lambda * k * T)) + h * c / (lambda * k * T) * pow(NeperNumber, h * c / (lambda * k * T))));
}

int main() {
    //// Ask the user to input the initial guess for the peak wavelength in meters
    double peakWavelength;
    cout << "Input the initial guess for the peak wavelength" << endl;
    cin >> peakWavelength;
    //peakWavelength = 5e-7;

    //// Ask the user to input the temperature of the blackbody in Kelvin
    double temperature;
    cout << "Input the temperature of the blackbody in Kelvin" << endl;
    cin >> temperature;
    //temperature = 5800;

    // Learning rate for gradient descent
    double learningRate = 1e-28;

    // Maximum number of iterations
    int maxIterations = 1000;

    // Gradient descent loop
    for (int i = 0; i < maxIterations; i++) {

        // Calculate the gradient of tangent at the current point on the spectral power density function
        // using its derivative
        double gradient = derivative(peakWavelength, temperature);

        // Update the current point on the spectral power density function using the gradient descent formula
        peakWavelength += learningRate * gradient;

        // Termination of the algorithm condition (gradient magnitude very close to zero)
        if (gradient > (-1e-10)) {
            break;
        }
    }

    // Output the peak wavelength
    cout << "Peak wavelength = " << peakWavelength << " meters" << endl;

    return 0;
}