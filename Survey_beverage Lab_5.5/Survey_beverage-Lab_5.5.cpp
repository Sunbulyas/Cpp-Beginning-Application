#include<iostream>
#include<iomanip>

using namespace std;

void selection();


int main()
{
	selection();

	int choose;
	int person = 1;
	int num_Coffee = 0, num_Tea = 0, num_Coke = 0, num_Juice = 0;

	do
	{
		cout << "\nPlease input the favorite beverage of person #" << person << ": Choose 1, 2, 3, or 4 from the above menu or -1 to exit the program" << endl;
		cin >> choose;

		switch (choose)
		{
		case(1):
			num_Coffee++;
			break;
		case(2):
			num_Tea++;
			break;
		case(3):
			num_Coke++;
			break;
		case(4):
			num_Juice++;
			break;
		}
		person++;
	} while (choose != -1);
	
	cout << "\nThe total number of people surveyed is " << person - 2 << ". The results are as follows:" << endl<<endl;

	cout << left << setw(17) << "Beverage" << left << setw(17) << "Number of Votes" << endl;
	cout << setw(32) << setfill('*') << "*" << endl<<setfill(' ');
	cout << left << setw(17) << "Coffee" << left << setw(17) << num_Coffee << endl;
	cout << left << setw(17) << "Tea" << left << setw(17) << num_Tea << endl;
	cout << left << setw(17) << "Coke" << left << setw(17) << num_Coke << endl;
	cout << left << setw(17) << "Orange Juice" << left << setw(17) << num_Juice << endl;

	return 0;
}

void selection()
{
	cout << "\tWelcome to our survey\n";
	cout << "\tWould you like to beverage?\n";
	cout << "1. Coffee 2. Tea 3. Coke 4. Orange Juice";
}


