#include<iostream>
using namespace std;
int main(){
    float a,b,x,s;
    cout<<"The equation is : x^3-x-1=0"<<endl;
    cout<<"Enter the value of A(-) : ";
    cin>>a;
    cout<<"Enter the value of B(+) : ";
    cin>>b;
    x = (a+b)/2;
    s = (x*x*x)-x-1;
    for(int i=0; i<20; i++){
        if(s>0){
            b=x;
        }else{
            a=x;
        }
         x = (a+b)/2;
            s = (x*x*x)-x-1;
    }
    cout<<"The result is "<<x;
}