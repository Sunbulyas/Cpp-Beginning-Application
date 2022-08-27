#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int main()
{
	int comNum;
	int guessNum;
	bool control = false;
	int count = 0;

	srand(time(0));
	comNum = rand() % 100;

	while (!control)
	{ 
		count++;
		cout << "Enter an integer greater than or equal 0 to and less than 100: ";
		cin >> guessNum;

		if (guessNum == comNum)
		{
			cout << "Congrulations, your guessed is correct number and you found the right number in " << count << " attempts." << endl;
			control = true;
		}
		else if (guessNum < comNum)
		{
			cout << "Your guessed is lower than the number." << endl;
			cout << "Guess again...\n\n";
		}
		else
		{
			cout << "Your guessed is higher than the number." << endl;
			cout << "Guess again...\n\n";
		}
	}
	return 0;
}