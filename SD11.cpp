#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    char sir[100],aux,sir1[100];
    int ok=1,x,y,i;
    cout<<"Introduceti sirul: ";
    cin.getline(sir1,31);
    strcpy(sir,sir1);
    y=strlen(sir1)/2;
    for(i=0; i<y; i++)
    {
        x=strlen(sir1)-i-1;
        if(sir1[i]!=sir1[x])
           ok=0;
    }
    if(ok==1)
        cout<<"E palindrom";
    else
        {
        cout<<"Nu e palindrom"<<endl;
        for(i=0; i<y; i++)
            {
                x=strlen(sir)-i-1;
                aux=sir[i];
                sir[i]=sir[x];
                sir[x]=aux;
            }
            cout<<"Inversul: "<<sir;
        }
    cout<<endl;
    system("pause");
    return 0;
}