#include<iostream>
using  namespace std;
int main()
{
    float rad;
    const float pi=3.141519F;
    cout<<"Enter the value of the radius "<<'\n';
    cin>>rad;
    float area=pi*rad*rad;
    cout<<"Area of the circle is"<<area<<'\n';
    return 0;
}