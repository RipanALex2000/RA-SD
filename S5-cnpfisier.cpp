#include <iostream>
#include <fstream>
#include <cstring>
using namespace std;
void sex(char s);
void an(char a0, char a1, char a2);
void luna(char l1, char ls2);
void zi(char z1, char z2);
void judet(char j1, char j2);
ifstream f("file.in");
ofstream g("file.out");
int main()
{
        char cnp[15];
        int i = 0;
        while (f >> cnp[0])
        {
                for (i = 1; i < 13; i++)
                {
                        f >> cnp[i];
                }
                g << "Sexul: ";
                sex(cnp[0]);
                g << "Data nasterii: ";
                an(cnp[0], cnp[1], cnp[2]);
                luna(cnp[3], cnp[4]);
                zi(cnp[5], cnp[6]);
                g << "Judetul: ";
                judet(cnp[7], cnp[8]);
                g << "Numar secvential: " << cnp[9] << cnp[10] << cnp[11] << endl;
                g << "Cifra de control: " << cnp[12] << endl;
                g << endl;
        }
        cout << "Terminat!";
        f.close();
        g.close();
        return 0;
}
void sex(char s)
{
        switch (s)
        {
        case '1':
        {
                g << "Persoana  de sex masculin nascute intre anii 1900 - 1999" << endl;
                break;
        }
        case '2':
        {
                g << "Persoana  de sex feminin nascute intre anii 1900 - 1999" << endl;
                break;
        }
        case '3':
        {
                g << "Persoana  de sex masculin nascute intre anii 1800 - 1899" << endl;
                break;
        }
        case '4':
        {
                g << "Persoana  de sex feminin nascute intre anii 1800 - 1899" << endl;
                break;
        }
        case '5':
        {
                g << "Persoana  de sex masculin nascute intre anii 2000 - 2099" << endl;
                break;
        }
        case '6':
        {
                g << "Persoana  de sex feminin nascute intre anii 2000 - 2099" << endl;
                break;
        }
        case '7':
        {
                g << "Persoana  rezidente, de sex masculin" << endl;
                break;
        }
        case '8':
        {
                g << "Persoana rezidente, de sex feminin" << endl;
                break;
        }
        default:
                g << "NULL" << endl;
        }
}
void an(char a0, char a1, char a2)
{
        char s[3];
        s[0] = a1;
        s[1] = a2;
        s[2] = '\0';
        if (a0 == '1' || a0 == '2')
                g << "19" << s;
        else if (a0 == '3' || a0 == '4')
                g << "18" << s;
        else if (a0 == '5' || a0 == '6')
                g << "20" << s;
        else
                g << "Secol necunoscut " << s;
                g <<".";
}
void luna(char l1, char l2)
{
        char s[3];
        s[0] = l1;
        s[1] = l2;
        s[2] = '\0';
        g << s << ".";
}
void zi(char z1, char z2)
{
        char s[3];
        s[0] = z1;
        s[1] = z2;
        s[2] = '\0';
        g << s << endl;
        ;
}
void judet(char j1, char j2)
{
        char s[3];
        s[0] = j1;
        s[1] = j2;
        s[2] = '\0';
        if (strcmp(s, "01") == 0)
                g << "Alba" << endl;
        else if (strcmp(s, "02") == 0)
                g << "Arad" << endl;
        else if (strcmp(s, "03") == 0)
                g << "Argeș" << endl;
        else if (strcmp(s, "04") == 0)
                g << "Bacău" << endl;
        else if (strcmp(s, "05") == 0)
                g << "Bihor" << endl;
        else if (strcmp(s, "06") == 0)
                g << "Bistrița-Năsăud" << endl;
        else if (strcmp(s, "07") == 0)
                g << "Botoșani" << endl;
        else if (strcmp(s, "08") == 0)
                g << "Brașov" << endl;
        else if (strcmp(s, "09") == 0)
                g << "Brăila" << endl;
        else if (strcmp(s, "10") == 0)
                g << "Buzău" << endl;
        else if (strcmp(s, "11") == 0)
                g << "Caraș-Severin" << endl;
        else if (strcmp(s, "12") == 0)
                g << "Cluj" << endl;
        else if (strcmp(s, "13") == 0)
                g << "Constanța" << endl;
        else if (strcmp(s, "14") == 0)
                g << "Covasna" << endl;
        else if (strcmp(s, "15") == 0)
                g << "Dâmbovița" << endl;
        else if (strcmp(s, "16") == 0)
                g << "Dolj" << endl;
        else if (strcmp(s, "17") == 0)
                g << "Galați" << endl;
        else if (strcmp(s, "18") == 0)
                g << "Gorj" << endl;
        else if (strcmp(s, "19") == 0)
                g << "Harghita" << endl;
        else if (strcmp(s, "20") == 0)
                g << "Hunedoara" << endl;
        else if (strcmp(s, "21") == 0)
                g << "Ialomița" << endl;
        else if (strcmp(s, "22") == 0)
                g << "Iași" << endl;
        else if (strcmp(s, "23") == 0)
                g << "Ilfov" << endl;
        else if (strcmp(s, "24") == 0)
                g << "Maramureș" << endl;
        else if (strcmp(s, "25") == 0)
                g << "Mehedinți" << endl;
        else if (strcmp(s, "26") == 0)
                g << "Mureș" << endl;
        else if (strcmp(s, "27") == 0)
                g << "Neamț" << endl;
        else if (strcmp(s, "28") == 0)
                g << "Olt" << endl;
        else if (strcmp(s, "29") == 0)
                g << "Prahova" << endl;
        else if (strcmp(s, "30") == 0)
                g << "Satu Mare" << endl;
        else if (strcmp(s, "31") == 0)
                g << "Sălaj" << endl;
        else if (strcmp(s, "32") == 0)
                g << "Sibiu" << endl;
        else if (strcmp(s, "33") == 0)
                g << "Suceava" << endl;
        else if (strcmp(s, "34") == 0)
                g << "Teleorman" << endl;
        else if (strcmp(s, "35") == 0)
                g << "Timiș" << endl;
        else if (strcmp(s, "36") == 0)
                g << "Tulcea" << endl;
        else if (strcmp(s, "37") == 0)
                g << "Vaslui" << endl;
        else if (strcmp(s, "38") == 0)
                g << "Vâlcea" << endl;
        else if (strcmp(s, "39") == 0)
                g << "Vrancea" << endl;
        else if (strcmp(s, "40") == 0)
                g << "București" << endl;
        else if (strcmp(s, "41") == 0)
                g << "București - Sector 1" << endl;
        else if (strcmp(s, "42") == 0)
                g << "București - Sector 2" << endl;
        else if (strcmp(s, "43") == 0)
                g << "București - Sector 3" << endl;
        else if (strcmp(s, "44") == 0)
                g << "București - Sector 4" << endl;
        else if (strcmp(s, "45") == 0)
                g << "București - Sector 5" << endl;
        else if (strcmp(s, "46") == 0)
                g << "București - Sector 6" << endl;
        else if (strcmp(s, "51") == 0)
                g << "Călărași" << endl;
        else if (strcmp(s, "52") == 0)
                g << "Giurgiu" << endl;
        else if (strcmp(s, "47") == 0)
                g << "Bucuresti - Sector 7 (desfiintat)" << endl;
        else if (strcmp(s, "48") == 0)
                g << "Bucuresti - Sector 8 (desfiintat)" << endl;
        else
                g << "NULL";
}