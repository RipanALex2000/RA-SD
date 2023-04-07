#include <iostream>
using namespace std;
int v[100],n,s[100];
void initv();
void iv();
void stv();
void sv();
void av();
void avs();
void civ();
int main()
{
    int h,ok=1;
    cout<<"Introduce marimea vectorului:";
    cin>>n;
    cout<<endl;
    initv();

    do
    {
        cout<<"Selectati o optiune: 1) inserare; 2)stergere; 3)cautare; 4)sortare; 0)exit:";
        cin>>h;
        cout<<endl;
        switch(h)
        {
        case(1):
        {
            iv();
            av();
            break;
        }
        case(2):
        {
            stv();
            av();
            break;
        }
        case(3):
        {
            civ();
            break;
        }
        case(4):
        {
            av();
            sv();
            break;
        }
        case(0):
        {
            ok=0;
            break;
        }
        }
    }while(ok);
    return 0;
}
void initv()
{
    int i;
    for(i=0; i<n; i++)
    {
        cout<<"Introduceti el "<<i<<" :";
        cin>>v[i];
    }
}
void iv()
{
    int p,i,k;
    cout<<"Introduceti locul unde sa fie introdus elementul:";
    cin>>p;
    while(p<0 || p>n)
    {
        cout<<"introduce din nou:";
        cin>>p;
    }
    cout<<"Valoarea:";
    cin>>k;


    for(i=n; i>=p; i--)
    {
        v[i+1]=v[i];
    }
    v[p]=k;
    n++;

}
void stv()
{
    int p,i;
    cout<<"Introduceti locul unde sa fie sters elementul:";
    cin>>p;
    while(p<0 || p>n)
    {
        cout<<"introduce din nou:";
        cin>>p;
    }

    for(i=p; i<n; i++)
    {
        v[i]=v[i+1];
    }
    n--;
    cout<<"Elementua a fost sters!"<<endl;
}
void sv()
{
    int ok,aux,i;
    for(i=0; i<n; i++)
    {
        s[i]=v[i];
    }
    do
    {
        ok=0;
        for(i=0; i<n-1; i++)
            if(s[i]>s[i+1])
            {
                aux=s[i];
                s[i]=s[i+1];
                s[i+1]=aux;
                ok=1;

            }
    }
    while(ok==1);
    avs();
}
void av()
{
    int i;
    cout<<"Vector:"<<endl;
    for(i=0; i<n; i++)
        cout<<v[i]<<" ";
    cout<<endl;
}
void avs()
{
    int i;
    cout<<"Vector sortat:"<<endl;
    for(i=0; i<n; i++)
        cout<<s[i]<<" ";
    cout<<endl;
}
void civ()
{
    int p,i,k=0;
    cout<<"Introduceti valoarea cautata:";
    cin>>p;
    for(i=0; i<n; i++)
        if(v[i]==p)
        {
            k=1;
            break;
        }
    if(k==1)
        cout<<"Valoarea e in vector!";
    else
        cout<<"Valoarea nu e in vector!";
    cout<<endl;

}