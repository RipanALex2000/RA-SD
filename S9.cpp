#include <iostream>
using namespace std;
struct nod
{
    int numar;
    nod* ur;
    nod* an;
};
nod* cap =NULL;
void afl(nod* cap)
{
    while(cap != NULL)
    {
        cout<<cap->numar<<endl;
        cap = cap->ur;
    }
}
void af1(nod* &cap, int valoare)
{
    nod *elem = new nod;
    elem->numar = valoare;
    elem->ur = cap;
    elem->an = NULL;
    if(cap != NULL)
        cap->an=elem;
    cap=elem;
}
void afu(nod* &cap, int valoare)
{
    nod *elem_f = new nod;
    elem_f->numar = valoare;
    elem_f->ur = NULL;
    elem_f->an = NULL;
    if(cap == NULL)
        cap =elem_f;
    else
    {
        nod *nc =cap;
        while (nc->ur != NULL)
            nc=nc->ur;
        nc->ur = elem_f;
        elem_f->an=nc;
    }
}
void afd(nod* &cap,nod* ed, int valoare)
{
    nod *elem_c = new nod;
    elem_c->numar = valoare;
    elem_c->ur = NULL;
    elem_c->an = NULL;
    if(cap == NULL)
        cap =elem_c;
    return;
    if(cap==ed)
    {
        elem_c->ur =cap;
        cap->an = elem_c;
        cap = elem_c;
        return;
    }
    elem_c->ur = ed->ur;
    elem_c->an = ed;
    ed->ur->an = elem_c;
    ed->ur =elem_c;
}
nod* cv(nod* cap, int valoare)
{
    while(cap != NULL && cap-> numar != valoare)
        cap=cap->ur;
    return cap;
}
nod* cp(nod* cap, int pozitie)
{
    int i=0;
    while(cap != NULL && i<pozitie)
    {
        cap=cap->ur;
        i++;
    }
    if(i==pozitie)
        return cap;
    else
        return NULL;
}
void se(nod* el)
{
    el->an->ur=el->ur;
    el->ur->an=el->an;

    delete el;
}
void sep(nod* &cap,int p)
{
    if(p==0)
    {
        nod* vic = cap;
        cap = cap->ur;
        cap->ur= NULL;
        delete vic;
    }
    else
    {
        nod* pred = cp(cap,p);
        se(pred);
    }
}
void sev(nod* &cap,int v)
{
    if(cap->numar == v)
    {
        nod* vic = cap;
        cap = cap->ur;
        cap->ur= NULL;
        delete vic;
        return;
    }
    nod* el = cap;
    while(el->ur != NULL && el->ur->numar != v)
        el = el->ur;
    if(el->ur != NULL)
        se(el);
}
int main()
{
    int n,ok=1,t,g;
    do
    {
        cout<<"n";
        cin>>n;
        if(n>1 && n<10)
        {
            cout<<"t";
            cin>>t;
        }

        switch (n)
        {
        case 0:
        {
            ok=0;
            break;
        }
        case 1:
        {
            afl(cap);
            break;
        }
        case 2:
        {

            af1(cap,t);
            break;
        }
        case 3:
        {

            afu(cap,t);
            break;
        }
        case 4:
        {
            cin>>g;
            while(cv(cap,g)==NULL)
             cin>>g;
            afd(cap,cv(cap,g),t);
            break;
        }
        case 5:
        {

            cv(cap,t);
            break;
        }
        case 6:
        {

            cp(cap,t);
            break;
        }
        case 7:
        {
            cin>>g;
            while(cv(cap,g)==NULL)
             cin>>g;
            se(cv(cap,g));
            break;
        }
        case 8:
        {
            sep(cap,t);
            break;
        }
        case 9:
        {
            sev(cap,t);
            break;
        }
        }
        }while(ok);
            return 0;
    }