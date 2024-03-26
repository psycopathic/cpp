#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int m,n;
    cin>>m>>n;
    int x=min(m,n);
    int y=max(m,n);
    cout<<x<< y<<endl;
    if(y%x==0)
    cout<<"multiples"<<endl;
    else
    cout<<"not multiples"<<endl;
    return 0;
}