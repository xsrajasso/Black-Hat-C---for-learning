// IntegerOverflow.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

using namespace std;

#include <iostream>

int main()
{
    int x = 2147483647;                         //Max value for a signed 32-bit integer
    int y = 1;                                  //Set the value of y to 1
    int z = x + y;                              //Add x and y together and store the value in z
    cout << "The value of z is " << z << endl;  //Print out the value of z
    return 0;
}
