#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int num1,num2,sum=0;
    cin>>num1>>num2;
    int x=max(num1,num2);
    for(int i=2;i<x;i++)
    {
        if(num1%i==0 && num2%i==0)
        {
            sum=i;
            //break;
        }
    }
    cout<<sum<<endl;
    return 0;
}