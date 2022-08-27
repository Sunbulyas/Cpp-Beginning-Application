#include <iostream>
#include <clocale>
#include <string>

using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    /* Öðrencinin dönemlik sýnavlarý sonucunda aldýðý puanlarý harf notuna çevireceðiz
     1-Öðrencinin ismini alýyoruz.
     2-Dersin adýný alýyoruz.
     3-Sýnav puanlarýný tek tek kayýt ediyoruz.
     4-Öðrencinin baþarý durumunu ve harf notunu çýktý olarak alýyoruz.
    */
    string StNa , ClNa;
    short V1, V2, F, Ave;

    cout << "Lütfen öðrencinin adýný giriniz:";
    cin >> StNa;
    
    cout << "Dersin adýný giriniz:";
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
        cout << "Dersten aldýðýnýz harf:A-" << Ave << "-Baþarýlý" << endl;
    }
    else if (Ave >= 80 && Ave<90)
    {
        cout << "Dersten aldýðýnýz harf:B-" << Ave << "-Baþarýlý" << endl;
    }
    else if (Ave >= 70 && Ave < 80)
    {
        cout << "Dersten aldýðýnýz harf:C-" << Ave << "-Baþarýlý" << endl;
    }
    else if (Ave >= 60 && Ave < 70)
    {
        cout << "Dersten aldýðýnýz harf:D-" << Ave << "-Baþarýlý" << endl;
    }
    else
    {
        cout << "Dersten aldýðýnýz harf:F-" << Ave << "-Baþarýsýz" << endl;
    }
   
    return 0;
}

