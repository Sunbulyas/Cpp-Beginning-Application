#include<iostream>
#include<string>
#include<clocale>

using namespace std;

const double km = 0.097; // 1 km de aracýmýz bu kadar litre gaz harcýyor. Opel 1.4
const double gaz_fiyat = 10.89; // 1 litre gazýn fiyatý.
int main()
{
	setlocale(LC_ALL, "Turkish");

	cout << " ************************************" << endl;
	cout << " *       Araç Yakýt Ölçer v1.0      *" << endl;
	cout << " *       Computer Programing I      *" << endl;
	cout << " *       Yazar: Yasin SÜNBÜL        *" << endl;
	cout << " *     Yapým Tarihi: 6.10.2020      *" << endl;
	cout << " ************************************" << endl << endl;


	/* Programýn amacý belli bir km giden aracýn istasyona gittiginde kaç litre yakýt alacaðýný önceden hesaplamak
	  1-Aracýn markasýný, motor hacmini, yakýt türünü ve depo büyüklüðünü yazýn
	  2-Bir aracýn 1 km kaç litre yakýt yaktýðýný bul
	  3-Depoda ki yakýttan bulduðun litreye böl
	*/
	string arac, tür, motor_hacmi;
	int depo;
	double gidilen_yol;
	double kullanýlan_yakýt;
	
	double total_fiyat;

	cout << " Lütfen aracýmýzýn markasýný, motor hacmini, yakýt türünü ve depo büyüklüðünü giriniz." << endl;
	cout << " Marka : "; cin >> arac;
	cout << " Motor Hacmi : "; cin >> motor_hacmi;
	cout << " Yakýt Türü : "; cin >> tür;
	cout << " Depo Hacmi : "; cin >> depo;

	cout << " Tesekkür ederiz þimdi aracýnýzla yaptýðýnýz mesafeyi giriniz : "; cin >> gidilen_yol;

	kullanýlan_yakýt = km * gidilen_yol;

		if (depo > kullanýlan_yakýt)
				{
					total_fiyat = gaz_fiyat * kullanýlan_yakýt;

					cout << " Yakýt istasyonundan alacaðýnýz litre : " << kullanýlan_yakýt << endl;
					cout << " Yakýtýn toplam tutarý : " << total_fiyat << endl;
				 }
		else
				{
			cout << " Uþaðým sen yolda kalmýþsýn haberin yok :)" << endl;
				}
	
	return 0;
}