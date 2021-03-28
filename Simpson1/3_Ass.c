#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int n,i;
    float y[25],a,b,m,h,so=0,se=0,s;
    printf("Enter the number of interval :");
    scanf("%d",&n);
    printf("\nEnter the value for A and B :");
    scanf("%f%f",&a,&b);
    h=(b-a)/n;
    for(i=0; i<=n; i++){
        m=a+i*h;
        y[i]=pow(m,3);
    }
    for(i=1;i<=n-1;i=i+2)
    so+=y[i];
    for(i=2;i<=n-2;i=i+2)
    se+=y[i];
    s=(y[0]+y[n]+4*so+2*se)*h/3;
    printf("\nThe value for the integration :%f",s);
}