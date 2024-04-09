#include <stdio.h>
#include <stdlib.h>
#define N 20

int main(){
    int i;
    double vt[N], *pvt;
    pvt=vt;
    for (i = 0; i < N; i++)
    {
        pvt[i]=1+rand()%100;
        printf("%f  ", pvt[i]);
    }
    
    return 0;
}