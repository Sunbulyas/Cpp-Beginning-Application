#include<iostream>
#include<iomanip>

using namespace std;

int main()
{
	float count, length, first, second, next;
	count = 0;

	cout << "Please, enter the length of sequence: ";
	cin >> length;

	cout << "Enter the first value: ";
	cin >> first;

	cout << "Enter the second value: ";
	cin >> second;

	cout << "\nFibonacci Sequence: \n\n";
	cout << setw(10) << "Element " << setw(20) << left << "  Value"<<endl<<endl;

	while (count < length)
	{
		count++;

		cout <<setprecision(0) <<fixed;
		cout << setw(6) << right << "[" << count << "]";
		cout << " ==> ";
		cout << setw(20) << left << first << endl;
		
		next = first + second;
		first = second;
		second = next;
	}

	return 0;
}