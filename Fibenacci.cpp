#include<iostream>
using namespace std;
int ahad(int a,int b,int n);
int main()
{
    int n;
    cin>>n;
    int a=0,b=1;
    cout<<a<<' '<<b<<' ';
    ahad(a,b,n);
    return 0;
}
int ahad(int a,int b,int n)
{
    int k=a+b;
    if(k>n)
    {
        return 0;
    }
    cout<<k<<' ';
    ahad(b,k,n);
}