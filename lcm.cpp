#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
int main()
{
    int num1,num2,lcm=0;
    cin>>num1>>num2;
    int x=min(num1,num2);
    for(int i=2;i<=num1*num2;i++)
    {
        if(i%num1==0 && i%num2==0)
        {
           lcm=i;
           break;
        }
    }
    cout<<lcm<<endl;
    return 0;
}