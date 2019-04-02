#include <stdio.h>
#include <math.h> 


int main()
{
    int N=50;
    int k; // Loop Counter
    float x1=0,x2=2 ;
    float dx=(x2-x1) / N ;
    
    float sum=0;
    for (k=1;k<N;k++) {
        float x;
        x = x1 + k*dx ;
        sum = sum + x;
    }
    printf (" %f", sum);
    printf (" %d\n", N);//  hello there
}