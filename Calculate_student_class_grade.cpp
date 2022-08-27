#include <iostream>
#include <clocale>
#include <string>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    /*Þimdi bizde 3 öðrenci ve 3 er tane de sýnav bilgileri var bunlarýn harf notlarýný ve sýnýfýn baþarý durumunu öðreneceðiz
    1-Öðrencilerin isimlerini ve her öðrencinin notlarýný al
    2-Öðrencinin notlarýný ortalamasýný bul
    3-Sýnýfýn ortalamasýný bul
    4-Döngüye gir ve öðrencinin isimleri ile notlarýný açýkla en sona da sýnýfýn ortalamasýný bul ve sýnýf ortalamasýnýn baþarýlý olup olmadýðýný öðren.
    */

    cout << "Sýnýfýn dönem sonu baþarý durumu için lütfen öðrencinin ismini ve aldýðý notlarý giriniz." << endl;
    string öð1, öð2, öð3 ;
    int av1, av2, av3;
    char g1, g2, g3;

    int x1, y1, z1;       //x,y ve z testleri belirtiyor    
    int x2, y2, z2;
    int x3, y3, z3;

    cout << "1.Öðrencinin ismi:";
    cin >> öð1;
    cout << "1.Vize puaný:";
    cin >> x1;
    cout << "2.Vize puaný:";
    cin >> y1;
    cout << "Final puaný:";
    cin >> z1;
    av1 = (x1 + y1 + z1) / 3;

        if (av1 >= 60)
        {
            cout<<"Öðrencinin ismi:" << öð1 << "; Baþarýlý" << endl;
        }
        else
        {
            cout << "Öðrencinin ismi:" << öð1 << "; Baþarýsýz" << endl;
        }
        cout<<endl;

    cout << "2.Öðrencinin ismi:";
    cin >> öð2;
    cout << "1.Vize puaný:";
    cin >> x2;
    cout << "2.Vize puaný:";
    cin >> y2;
    cout << "Final puaný:";
    cin >> z2;
    av2 = (x2 + y2 + z2) / 3;

        if (av2 >= 60)
        {
            cout << "Öðrencinin ismi:" << öð2 << "; Baþarýlý" << endl;
        }
        else
        {
            cout << "Öðrencinin ismi:" << öð2 << "; Baþarýsýz" << endl;
        }
        cout << endl;

    cout << "3.Öðrencinin ismi:";
    cin >> öð3;
    cout << "1.Vize puaný:";
    cin >> x3;
    cout << "2.Vize puaný:";
    cin >> y3;
    cout << "Final puaný:";
    cin >> z3;
    av3 = (x3 + y3 + z3) / 3;

        if (av3 >= 60)
        {
            cout << "Öðrencinin ismi:" << öð3 << "; Baþarýlý" << endl;
        }
        else
        {
            cout << "Öðrencinin ismi:" << öð3 << "; Baþarýsýz" << endl;
        }
        cout << endl;

    int cav= (av1 + av2 + av3)/3;

        if (cav >= 60)
        {
            cout << "Sýnýfýn durumu: Baþarýlý"<< endl;
        }
        else
        {
            cout << "Sýnýfýn durumu: Baþarýsýz"<< endl;
        }
        

        

    return 0;
}

