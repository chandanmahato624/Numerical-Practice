#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Array size :";
    cin>>n;
    float x[100],y[100],d[100],a,u,h,point,result,ux=1;
    cout<<"Enter Newton Forward data :";
    for(int i=0; i<n; i++){
        cout<<"x["<<i<<"]= ";
        cin>>x[i];
        cout<<"y["<<i<<"]= ";
        cin>>y[i];
    }
    for(int i=0; i<n; i++){
        d[i]=y[i];
    }
    result = y[0];
    cout<<"Enter interpolation key ";
    cin>>point;
    a = x[0];
    h = x[1]-x[0];
    u = (point-a)/h;
    for(int i=0; i<n; i++){
        for(int j=n; j>i; j--){
            d[j]=d[j]-d[j-1];
        }
        ux *= (u-i)/i;
        result += ux * d[0];
    }
    cout<<" The result = "<<result;
    return 0;
}