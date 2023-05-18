#include <iostream>

using namespace std;
struct nod
{
    nod *llink;
    nod *rlink;
    int cheie;
} *t,*g;
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
    cout << endl;
    cout << "insert new nod" << endl;
    t = rad;
    ok = 1;
    cout << "Nou nod creat" << endl;
    ;
    nod *p = new nod;
    cout << "cheie nod:"<<endl;;
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
    pi(rad);
    cout << endl;
    cout << "Delete nod" << endl;
    t = rad;
    g = rad;
    ok = 1;
    cout << "cheie nod:"<< endl;
    cin >> c;
    if (t == NULL)
        cout << "Underflow";
    else
    {
        if (c >= t->cheie && t->rlink != NULL && (t->rlink)->cheie == c)
            {
                t = t->rlink;
            }
        else if (c < t->cheie && t->llink != NULL )
            {
                t = t->llink;
            }
        while (ok)
        {
            ok = 0;
            while (c < t->cheie && t->llink != NULL)
            {
                t = t->llink;
                g = g->llink;
                ok = 1;
            }
            while (c >= t->cheie && t->rlink != NULL && (t->rlink)->cheie == c)
            {
                t = t->rlink;
                g = g->rlink;
                ok = 1;
            }
            if(c==t->cheie && (t->rlink)->cheie != c)
                break;
        }
        t->cheie=0;
        if(g->rlink == t)
        {
            g->rlink = t->rlink;
            g=g->rlink;
        }
        else
        {
            g->llink = t->rlink;
            g=g->llink;
        }
       
        while (g->llink != NULL)
            {
                g = g->llink;
            }
        g->llink=t->llink;
        t=g;
    }
    pi(rad);
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