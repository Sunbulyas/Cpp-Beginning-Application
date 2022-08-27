#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

const string SENTINEL = "finish";


int main()
{
	string st_name;
	float soldBox_st = 0;
	float totalBox = 0;
	int count_st = 0;
	double priceBox;

	cout << fixed << setprecision(2);
	
	cout << "Enter the name of student and sold box ending with finish:"<<endl;
	cin >> st_name;

	while (st_name != SENTINEL)
	{
		cin >> soldBox_st;
		totalBox = totalBox + soldBox_st;
		
		count_st++;
		cin >> st_name;
	}

	if (count_st != 0)
	{
		cout << "\nThe total number of boxes sold: " << totalBox;
		cout << "\nEnter the price of one Box = ";
		cin >> priceBox;

		cout << "The total money made by selling cookies: $" << priceBox * totalBox << endl;

		cout << "The average number of boxes sold by each volunteer: " << totalBox / count_st << endl;
	}
	else
		cout << "No input..." << endl;
	return 0;
}