#include <iostream>
using namespace std;
int main ()
{
    int i,r;
    cout<<"program menukar angka bilangan tanpa variabel sementara"<<endl;
    cout<<"_______________________________________________________"<<endl;
    cout<<endl;
    cout<<" i = ";
    cin>>i;
    cout<<" r = ";
    cin>>r;
    cout<<endl;
    i=i+r;
    r=i-r;
    i=i-r;
    cout<<" i = "<<i<<" r = "<<r<<endl;
    return 0;

}