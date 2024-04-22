#include <stdio.h>
#include <stdlib.h>
#define N 5
#define M 7
int main(){
    int i,j,c=0;
    int mt[N][M], *pmt;
    pmt= &mt[N][M];
    for(i = 0;i<N; i++)
    {
        for(j = 0;j<M; j++)
        {
            *(pmt + i * M +j)=1+rand()%100; //notacion punteros: el contenido de pmt en su posicion le vas a sumar i * M (me va a llevar a las filas: fila 0 fila 1..) y + j para que se mueva columna a columna 
            printf("%d ",*(pmt + i * M +j));

        }
    printf("\n");

    }
    return 0;
}