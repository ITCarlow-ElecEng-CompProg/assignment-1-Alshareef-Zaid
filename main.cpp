/**
Zaid H Alshareef
C00210415
25/09/2017
1. Celsius to Fahrenheit Temperature Conversion
*/


#include <iostream>



    using namespace std;


    /**Main function*/
    int main(void)

{
       /**Variable declaration*/
    double celsius,fahrenheit;

    cout <<"Celsius to Fahrenheit Temperature Conversion\n" << endl;

    /**Read in integer value*/
    cout << "Enter Celsius temperature: " << endl;
    cin >> celsius;

    /**Calculate and display result*/
    fahrenheit = ( 9.0/5.0 * celsius) + 32;
    cout << "Fahrenheit = " << fahrenheit << "F" << endl;

    return 0;
}
