#include <iostream>
#include <clocale>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    /* ��rencinin d�nemlik s�navlar� sonucunda ald��� puanlar� harf notuna �evirece�iz
     1-��rencinin ismini al�yoruz.
     2-Dersin ad�n� al�yoruz.
     3-S�nav puanlar�n� tek tek kay�t ediyoruz.
     4-��rencinin ba�ar� durumunu ve harf notunu ��kt� olarak al�yoruz.
    */
    string StNa , ClNa;
    short V1, V2, F, Ave;

    cout << "L�tfen ��rencinin ad�n� giriniz:";
    cin >> StNa;
    
    cout << "Dersin ad�n� giriniz:";
    cin >> ClNa;

    cout << "1.Vize notu:";
    cin >> V1;
    cout << "2.Vize notu:";
    cin >> V2;
    cout << "Final notu:";
    cin >> F;

    Ave = (V1 * 0.25) + (V2 * 0.25) + (F * 0.5);

    if (Ave >= 90)
    {
        cout << "Dersten ald���n�z harf:A-" << Ave << "-Ba�ar�l�" << endl;
    }
    else if (Ave >= 80 && Ave<90)
    {
        cout << "Dersten ald���n�z harf:B-" << Ave << "-Ba�ar�l�" << endl;
    }
    else if (Ave >= 70 && Ave < 80)
    {
        cout << "Dersten ald���n�z harf:C-" << Ave << "-Ba�ar�l�" << endl;
    }
    else if (Ave >= 60 && Ave < 70)
    {
        cout << "Dersten ald���n�z harf:D-" << Ave << "-Ba�ar�l�" << endl;
    }
    else
    {
        cout << "Dersten ald���n�z harf:F-" << Ave << "-Ba�ar�s�z" << endl;
    }
   
    return 0;
}

