#include <iostream>
#include <clocale>
#include <string>


using namespace std;

int main()
{
    setlocale(LC_ALL, "Turkish");

    /*�imdi bizde 3 ��renci ve 3 er tane de s�nav bilgileri var bunlar�n harf notlar�n� ve s�n�f�n ba�ar� durumunu ��renece�iz
    1-��rencilerin isimlerini ve her ��rencinin notlar�n� al
    2-��rencinin notlar�n� ortalamas�n� bul
    3-S�n�f�n ortalamas�n� bul
    4-D�ng�ye gir ve ��rencinin isimleri ile notlar�n� a��kla en sona da s�n�f�n ortalamas�n� bul ve s�n�f ortalamas�n�n ba�ar�l� olup olmad���n� ��ren.
    */

    cout << "S�n�f�n d�nem sonu ba�ar� durumu i�in l�tfen ��rencinin ismini ve ald��� notlar� giriniz." << endl;
    string ��1, ��2, ��3 ;
    int av1, av2, av3;
    char g1, g2, g3;

    int x1, y1, z1;       //x,y ve z testleri belirtiyor    
    int x2, y2, z2;
    int x3, y3, z3;

    cout << "1.��rencinin ismi:";
    cin >> ��1;
    cout << "1.Vize puan�:";
    cin >> x1;
    cout << "2.Vize puan�:";
    cin >> y1;
    cout << "Final puan�:";
    cin >> z1;
    av1 = (x1 + y1 + z1) / 3;

        if (av1 >= 60)
        {
            cout<<"��rencinin ismi:" << ��1 << "; Ba�ar�l�" << endl;
        }
        else
        {
            cout << "��rencinin ismi:" << ��1 << "; Ba�ar�s�z" << endl;
        }
        cout<<endl;

    cout << "2.��rencinin ismi:";
    cin >> ��2;
    cout << "1.Vize puan�:";
    cin >> x2;
    cout << "2.Vize puan�:";
    cin >> y2;
    cout << "Final puan�:";
    cin >> z2;
    av2 = (x2 + y2 + z2) / 3;

        if (av2 >= 60)
        {
            cout << "��rencinin ismi:" << ��2 << "; Ba�ar�l�" << endl;
        }
        else
        {
            cout << "��rencinin ismi:" << ��2 << "; Ba�ar�s�z" << endl;
        }
        cout << endl;

    cout << "3.��rencinin ismi:";
    cin >> ��3;
    cout << "1.Vize puan�:";
    cin >> x3;
    cout << "2.Vize puan�:";
    cin >> y3;
    cout << "Final puan�:";
    cin >> z3;
    av3 = (x3 + y3 + z3) / 3;

        if (av3 >= 60)
        {
            cout << "��rencinin ismi:" << ��3 << "; Ba�ar�l�" << endl;
        }
        else
        {
            cout << "��rencinin ismi:" << ��3 << "; Ba�ar�s�z" << endl;
        }
        cout << endl;

    int cav= (av1 + av2 + av3)/3;

        if (cav >= 60)
        {
            cout << "S�n�f�n durumu: Ba�ar�l�"<< endl;
        }
        else
        {
            cout << "S�n�f�n durumu: Ba�ar�s�z"<< endl;
        }
        

        

    return 0;
}

