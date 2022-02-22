#include<iostream>
#include<cmath>

using namespace std;

int main(){
    // following lines are for input 
    float  a,b,c,x,y;
    cout<<"Enter Value of a = ";
    cin>>a;
    cout<<"Enter Value of b = ";
    cin>>b;
    cout<<"Enter Value of c = ";
    cin>>c;

    //this following lines are for calculating factors
    x = (-b+sqrt(b*b-4*a*c))/2*a;
    cout<<"here the 1st root = "<<x;
    y = (-b-sqrt(b*b-4*a*c))/2*a;
    cout<<"\nhere the 2nd root = "<<y;
    return 0;
}