#include<iostream>
using namespace std;
int main()
{
    const float pai=3.14;
    float radius;
    cout<<"Enter radius:";
    cin>>radius;
    float area=pai*radius*radius;
    cout<<"\nThe area of cicle is";
    cout<<area<<endl;
    float circum=2*pai*radius;
    cout<<"The circum of the circle is"<<circum<<endl;
    return 0;
}