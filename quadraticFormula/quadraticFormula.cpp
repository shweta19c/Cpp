// quadraticFormula.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    double a;
    double b;
    double c;

    std::cout << "Enter first no.\n";
    std::cin >> a;
    std::cout << "Enter second no.\n";
    std::cin >> b;
    std::cout << "Enter third no.\n";
    std::cin >> c;
    double root1;
    double root2;
    root1 = (-b + std::sqrt(b * b - 4 * a * c))/(2*a);
    root2 = (-b - std::sqrt(b * b - 4 * a * c))/(2*a);
    std::cout << "Root 1 is " << root1 << "\n";
    std::cout << "Root 2 is " << root2 << "\n";
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
