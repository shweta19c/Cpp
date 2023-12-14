// currency.cpp : This file contains the 'main' function. Program execution begins and ends there.
//This program convert given currencies in dollars and give total amount in dollars.

#include <iostream>

int main()
{
    double rupees;
    double pesos;
    double reais;
    double soles;
    double dollars;
    std::cout << "Enter number of Indian rupees:\n";
    std::cin >> rupees;
    std::cout << "Enter number of colombian pesos:\n";
    std::cin >> pesos;
    std::cout << "Enter number of brazilian reais:\n";
    std::cin >> reais;
    std::cout << "Enter number of Peruvian soles:\n";
    std::cin >> soles;
    // converting all the given currencies in dollars and giving total amount.
    dollars = (0.012 * rupees) + (0.049 * pesos) + (0.19 * reais) + (0.26 * soles);
    std::cout << "Total amount of different currencies in US Dollars= " << dollars;

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
