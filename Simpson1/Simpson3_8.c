#include<stdio.h>
#include<conio.h>
#include<math.h>
void main(){
    int n,i,a,b;
    float y[25],ar,br,value,s1=0,s2=0,s3=0,h;
    printf("Enter the number of intervals:");
    scanf("%d",&n);
    printf("\nEnter the lower and upper bound:");
    scanf("%d%d",&a,&b);
    ar= 3.145*a/180;
    br= 3.145*b/180;
    h= (br-ar)/n;
    for(i=0;i<=n;i++)
    y[i]=sin(a+i*h);
    for(i=1;i<=n-2;i=i+3)
    s1+= y[i];
    for(i=2;i<=n-1;i=i+3)
    s2+= y[i];
    for(i=3;i<=n-3;i=i+3)
    s3+=y[i];
    value=(3*s1+3*s2+2*s3+y[0]+y[n]*3*h/8);
    printf("\nThe value of integration :%f",value);
}