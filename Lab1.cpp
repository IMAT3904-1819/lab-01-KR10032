// Lab1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include "pch.h"
#include <iostream>
#include <time.h>

int main()
{
	int RandNum;
	int GuessNum[5];

	srand(time(0));

	RandNum = rand() % 1000 + 1;

	std::cout << "Guess the number between 1 and 100, you have 5 guesses."  << std::endl;

	for (int i = 0; i < 8; i++)
	{
		std::cin >> GuessNum[i];

		if (GuessNum[i] == RandNum){
			std::cout << "You have guessed the number and won that chicken dinner or something! " << std::endl;
			system("pause");
			return 0;
		}
		else if (GuessNum[i] > RandNum) {
			std::cout << "Wrong guess, guess lower!" << std::endl;

		}
		else if (GuessNum[i] < RandNum) {
			std::cout << "Wrong guess, guess higher!" << std::endl;

		}

	}

	std::cout << "You lost rip " << std::endl;

	system("pause");
	return 0;
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
