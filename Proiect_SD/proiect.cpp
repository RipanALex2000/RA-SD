#include <iostream>
#include <cstring>
using namespace std;
int n,r;
struct nod
{
    int id, note[10]={0}, clasa, k = -1;
    char nume[50];
    nod *rlink;
    nod *llink;
} *first = NULL, *last = NULL, *t;
void init();
void i();
void st();
void ms();
void af();
void media();
void ci();
int main()
{
    int x, ok = 1;
    do
    {
        cout << "Selectati o optiune: 1) inserare; 2)stergere; 3)cautare; 4)note; 5)media; 0)exit:";
        cin >> x;
        cout << endl;
        switch (x)
        {
        case (1):
        {
            i();
            af();
            break;
        }
        case (2):
        {
            st();
            af();
            break;
        }
        case (3):
        {
            ci();
            break;
        }
        case (4):
        {
            af();
            ms();
            break;
        }
        case (5):
        {
            af();
            media();
            break;
        }
        case (0):
        {
            ok = 0;
            break;
        }
        }
    } while (ok);
    return 0;
}
void i()
{
    int i = 0, m;
    char y[50];
    cout << "introduce nr elementul dorite:";
    cin >> n;
    while (i < n)
    {
        r++;
        i++;
        nod *p = new nod;
        cout << "Id:"<<r<<endl;
        p->id = r;
        cout << "nume:";
        cin >> y;
        strcpy(p->nume, y);
        cout << "Prenume:";
        cin >> y;
        strcat(p->nume, " ");
        strcat(p->nume, y);
        cout << "Clase(int):";
        cin >> m;
        p->clasa = m;
        p->llink = NULL;
        p->rlink = NULL;
        if (p == NULL)
            cout << "Overflow";
        else
        {

            if (last == NULL)
            {
                first = p;
                last = p;
            }
            else
            {
                p->llink = last;
                p->rlink = NULL;
                last->rlink = p;
                last = p;
            }
        }
        cout << endl;
    }
}
void st()
{
    int ccc;
    if (first == NULL)
        cout << "Underflow";
    else if (first == last)
    {
        first->id = 0;
        strcpy(first->nume, " ");
        first->clasa = 0;
        first = NULL;
        last = NULL;
        t = NULL;
    }
    else
    {
        cout << "Introduce ce elementul dupa id vrei sa-l stergi:";
        cin >> ccc;
        t = first;
        while (t->id != ccc)
            t = t->rlink;
        t->id = 0;
        strcpy(t->nume, " ");
        t->clasa = 0;
        if (t == first)
        {
            first->id = 0;
            strcpy(first->nume, "");
            first = first->rlink;
            first->llink = NULL;
            t = first;
        }
        else if (t == last)
        {
            last->id = 0;
            strcpy(last->nume, "");
            last = last->llink;
            last->rlink = NULL;
            t = last;
        }
        else
        {
            (t->llink)->rlink = t->rlink;
            (t->rlink)->llink = t->llink;
        }
    }
}
void ms()
{
    int i, m;
    cout << "Id elevului/elevei:";
    cin >> m;
    t = first;
    while (t->id != m && t->rlink != NULL)
        t = t->rlink;
    if (t->id != m)
        cout << "Nu e elementul!!"<<endl;
    else
    {
        cout << "Introdu nr de note:";
        cin >> t->k;
        cout << "Introdu notele"<<endl;
        for (i = 0; i < t->k; i++)
        {
             cout<<"Nota "<<i<<" ";
             cin >> t->note[i];
        }
           
    }
}
void af()
{
    int i;
    t = first;
    while (t != NULL)
    {
        cout << t->id << " " << t->nume << "in clase "<<t->clasa<<" "<<"cu notele: ";
        for (i = 0; i < t->k; i++)
            cout << t->note[i] << " ";
        cout << endl;
        t = t->rlink;
    }
    cout << endl;
}
void media()
{
    int i, m, s = 0;
    cout << "Id elevului/elevei:";
    cin >> m;
    t = first;
    while (t->id != m && t->rlink != NULL)
        t = t->rlink;
    if (t->id != m)
        cout << "Nu e elementul!!"<<endl;
    else
    {
        for (i = 0; i < t->k; i++)
            s = s + t->note[i];

        cout << "Media elevului " << t->nume << " este " << (float)s / t->k << endl;
    }
}
void ci()
{
    int ccc;
    cout << "Introduce id-ul elementului cautat:";
    cin >> ccc;
    t = first;
    while (t->id != ccc && t->rlink!= NULL)
        t = t->rlink;
    if (t->id == ccc)
        cout << "Elementul exista!!" <<endl;
    else
        cout <<"Elementul nu exista!! "<< endl;
}