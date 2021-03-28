#include<stdio.h>
#include<conio.h>
float f(float,float);
void main(){
    int n,i;
    float x,y,h,m,k,k1,k2,k3,k4;
    printf("Enter the step length(h):");
    scanf("%f",&h);
    printf("\nEnter the intial value of X and Y:");
    scanf("%f%f",&x,&y);
    printf("\nEnter the point whose value want to see :");
    scanf("%f",&m);
    n=(m-x)/h;
    for(i=1;i<=n;i++){
        k1= h*f(x,y);
        k2= h*f(x+h/2,y+k1/2);
        k3= h*f(x+h/2,y+k2/2);
        k4= h*f(x+h,y+k3);
        k= (k1+2*k2+2*k3+k4)/6;
        y= y+k;
        x= x+h;
    }
    printf("\nThe value of y (%f)=%f",m,y);
}
float f(float x,float y){
    return(x-y);
}