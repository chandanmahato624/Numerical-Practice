#include<iostream>
using namespace std;
int main(){
    int n;
    float x[100],y[100],d[100],point,a,h,u,result,p=1;
    cout<<"Enter the interpolation size :";
    cin>>n;
    for(int i=1; i<=n; i++){
        cout<<"x["<<i<<"]=";
        cin>>x[i];
        cout<<"y["<<i<<"]=";
        cin>>y[i];
    }
    cout<<"Enter the interpolation point :";
    cin>>point;
    for(int i=1; i<=n; i++){
        d[i]=y[i];
    }
    //Backward interpolation:
    a = x[n];
    h = x[2]-x[1];
    u = (point-a)/h;
    result = y[n];
    // Backward algoritham
    for(int i=1; i<=n; i++){
        for(int j=n; j>=i; j--){
            d[j]=d[j]-d[j-1];
        }
        p *= (u+i-1)/i;
        result += p * (d[n]);
    }
    cout<<"the ewsult is = "<<result;
}
