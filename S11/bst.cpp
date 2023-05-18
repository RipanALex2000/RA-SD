#include <iostream>

using namespace std;
struct nod
{
    nod *llink;
    nod *rlink;
    int cheie;
} *t,*g;
int rbt(nod* p,int key );
nod pi(nod *p);
int main()
{
    int n, x, c, d, ok;
    cout << "Nr de noduri:" << endl;
    cin >> n;
    cout << "Nod radacina:" << endl;
    cin >> d;
    nod *rad = new nod;
    rad->cheie = d;
    rad->llink = NULL;
    rad->rlink = NULL;
    n = n - 1;
    cout << "Nod radacina creat" << endl;
    while (n != 0)
    {
        t = rad;
        ok = 1;
        cout << "Nou nod creat" << endl;
        ;
        nod *p = new nod;
        cout << "cheie nod:" << n << endl;
        cin >> c;
        p->cheie = c;
        p->llink = NULL;
        p->rlink = NULL;
        if (p == NULL)
            cout << "Overflow";
        else
        {
            while (ok)
            {
                ok = 0;
                while (p->cheie >= t->cheie && t->rlink != NULL)
                {
                    t = t->rlink;
                    ok = 1;
                }
                while (p->cheie < t->cheie && t->llink != NULL)
                {
                    t = t->llink;
                    ok = 1;
                }
            }
            if (p->cheie >= t->cheie)
                t->rlink = p;
            if (p->cheie < t->cheie)
                t->llink = p;
        }

        n = n - 1;
    }
    pi(rad);
    cout<<endl;
    int rr;
    cin>>rr;
    if(rbt(rad,rr)!=-9999)
        cout<<"Gasit";
    else
        cout<<"Nu a fost gasit";
    cout << endl;
    cout << "Terminat" << endl;
    cout << endl;
    system("pause");
    return 0;
}
nod pi(nod *p)
{
    if (p->llink != NULL)
        pi(p->llink);
    cout << p->cheie;
    if (p->rlink != NULL)
        pi(p->rlink);
}
int rbt(nod* x,int key)
    {
     if(x == NULL)
        return -9999; 
    else if(x->cheie == key )
        return x->cheie;
    if (key < x->cheie )
        return rbt(x->llink, key);
    else
        return rbt(x->rlink, key);
    }