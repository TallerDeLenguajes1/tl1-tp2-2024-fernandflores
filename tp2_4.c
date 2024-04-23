#include <stdio.h>
#include <stdlib.h>

char tipos[6][10]={"Intel","AMD","Celeron","Athlon","Core","Pentium"};
struct 
{
    int velocidad;
    int anio;
    char *tipo_cpu;
    int nucleos;
}typedef estructura;

void mostrarComputadora(estructura estruc[]);
void masVieja(estructura estruc[]);
void masRapida(estructura estruc[]);
int main (){
    estructura computadora[5];
    /*estructura computadora[5]={
        {2,2018,tipos[0],8},
        {3,2019,tipos[2],7},
        {1,2020,tipos[1],4},
        {2,2017,tipos[5],7},
        {2,2023,tipos[3],2},
    };*/
    int cpu;
    for (int i = 0; i < 5; i++)
    {          
        do
        {   
            printf("ingrese año 1 a 3\n");
            scanf("%d", &computadora[i].anio);
            
        } while (!(computadora[i].anio<=2023 && computadora[i].anio>=2015));
        do
        {   
            printf("ingrese velocidad 1 a 3\n");
            scanf("%d", &computadora[i].velocidad);
            
        } while (!(computadora[i].velocidad<=3 && computadora[i].velocidad>=1));
        
        do
        {   
            printf("ingrese cantidad de nucleos\n");
            scanf("%d", &computadora[i].nucleos);
            
        } while (!(computadora[i].nucleos<=8 && computadora[i].nucleos>=1));
        printf("elija su procesador: \n");
        do{
            computadora[i].tipo_cpu=tipos[0]; // apunta a toda la primera fila del arreglo
            for (int j = 0; j < 6; j++)
            {
                printf("%d: %s\n", j+1, computadora[i].tipo_cpu);
                computadora[i].tipo_cpu+=10; //va a la siguiente fila +10 para que saltee las columnas
            }
            scanf("%d",&cpu);
            computadora[i].tipo_cpu=tipos[cpu]; // apunta al cpu seleccionado
        }while (cpu<1 || cpu>=7);
    }
        /*do tambien funciona
        {   
            printf("elija su procesador\n");
            for (int j = 0; j < 6; j++)
            {
                printf("%d: %s \n", j+1, tipos[j]); //al ser un arreglo de cadenas c ya interpreta que [j] se tratara sobre una fila
            }
            scanf("%d",&cpu);
            computadora[i].tipo_cpu=tipos[cpu];
        } while (cpu<1 || cpu>=7);
        */
        
    
    mostrarComputadora(computadora);
    masVieja(computadora);
    masRapida(computadora);

    return 0;
}
void mostrarComputadora(estructura estruc[]){
    for (int i = 0; i < 5; i++)
    {   
        printf("------------computadora %d ------------------\n\n", i+1);
        printf("procesador: %s\n", estruc[i].tipo_cpu); //al ser un puntero apuntando a una arreglo de cadenas no hace falta el * y al ser una cadena entera la que imprimo uso %s y c ya sabe que debe imprimir toda la cadena, si ingreso "%c", *estruc[i].tipo_cpu imprime la primera letra
        printf("año: %d\n", estruc[i].anio);
        printf("cantidad de nucleos: %d\n",estruc[i].nucleos);
        printf("velocidad: %d\n", estruc[i].velocidad);
        
    }   
}
void masVieja(estructura estruc[]){
    int aux=estruc[0].anio, direccion;
    for (int i = 0; i < 5; i++)
    {
        if (estruc[i].anio<=aux)
        {
            aux=estruc[i].anio;
            direccion=i;
        }
    }
     printf("------------computadora mas vieja ------------------\n\n");
        printf("procesador: %s\n", estruc[direccion].tipo_cpu); 
        printf("año: %d\n", estruc[direccion].anio);
        printf("cantidad de nucleos: %d\n",estruc[direccion].nucleos);
        printf("velocidad: %d\n", estruc[direccion].velocidad);
}
void masRapida(estructura estruc[]){
    int aux=estruc[0].velocidad, direccion;
    for (int i = 0; i < 5; i++)
    {
        if (estruc[i].velocidad>=aux)
        {
            aux=estruc[i].velocidad;
            direccion=i;
        }
    }
     printf("------------computadora mas veloz ------------------\n\n");
        printf("procesador: %s\n", estruc[direccion].tipo_cpu); 
        printf("año: %d\n", estruc[direccion].anio);
        printf("cantidad de nucleos: %d\n",estruc[direccion].nucleos);
        printf("velocidad: %d\n", estruc[direccion].velocidad);
}