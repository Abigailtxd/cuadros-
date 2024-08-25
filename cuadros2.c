#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
int verifila(int num){
    while(num<1 || num>2){
        printf("error, introduzca de vuelta el valor (recuerda que debe ser 1 o 2)");
        scanf("%d", &num);
    }
    return(num);
}
int verifsueldo(int num){
    while(num<1){
        printf("error, introduzca de vuelta el valor (debe ser positivo)");
        scanf("%d", &num);
    }
    return(num);
}


int main(){
    int sueldos[3][6];
    int i;
    int j;
    for(i=0;i<3;i++){
        for(j=0;j<6;j++){
            sueldos[i][j]=0;
        }
    }
    int empleado;
    printf("introduzca el codigo de empleado (recuerda que debe estar entre 1 y 9999)");
    scanf("%d", &empleado);
    while(empleado == 9999 || empleado<1){
        printf("error, introduzca de vuelta");
        scanf("%d", &empleado);
    }
    int fila;
    int sueldo;
    int columna;
    printf("introduzca el codigo de sexo (1=masculino, 2=femenino)");
    scanf("%d",&fila);
    fila = verifila(fila);
    fila=fila-1;
    printf("introduzca el valor del sueldo");
    scanf("%d", &sueldo);
   
    while(empleado != 9999){
        if(sueldo<=200){
            columna=0;
        }
        if(sueldo>200 && sueldo<=400){
            columna=1;
        }
        if(sueldo>400 && sueldo<=600){
            columna=2;
        }
        if(sueldo>600 && sueldo<=800){
            columna=3;
        }
        if(sueldo>800){
            columna=4;
        }
        sueldos[fila][columna]=(sueldos[fila][columna])+1;
        sueldos[fila][5]=sueldos[fila][5]+1;
        sueldos[2][columna]=(sueldos[2][columna])+1;
        sueldos[2][5]=sueldos[2][5]+1;

        for(i=0;i<3;i++){
        printf("|");
        for(j=0;j<6;j++){
            printf("%d   ", sueldos[i][j]);
        }
        printf("|");
        printf("\n");
        }

        
        printf("introduzca el codigo de sexo (1=masculino, 2=femenino)");
        scanf("%d",&fila);
        fila = verifila(fila);
        printf("introduzca el valor del sueldo");
        scanf("%d", &sueldo);
        printf("introduzca el codigo de empleado (recuerda que debe estar entre 1 y 9999)");
        scanf("%d", &empleado);

    }

    for(i=0;i<3;i++){
        printf("|");
        for(j=0;j<6;j++){
            printf("%d   ", sueldos[i][j]);
        }
        printf("|");
        printf("\n");
    }

    
}