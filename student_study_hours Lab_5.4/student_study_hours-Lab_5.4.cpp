// This program finds the average time spent programming by a student
// each day over a three day period.
// Yasin SÜNBÜL

#include <iostream>
#include<string>

using namespace std;

int main()
{
	int numStudents;
	float numHours, total, average;
	int student, day; // these are the counters for the loops
	string subject;

	cout << "This program will find the average number of hours a day that a student spent programming over a long weekend\n\n";
	
	cout << "How many students are there ?" << endl ;
	cin >> numStudents;

	cout << "Enter the number of days in the long weekend" << endl;
	cin >> day;

	for (student = 1; student <= numStudents; student++)
	{
		cout << "Enter which subject you studied most. " << endl;
		cin >> subject;

		total = 0;
		for (int num_day = 1 ; num_day <= day; num_day++)
		{
			cout << endl << "Please enter the number of hours worked by student "
				<< student << " on day " << day << "." << endl;
			cin >> numHours;
			total = total + numHours;
		}

		average = total / day;
		cout << "\nThe average number of hours per day spent studying by student " << student << " is " << average 
			<<" and the subject you study the most time was "<< subject << endl << endl << endl;
	}

	return 0;
}