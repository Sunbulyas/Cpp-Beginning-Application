#include<iostream>
#include<iomanip>

using namespace std;

const float amr_col = 85;
const float modern = 57.5;
const float fr_clas = 127.75;

int main()
{
	/*	Style				 Price Per Chair
		American Colonial	 $ 85.00
		Modern				 $ 57.50
		French Classical	 $127.75
	*/

	int num_amr, num_mod, num_fr;
	float val_amr, val_mod, val_fr, totalval;

	cout << setprecision(2) << fixed << showpoint;

	cout << "Please input the number of American Colonial chairs sold" << endl;
	cin >> num_amr;

	cout << "Please input the number of Modern chairs sold" << endl;
	cin >> num_mod;

	cout << "Please input the number of French Classical chairs sold" << endl;
	cin >> num_fr;

	val_amr = amr_col * num_amr;
	val_mod = modern * num_mod;
	val_fr = fr_clas * num_fr;
	totalval = val_amr + val_mod + val_fr;

	cout << "The total sales of American Colonial chairs $" << val_amr << endl;
	cout << "The total sales of Modern chairs $" << val_mod << endl;
	cout << "The total sales of French Classical chairs $" << val_fr << endl;
	cout << "The total sales of American Colonial chairs $" << totalval << endl;


	return 0;
}