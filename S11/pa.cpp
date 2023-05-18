#include <iostream>
using namespace std;
int v[100],m[100][100],i,j,n;
void at(int r);
int main()
{
    int r;
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
           cin>>m[i][j];
    cin>>r;
    at(r);
    cout<<endl;
    system("pause");
    return 0;
}
void at(int r)
{
 v[r]=1;
 cout<<r<<" ";
 for(i=0;i<n;i++)
    if(m[r][i]==1 && v[i]==0)
    {
        at(i);
    }
}