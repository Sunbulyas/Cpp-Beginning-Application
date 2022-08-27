#include<iostream>
#include<string>
#include<clocale>

using namespace std;

const double km = 0.097; // 1 km de arac�m�z bu kadar litre gaz harc�yor. Opel 1.4
const double gaz_fiyat = 10.89; // 1 litre gaz�n fiyat�.
int main()
{
	setlocale(LC_ALL, "Turkish");

	cout << " ************************************" << endl;
	cout << " *       Ara� Yak�t �l�er v1.0      *" << endl;
	cout << " *       Computer Programing I      *" << endl;
	cout << " *       Yazar: Yasin S�NB�L        *" << endl;
	cout << " *     Yap�m Tarihi: 6.10.2020      *" << endl;
	cout << " ************************************" << endl << endl;


	/* Program�n amac� belli bir km giden arac�n istasyona gittiginde ka� litre yak�t alaca��n� �nceden hesaplamak
	  1-Arac�n markas�n�, motor hacmini, yak�t t�r�n� ve depo b�y�kl���n� yaz�n
	  2-Bir arac�n 1 km ka� litre yak�t yakt���n� bul
	  3-Depoda ki yak�ttan buldu�un litreye b�l
	*/
	string arac, t�r, motor_hacmi;
	int depo;
	double gidilen_yol;
	double kullan�lan_yak�t;
	
	double total_fiyat;

	cout << " L�tfen arac�m�z�n markas�n�, motor hacmini, yak�t t�r�n� ve depo b�y�kl���n� giriniz." << endl;
	cout << " Marka : "; cin >> arac;
	cout << " Motor Hacmi : "; cin >> motor_hacmi;
	cout << " Yak�t T�r� : "; cin >> t�r;
	cout << " Depo Hacmi : "; cin >> depo;

	cout << " Tesekk�r ederiz �imdi arac�n�zla yapt���n�z mesafeyi giriniz : "; cin >> gidilen_yol;

	kullan�lan_yak�t = km * gidilen_yol;

		if (depo > kullan�lan_yak�t)
				{
					total_fiyat = gaz_fiyat * kullan�lan_yak�t;

					cout << " Yak�t istasyonundan alaca��n�z litre : " << kullan�lan_yak�t << endl;
					cout << " Yak�t�n toplam tutar� : " << total_fiyat << endl;
				 }
		else
				{
			cout << " U�a��m sen yolda kalm��s�n haberin yok :)" << endl;
				}
	
	return 0;
}