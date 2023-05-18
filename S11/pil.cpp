#include <iostream>
using namespace std;
int v[100],m[100][100],i,j,n,x[100];
int at(int r);
int main()
{
    int r;
    cin>>n;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
           cin>>m[i][j];
    cin>>r;
    j=at(r);
    for(i=1;i<j;i++)
     cout<<x[i];
    cout<<endl;
    system("pause");
    return 0;
}
int at(int r)
{
  int k,st,dr;
  st=dr=1;
  x[1]=r;
  v[r]=1;
  while(st<=dr)
  {
    k=x[st];
    for(i=1;i<=n;i++)
      if(v[i]==0 && m[k][i]==1)
      {
        v[i]=1;
        x[++dr]=i;
      }
    st++;
  }
  return dr;
}