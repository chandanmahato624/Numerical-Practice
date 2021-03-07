#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
     cout<<"Enter number of size :";
    cin>>n;
    float x[100],y[100],d[100],point,a,u,h,result;
    for(int i=0; i<n; i++){
        cout<<"x["<<i<<"]=";
        cin>>x[i];
        cout<<"y["<<i<<"]=";
        cin>>y[i];
    }
    for(int i=0; i<n; i++){
        d[i]=y[i];
    }
    result = y[n/2];
    cout<<"Enter the interpolation point :";
    cin>>point;
    a = x[n/2];
    h = x[1]-x[0];
    u = (point - a)/h;

    for(int i=n-1; i>0; i--){
        for(int j=0;j<n-i-1; j++ ){
            d[j]=d[j+1]-d[j];
        }
        if(i%2==0){
            
        }
    }
}