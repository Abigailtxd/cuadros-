#include <stdio.h>
#include <stdlib.h>
int verifestado(num){
    if(num>4 || num<1){
        printf("introduzca otra vez el valor, nro invalido");
        scanf("%d", &num);
        return(verifestado);
    }
    return(num);
}

int verifsexo(num){
    if(num>2 || num<1){
        printf("introduzca otra vez el valor, nro invalido");
        scanf("%d", &num);
        return(verifsexo);
    }
    return(num);
}

int main(){
    int deportes[10][5];
    for(i=0;i<10;i++){
        for(j=0;j<5;j++){
            deportes[i][j]=0;
        }
    }
    int socio;
    printf("introduzca el nombre del socio");
    scanf("%s", socio);
    int sexo;
    printf("introduzca el sexo del socio (1 para masculino, 2 para femenino)");
    scanf("%d", &sexo);
    sexo = verifsexo(sexo);
    int estadocivil;
    printf("introduzca el estado civil del socio, 1=cas, 2=viu, 3=sol, 4=div");
    scanf("%d", &estadocivil);
    estadocivil=verifestado(estadocivil);
    int deporte;
    printf("introduzca el deporte por codigo");
    scanf("%d", &deporte);
    int fila;
    int columna;
    while(strcmp(nombre, " ")!=0){
        fila=deporte-1;
        if(sexo==1){
            if(estadocivil==3){
                columna=0;
            }else{
                columna=1;
            }
        }else if(sexo==2){
            if(estadocivil==3){
                columna=2;
            }else{
                columna=3;
            }
        }
        deportes[fila][columna]=deportes[fila][columna]+1;
        deportes[fila][4]=deportes[fila][4]+1;
        deportes[9][columna]=deportes[9][columna]+1;
        deportes[9][4]=deportes[9][4]+1;
        printf("introduzca el nombre del socio");
        scanf("%s", socio);
        int sexo;
        printf("introduzca el sexo del socio (1 para masculino, 2 para femenino)");
        scanf("%d", &sexo);
        sexo = verifsexo(sexo);
        int estadocivil;
        printf("introduzca el estado civil del socio, 1=cas, 2=viu, 3=sol, 4=div");
        scanf("%d", &estadocivil);
        estadocivil=verifestado(estadocivil);
        int deporte;
        printf("introduzca el deporte por codigo");
        scanf("%d", &deporte);
    }
    for(i=0;i<10;i++){
        printf("|");
        for(j=0;j<5;j++){
            printf("%d", deportes[i][j]);
        }
        printf("|");
        printf("\n");
    }

}
