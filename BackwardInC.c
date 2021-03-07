#include<stdio.h>
#include<conio.h>
int main(){
    int n,i,j;
    float x[100],y[100],z[100],a,h,u,point,result,k;
    printf("Enter the Interpolation size :");
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
        printf("y[%d]=",i);
        scanf("%f",&y[i]);
    }
    printf("Enter the interpolation point :");
    scanf("%f",&point);
    //Backward interpolation:
    a = x[n];
    h = x[2]-x[1];
    u = (point-a)/h;
    for(i=1; i<=n; i++){
        z[i]=y[i];
    }
    result = y[n];
    k = 1;
    //Backward  interpolation algoritham
    for(i=1; i<n; i++){
        for(j=n; j>=i; j--){
            z[j]=z[j]-z[j-1];
        }
        k *= (u+i-1)/i;
        result += k*z[n];
    }
    printf("The result = %f",result);
    
}
