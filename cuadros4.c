#include <stdlib.h>
#include <stdio.h>
#include <string.h>

int verifsuc(num){
    if(num>4 || num<1){
        printf("introduzca otra vez el valor, nro invalido");
        scanf("%d", &num);
        return(verifsuc);
    }
    return(num);
}
int verifpago(num){
    if(num>3 || num<1){
        printf("introduzca otra vez el valor, nro invalido");
        scanf("%d", &num);
        return(verifpago);
    }
    return(num);
}
int verif(num){
    if(num<1){
        printf("introduzca otra vez el valor, nro invalido");
        scanf("%d", &num);
        return(verif);
    }
    return(num);
}

int main(){
    int sucursales[5][4];
    for(i=0;i<5;i++){
        for(j=0;j<4;j++){
            sucursales[i][j]=0;
        }
    }
    int sucursal;
    printf("introduzca el nro de sucursal, 1=centro, 2=villamorra, 3=sajonia; 4=bo jara");
    scanf("%d", &sucursal);
    sucursal=verifsuc(sucursal);
    int formadepago;
    printf("introduzca la forma de pago");
    scanf("%d", &formadepago);
    formadepago=verifpago(formadepago);
    int monto;
    printf("introduzca el  monto de la venta");
    scanf("%d", &monto);
    monto = verif(monto);
    printf("introduzca el  nro de factura");
    scanf("%d", &factura);
    factura = verif(factura);
    
    while(factura != 9999){
        sucursales[sucursal-1][formadepago-1]=sucursales[sucursal-1][formadepago-1]+1;
        sucursales[sucursal-1][3]=  sUcursales[sucursal-1][3]+1;
        sucursales[4][formadepago-1]=sucursales[4][formadepago-1]+1;
        sucursales[4][3]=sucursales[4][3];
        printf("introduzca el nro de sucursal, 1=centro, 2=villamorra, 3=sajonia; 4=bo jara");
        scanf("%d", &sucursal);
        sucursal=verifsuc(sucursal);
        int formadepago;
        printf("introduzca la forma de pago");
        scanf("%d", &formadepago);
        formadepago=verifpago(formadepago);
        int monto;
        printf("introduzca el  monto de la venta");
        scanf("%d", &monto);
        monto = verif(monto);
        printf("introduzca el  nro de factura");
        scanf("%d", &factura);
        factura = verif(factura);
    }


    for(i=0;i<5;i++){
        printf("|");
        for(j=0;j<4;j++){
            printf("%d", sucursales[i][j]);
        }
        printf("|");
        printf("\n");
    }
    
    
}