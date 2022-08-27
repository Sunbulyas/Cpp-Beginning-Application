#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	char letter;
	cout << "Program convert to uppercase letter to telephone digit." << endl;
	cout << "To stop the program enter #." << endl;
	cout << "Enter the letter: ";
	cin >> letter;

		while (letter != '#')
		{
			cout << "The letter entered is: " << letter << endl;
			cout << "Corresponding telephone digit is: ";

				if (letter>='A' && letter<='Z')
					{ 
						switch (letter)
						{
						case 'A':
						case 'B':
						case 'C':
								cout << 2 <<endl;
								break;
						case 'D':
						case 'E':
						case 'F':
								cout << 3 << endl;
								break;
						case 'G':
						case 'H':
						case 'I':
								cout << 4 << endl;
								break;
						case 'J':
						case 'K':
						case 'L':
							cout << 5 << endl;
								break;
						case 'M':
						case 'N':
						case 'O':
								cout << 6 << endl;
								break;
						case 'P':
						case 'Q':
						case 'R':
						case 'S':
								cout << 7 << endl;
								break;
						case 'T':
						case 'U':
						case 'V':
								cout << 8 << endl;
								break;
						case 'W':
						case 'X':
						case 'Y':
						case 'Z':
								cout << 9 << endl;
								break;
						}
				}
				else
					cout<<"Invalid input..."<<endl;

				cout << "\nEnter another uppercase letter to find telephone digit"<<endl;
				cout << "To stop the program enter #."<<endl;
				cout << "Enter the letter: ";
				cin >> letter;
		}
		cout << endl << "...END..."<<endl;

	return 0;
}