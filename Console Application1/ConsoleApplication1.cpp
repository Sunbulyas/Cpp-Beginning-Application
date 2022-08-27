#include<iostream>

using namespace std;

int main()
{
	float midterm, lab, final, bonus, grade;
	

	for (int counter = 0; counter<3; counter++)
	{
		cout << "Enter the midterm, lab, final and bonus grade:" << endl;
		cin >> midterm >> lab >> final >> bonus;
		midterm = midterm * 0.16;
		lab = lab * 0.24;
		final = final * 0.6;
		grade = midterm + lab + final + bonus;
		if (grade < 100)
		{
			cout <<"Final grade is "<< grade <<"."<< endl;
		}
		else
		{
			cout <<"Final grade is "<< "100" <<"."<< endl;
		}
	}
	
		cout << "Finished the program"<<endl;
	
	
	return 0;	
}