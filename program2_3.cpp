#include<iostream>
using namespace std;
int main()
{
    cout<<"(2!=3)=>"<<(2!=3)<<endl;    //必须加括号
    cout<<"(7>5)&&(5>2)=>"<<((7>5)&&(5>2))<<endl;
    cout<<"7>5&&5>2=>"<<(7>5&&5>2)<<endl;
    cout<<"(7>5>2)=>"<<(7>5>2)<<endl;
    cout<<"!!!123=>"<<!!!123<<endl;
    cout<<"!(!(true||false))=>"<<!(!(true||false))<<endl;
    cout<<"!(true&&false)||(true||false)=>"<<(!(true&&false)||(true||false))<<endl;
    cout<<"false||(false&&false)||true=>"<<(false||(false&&false)||true)<<endl;
    int i=32,j=1,k=3;
    cout<<"------------------"<<endl;
    cout<<"int i=32,j=1,k=3;"<<endl;
    cout<<"------------------"<<endl;
    cout<<"34-i||k=>"<<(34-i||k)<<endl;
    cout<<"j!=k&&i!=k||j==0=>"<<(j!=k&&i!=k||j==0)<<endl;
    cout<<"i&&j&&k=>"<<(i&&j&&k)<<endl;
    cout<<"!i||(j-k)&&i&&!(k-3||i*k)=>"<<(!i||(j-k)&&i&&!(k-3||i*k))<<endl;
    return 0;
}