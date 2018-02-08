#include<iostream>
using namespace std;
int main()
{
    int i=100,j,k;
    char c1='E',c2;
    double x=2.23,y=4.567,z;
    cout<<"int i=100,j,k;"<<endl;
    cout<<"char c1='E',c2;"<<endl;
    cout<<"double x=2.23,y=4.567,z;"<<endl;
    cout<<"--------------------"<<endl;
    cout<<"'A'+12="<<'A'+12<<endl;
    cout<<"'a'-'A'="<<'a'-'A'<<endl;
    cout<<"2*'A'+'B'/5="<<2*'A'+'B'/5<<endl;
    cout<<"11/3="<<11/3<<endl;
    cout<<"11%3="<<11%3<<endl;
    cout<<"11/3.0="<<11/3.0<<endl;
    j=k=--i+c1+x;
    cout<<"After 'j=k=--i+c1+x,i="<<i;
    cout<<" j="<<j<<" k="<<k<<endl;
    c2=c1++;
    cout<<"After 'c2=c1++;c2="<<c2<<" c1="<<c1<<endl;
    y+=i*2;
    cout<<"After 'y+=i*2';y="<<y<<endl;
    z=x*=(k=100)+1;
    cout<<"After 'z=x*=(k=100)+1'; k="<<k;
    cout<<"  x="<<x<<" z="<<z<<endl;
    j=5;
    cout<<"After 'j=5'; -++j="<<-++j<<endl;
    j=5;
    cout<<"After 'j=5'; -j++="<<-j++<<endl;
    return 0;
}