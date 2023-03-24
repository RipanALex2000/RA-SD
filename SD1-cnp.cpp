#include <iostream>
#include <cstring>
using namespace std;
void sex(char s);
void an(char a0,char a1, char a2);
void luna(char l1, char ls2);
void zi(char z1, char z2);
void judet(char j1, char j2);
int main()
{
        char cnp[15];
        cout << "Introduce C.N.P.-ul:";
        cin.getline(cnp, 15);
        cout << "Sexul: ";
        sex(cnp[0]);
        cout << "Data nasterii: ";
        an(cnp[0],cnp[1], cnp[2]);
        luna(cnp[3], cnp[4]);
        zi(cnp[5], cnp[6]);
        cout << "Judetul: ";
        judet(cnp[7], cnp[8]);
        cout << "Numar secvential: " << cnp[9] << cnp[10] << cnp[11] << endl;
        cout << "Cifra de control: " << cnp[12] << endl;
        system("pause");
        return 0;
}
void sex(char s)
{
        switch (s)
        {
        case '1':
        {
                cout << "Persoana  de sex masculin nascute intre anii 1900 - 1999" << endl;
                break;
        }
        case '2':
        {
                cout << "Persoana  de sex feminin nascute intre anii 1900 - 1999" << endl;
                break;
        }
        case '3':
        {
                cout << "Persoana  de sex masculin nascute intre anii 1800 - 1899" << endl;
                break;
        }
        case '4':
        {
                cout << "Persoana  de sex feminin nascute intre anii 1800 - 1899" << endl;
                break;
        }
        case '5':
        {
                cout << "Persoana  de sex masculin nascute intre anii 2000 - 2099" << endl;
                break;
        }
        case '6':
        {
                cout << "Persoana  de sex feminin nascute intre anii 2000 - 2099" << endl;
                break;
        }
        case '7':
        {
                cout << "Persoana  rezidente, de sex masculin" << endl;
                break;
        }
        case '8':
        {
                cout << "Persoana rezidente, de sex feminin" << endl;
                break;
        }
        default:
                cout << "NULL" << endl;
        }
}
void an(char a0,char a1, char a2)
{
        char s[3];
        s[0] = a1;
        s[1] = a2;
        s[2] = '\0';
        if (a0 == '1' || a0 == '2')
                cout << "19" << s;
        else if (a0 == '3' || a0 == '4')
                cout << "18" << s;
        else if (a0 == '5' || a0 == '6')
                cout << "20" << s;
        else
                cout << "Secol necunoscut " << s;
                cout<<".";
}
void luna(char l1, char l2)
{
        char s[3];
        s[0] = l1;
        s[1] = l2;
        s[2] = '\0';
        cout << s << ".";
}
void zi(char z1, char z2)
{
        char s[3];
        s[0] = z1;
        s[1] = z2;
        s[2] = '\0';
        cout << s << endl;
        ;
}
void judet(char j1, char j2)
{
        char s[3];
        s[0] = j1;
        s[1] = j2;
        s[2] = '\0';
        if (strcmp(s, "01") == 0)
                cout << "Alba" << endl;
        else if (strcmp(s, "02") == 0)
                cout << "Arad" << endl;
        else if (strcmp(s, "03") == 0)
                cout << "Argeș" << endl;
        else if (strcmp(s, "04") == 0)
                cout << "Bacău" << endl;
        else if (strcmp(s, "05") == 0)
                cout << "Bihor" << endl;
        else if (strcmp(s, "06") == 0)
                cout << "Bistrița-Năsăud" << endl;
        else if (strcmp(s, "07") == 0)
                cout << "Botoșani" << endl;
        else if (strcmp(s, "08") == 0)
                cout << "Brașov" << endl;
        else if (strcmp(s, "09") == 0)
                cout << "Brăila" << endl;
        else if (strcmp(s, "10") == 0)
                cout << "Buzău" << endl;
        else if (strcmp(s, "11") == 0)
                cout << "Caraș-Severin" << endl;
        else if (strcmp(s, "12") == 0)
                cout << "Cluj" << endl;
        else if (strcmp(s, "13") == 0)
                cout << "Constanța" << endl;
        else if (strcmp(s, "14") == 0)
                cout << "Covasna" << endl;
        else if (strcmp(s, "15") == 0)
                cout << "Dâmbovița" << endl;
        else if (strcmp(s, "16") == 0)
                cout << "Dolj" << endl;
        else if (strcmp(s, "17") == 0)
                cout << "Galați" << endl;
        else if (strcmp(s, "18") == 0)
                cout << "Gorj" << endl;
        else if (strcmp(s, "19") == 0)
                cout << "Harghita" << endl;
        else if (strcmp(s, "20") == 0)
                cout << "Hunedoara" << endl;
        else if (strcmp(s, "21") == 0)
                cout << "Ialomița" << endl;
        else if (strcmp(s, "22") == 0)
                cout << "Iași" << endl;
        else if (strcmp(s, "23") == 0)
                cout << "Ilfov" << endl;
        else if (strcmp(s, "24") == 0)
                cout << "Maramureș" << endl;
        else if (strcmp(s, "25") == 0)
                cout << "Mehedinți" << endl;
        else if (strcmp(s, "26") == 0)
                cout << "Mureș" << endl;
        else if (strcmp(s, "27") == 0)
                cout << "Neamț" << endl;
        else if (strcmp(s, "28") == 0)
                cout << "Olt" << endl;
        else if (strcmp(s, "29") == 0)
                cout << "Prahova" << endl;
        else if (strcmp(s, "30") == 0)
                cout << "Satu Mare" << endl;
        else if (strcmp(s, "31") == 0)
                cout << "Sălaj" << endl;
        else if (strcmp(s, "32") == 0)
                cout << "Sibiu" << endl;
        else if (strcmp(s, "33") == 0)
                cout << "Suceava" << endl;
        else if (strcmp(s, "34") == 0)
                cout << "Teleorman" << endl;
        else if (strcmp(s, "35") == 0)
                cout << "Timiș" << endl;
        else if (strcmp(s, "36") == 0)
                cout << "Tulcea" << endl;
        else if (strcmp(s, "37") == 0)
                cout << "Vaslui" << endl;
        else if (strcmp(s, "38") == 0)
                cout << "Vâlcea" << endl;
        else if (strcmp(s, "39") == 0)
                cout << "Vrancea" << endl;
        else if (strcmp(s, "40") == 0)
                cout << "București" << endl;
        else if (strcmp(s, "41") == 0)
                cout << "București - Sector 1" << endl;
        else if (strcmp(s, "42") == 0)
                cout << "București - Sector 2" << endl;
        else if (strcmp(s, "43") == 0)
                cout << "București - Sector 3" << endl;
        else if (strcmp(s, "44") == 0)
                cout << "București - Sector 4" << endl;
        else if (strcmp(s, "45") == 0)
                cout << "București - Sector 5" << endl;
        else if (strcmp(s, "46") == 0)
                cout << "București - Sector 6" << endl;
        else if (strcmp(s, "51") == 0)
                cout << "Călărași" << endl;
        else if (strcmp(s, "52") == 0)
                cout << "Giurgiu" << endl;
        else if (strcmp(s, "47") == 0)
                cout << "Bucuresti - Sector 7 (desfiintat)" << endl;
        else if (strcmp(s, "48") == 0)
                cout << "Bucuresti - Sector 8 (desfiintat)" << endl;
        else
                cout << "NULL";
}
