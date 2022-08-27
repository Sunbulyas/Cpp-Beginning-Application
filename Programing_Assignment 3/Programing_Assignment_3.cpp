#include<iostream>
#include<string>

using namespace std;

const int SECRET = 11;
const double RATE = 12.5;

int main()
{
	cout << " ************************************" << endl;
	cout << " *      Programing Assignment 3     *" << endl;
	cout << " *       Computer Programing I      *" << endl;
	cout << " *       Author: Yasin SUNBUL       *" << endl;
	cout << " *       Due Date: 6.10.2020        *" << endl;
	cout << " ************************************" << endl << endl;

	int num1, num2, newNum;
	double hoursWorked, wages;
	string name;
	
	cout << " Enter two integers with space :"; cin >> num1 >> num2;
	cout << " The value of num1 = " << num1 << " and the value of num2 = " << num2 << endl;

	newNum = (2 * num1) + num2;
	newNum += SECRET;
	cout << " The value of newNum = " << newNum << endl;

	cout << " Enter the your last name : "; cin >> name;

	cout << " Enter a decimal number between 0 and 70 : "; cin >> hoursWorked;
	wages = RATE * hoursWorked;

	cout << endl << endl;

	cout << " Name : " << name << endl;
	cout << " Pay Rate : $" << RATE << endl;
	cout << " Hours Worked :" << hoursWorked << endl;
	cout << " Salary : $" << wages << endl;



	return 0;
}