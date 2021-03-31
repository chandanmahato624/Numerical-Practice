#include<stdio.h>
#include<conio.h>
#include<math.h>
float f(float x);
void main(){
    float a,b,x;
    printf("Enter the value of A and B :\n");
    scanf("%f%f",&a,&b);
    while(fabs(b-a)>0.0001){
        x=b-((b-a)/(f(b)-f(a)))*f(b);
        if(f(b)*f(x)<0){
            b=x;
        }else{
            a=x;
        }
    }
    printf("Approximatly root= %f",x);
}
float f(float x){
    return(x*x*x-x-1);
}