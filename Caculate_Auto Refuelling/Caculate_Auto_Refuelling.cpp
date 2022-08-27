#include<iostream>
#include<string>
#include<clocale>

using namespace std;

const double km = 0.097; // My vehicle is consuming how many litre gasoline in 1 km.
const double gaz_fiyat = 10.89; // The litre of gasoline is purchase with Turkish Liras.
int main()
{
	setlocale(LC_ALL, "Turkish");

	cout << " ************************************" << endl;
	cout << " *       Araç Yakıt Ölçer v1.0      *" << endl;
	cout << " *       Computer Programing I      *" << endl;
	cout << " *       Yazar: Yasin SÜNBÜL        *" << endl;
	cout << " *     Yapım Tarihi: 6.10.2020      *" << endl;
	cout << " ************************************" << endl << endl;


	/* Programın amacı belli bir km giden aracın istasyona gittiginde kaç litre yakıt alacağını önceden hesaplamak
	  1-Aracın markasını, motor hacmini, yakıt türünü ve depo büyüklüğünü yazın
	  2-Bir aracın 1 km kaç litre yakıt yaktığını bul
	  3-Depoda ki yakıttan bulduğun litreye böl
	*/
	string arac, tür, motor_hacmi;
	int depo;
	double gidilen_yol;
	double kullanılan_yakıt;
	
	double total_fiyat;

	cout << " Lütfen aracımızın markasını, motor hacmini, yakıt türünü ve depo büyüklüğünü giriniz." << endl;
	cout << " Marka : "; cin >> arac;
	cout << " Motor Hacmi : "; cin >> motor_hacmi;
	cout << " Yakıt Türü : "; cin >> tür;
	cout << " Depo Hacmi : "; cin >> depo;

	cout << " Tesekkür ederiz şimdi aracınızla yaptığınız mesafeyi giriniz : "; cin >> gidilen_yol;

	kullanılan_yakıt = km * gidilen_yol;

		if (depo > kullanılan_yakıt)
			{
			       total_fiyat = gaz_fiyat * kullanılan_yakıt;
		        	cout << " Yakıt istasyonundan alacağınız litre : " << kullanılan_yakıt << endl;
				cout << " Yakıtın toplam tutarı : " << total_fiyat << endl;
			 }
		else
			{
				cout << " Uşağım sen yolda kalmışsın haberin yok :)" << endl;
			}
	
	return 0;
}
