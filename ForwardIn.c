#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,j;
    float x[100],y[100],z[100],a,h,u,point,result,k;
    printf("Enter the Interpolation size :");
    scanf("%d",&n);
    for(i=0; i<n; i++){
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
        printf("y[%d]=",i);
        scanf("%f",&y[i]);
    }
    printf("Enter the interpolation point :");
    scanf("%f",&point);
    //Forward interpolation:
    a = x[0];
    h = x[1]-x[0];
    u = (point-a)/h;
    for(i=0; i<n; i++){
        z[i]=y[i];
    }
    result = y[0];
    k = 1;
    //Forward interpolation algoritham
    for(i=1; i<n; i++){
        for(j=0; j<n-i; j++){
            z[j]=z[j+1]-z[j];
        }
        k = (u-i+1)/i;
        result += k*z[0];
    }
    printf("The result = %f",result);
}
