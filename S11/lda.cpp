#include <iostream>
#include <vector>
using namespace std;
int m[100][100],v[100],k,n,ro,fr[100];
void cit();
void cit1();
void cot();
int main()
{
    int i,j;
    cin>>i;
    cin>>n;
    if(i==0)
        cit();
    else
        cit1();
    cot();
    cout<<endl;
    system("pause");
    return 0;
}
void cit()
{
    int i,j;
    for(i=0; i<n; i++)
        for(j=i+1; j<n; j++)
        {
            cin>>m[i][j];
            m[j][i]=m[i][j];

        }
}
void cot()
{
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            cout<<m[i][j]<<" ";
        cout<<endl;
    }
}
void cit1()
{
    int i,j;
    for(i=0; i<n; i++)
        for(j=0; j<n; j++)
        {
            cin>>m[i][j];
        }
}