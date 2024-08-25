#include <stdio.h>
#include <stdlib.h>
#include <string.h> 
/*se pide un registro con los siguientes datos:
nombre
nro de dpto(1=con 2=san pedro 3=itapua 4=)
codigo de profesión*/
int validarprofesión(int profesion){
    while(profesion<1 || profesion>4){
        printf("error, el codigo de profesión debe ser mayor que 0 menor que 5");
        scanf("%d", &profesion);
    }
    return(profesion);
}

int dpto(int dpto){
    while(dpto<1 || dpto>5){
        printf("error, el codigo de dpto debe ser mayor que 0 menor que 6");
        scanf("%d", &dpto);
    }
    return(dpto);
}

 

int main(){
    int i;
    int j;
    int cuadro[5][6];
    for(i=0;i<5;i++){
        for(j=1;j<6;j++){
            cuadro[i][j]=0;
        }
    }
    char nombre[20];
    printf("introduzca el nombre");
    scanf("%s", nombre);
    int ND;
    int CP;

    while(strcmp(nombre, " ")!=0){
        printf("escriba el nro de dpto");
        scanf("%d", &ND);
        ND = dpto(ND);
        ND=ND-1;
        printf("escriba el Codigo de Profesión");
        scanf("%d", &CP);
        CP = validarprofesión(CP);
        CP=CP-1;
        cuadro[ND][CP]=cuadro[ND][CP]+1;
        cuadro[ND][5]= cuadro[ND][5]+1;
        cuadro[4][CP]=cuadro[6][CP]+1;
        cuadro[4][5]=cuadro[4][5]+1;
        printf("introduzca el nombre");
        scanf("%s", nombre);
    }

    for(i=0;i<5;i++){
        printf("|");
        for(j=0;j<6;j++){
            printf("%d", cuadro[i][j]);
        }
        printf("|");
        printf("\n");
    }
    return 0;
}