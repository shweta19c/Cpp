// gradeElseIf.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{ 
    int grade;
    std::cout << "Enter the grade here:\n";
    std::cin >> grade;
    if (grade >= 11 && grade <= 12)
    {
        std::cout << "Junior college student\n";
    }
    else if (grade >= 13 && grade <= 16)
    {
        std::cout << "Senior college student or Bachelor's degree student\n";
    }
    else if (grade >= 17 && grade <= 18)
    {
        std::cout << "Super-senior or Post graduate student\n";
    }
    else 
    {
        std::cout << "Phd\n";
    }
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
