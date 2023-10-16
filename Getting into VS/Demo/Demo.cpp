// Demo.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int suma(int a, int b)
{
    return a + b;
}

int main()
{
    int age = 24;
    float weight = 110.5;
    char firstLetter = 'a';

    //Conditional IF statement
    if (age == 24) {
        std::cout << "The age is 24.\n";
    }
    else {
        std::cout << "The age is not 24.\n";
    }

    //Loop
    int sum = 0;
    for (int i = 1; i <= 5; i++) {
        sum += i;
    }

    std::cout << "The sum of 1 through 5 is " << sum << std::endl;

    //Functions


    int x = 10;
    int y = 9;
    int result = suma(x, y);

    std::cout << "If you add " << x << " and " << y << " together then you get " << result << std::endl;

    std::cout << "Age: " << age << std::endl;
    std::cout << "Weight: " << weight << std::endl;
    std::cout << "First Letter: " << firstLetter << std::endl;

    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

/* This is a comment*/