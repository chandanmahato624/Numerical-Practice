#include<stdio.h>
#include<conio.h>
int main(){
    int n;
    float x[100],y[100],xp,p,yp=0;
    printf("Enter the size :");
    scanf("%d",&n);
    for(int i=1; i<=n; i++){
        printf("x[%d]=",i);
        scanf("%f",&x[i]);
        printf("y[%d]=",i);
        scanf("%f",&y[i]);
    }
    printf("Enter interpolation point :");
    scanf("%f",&xp);
    for(int i=1; i<=n; i++){
        p=1;
        for(int j=1; j<=n; j++){
            if(i!=j){
                p *= (xp-x[j])/(x[i]-x[j]);
            }
        }
        yp += p*y[i];
    }
    printf("Interpolation value at %3f is %3f",xp,yp);
    return 0;
}
