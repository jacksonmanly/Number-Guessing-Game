// Practice.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
void showmenu()
{
	std::cout << "Select a difficulty:\n";
	std::cout << "Easy mode:Enter(E)\n";
	std::cout << "Medium mode:Enter(M)\n";
	std::cout << "Hard mode:Enter(H)";
}

int main()
{
	char difficulty{};
	int secretnumber{};
	int guess{};
	int attempts{ 0 };
	char playagain{'Y'};
	while (playagain == 'Y' || playagain == 'y')
	{
		showmenu();
		std::cin >> difficulty;

		if (difficulty == 'E' || difficulty == 'e')
		{
			attempts = 0;
			guess = 0;
			secretnumber = 6;
			std::cout << "You have entered the easy level!\n";
			while (guess != secretnumber)
			{
				std::cout << "Pick a number between 1-10\n";
				std::cin >> guess;
				attempts++;

				if (guess < 1 || guess > 10)
				{
					std::cout << "Invalid input-Pick a number 1-10\n";
				}
				else if (guess < secretnumber)
				{
					std::cout << "Too low, guess again!\n";
					if (std::abs(guess - secretnumber) <= 1)
					{
						std::cout << "Very close!\n";
					}
				}
				else if (guess > secretnumber)
				{
					std::cout << "Too high, guess again!\n";
					if (std::abs(guess - secretnumber) <= 1)
					{
						std::cout << "Very close!\n";
					}
				}
				
				else if (guess == secretnumber)
				{
					std::cout << "Congratulations you guess correctly in " << attempts << " attempts\n";
				}
			}
		}
		else if (difficulty == 'M' || difficulty == 'm')
		{
			attempts = 0;
			secretnumber = 24;
			std::cout << "You have entered the medium level!\n";
			while (guess != secretnumber)
			{

				std::cout << "Guess a number 1-50\n";
				std::cin >> guess;
				attempts++;

				if (guess < 1 || guess > 50)
				{
					std::cout << "Invalid input- Pick a number 1-50\n";
				}
				else if (guess > secretnumber)
				{
					std::cout << "Too high, guess again!\n";
					if (std::abs(guess - secretnumber) <= 3)
					{
						std::cout << "Very close!\n";
					}
				}
				else if (guess < secretnumber)
				{
					std::cout << "Too low, guess again\n";
					if (std::abs(guess - secretnumber) <= 3)
					{
						std::cout << "Very close!\n";
					}
				}
				else if (guess == secretnumber)
				{
					std::cout << "Congratulations you guess correctly in " << attempts << " attempts\n";
				}

			}
		}
		else if (difficulty == 'H' || difficulty == 'h')
		{
			attempts = 0;
			secretnumber = 37;
			std::cout << "You have entered the hard level!\n";
			while (guess != secretnumber)
			{
				std::cout << "Guess a number 1-100:";
				std::cin >> guess;
				attempts++;

				if (guess < 1 || guess > 100)
				{
					std::cout << "Invalid-Pick a number 1-100\n";
				}
				else if (guess > secretnumber)
				{
					std::cout << "Too high guess again!\n";
					if (std::abs(guess - secretnumber) <= 5)
					{
						std::cout << "Very close!\n";
					}
				}
				else if (guess < secretnumber)
				{
					std::cout << "Too low Guess again!\n";
					if (std::abs(guess - secretnumber) <= 3)
					{
						std::cout << "Very close!\n";
					}
				}
				else if (guess == secretnumber)
				{
					std::cout << "Congratulations you guess correctly in " << attempts << " attempts\n";

				}
			}
		}
		std::cout << "Do you want to play again? (Y/N): ";
		std::cin >> playagain;
		while (playagain != 'Y' && playagain != 'y' && playagain != 'n' && playagain != 'N')
{
	std::cout << "Invalid Input-Please enter (Y/N): ";
	std::cin >> playagain;

}
	}

	std::cout << "Thank you for playing have a great day!";
	
	     return 0;
}
