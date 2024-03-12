// OperacjeZbiorowe.cpp : This file contains the 'main' function. Program execution begins and ends there.

#include "bitwise_operations.h"


int main()
{
    std::cout << "Hello World!\n";

    /*
    char tab [] = "11111 00100 00000";
    int liczba;
    Emplace(tab, &liczba);
    std::cout << std::bitset<32>(liczba) << std::endl;
    
    char tab2[] = "               11011 11010 10001 11111 00000                                           ";
    int liczba2;
    Emplace(tab2, &liczba2);
    
    /*
    Insert(tab2, &liczba);
    std::cout << std::bitset<32>(liczba) << std::endl;
    Erase(tab2, &liczba);
    std::cout << std::bitset<32>(liczba) << std::endl;
    std::cout << liczba << std::endl;
    //Print(liczba, tab2);
    std::cout << Cardinality(liczba)<<std::endl;
    std::cout << Cardinality(liczba2)<<std::endl;
    */
    int liczba = -4;
    char tab[50];
    Print(liczba, tab);
    std::cout << tab <<std::endl;
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
