#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define N 100

void fusionararrays(int a[], int b[], int itemsLimites[], int cant_a, int cant_b){
    int c[N] = {0};
    int cant_mayor = 0;
    int i;

    if (cant_a > cant_b){
        cant_mayor = cant_a;
    }
    if (cant_b > cant_a){
        cant_mayor = cant_b;
    }
    for(i=0;i<cant_mayor;i++){
        if (itemsLimites[i]<= a[i] + b[i]){
            c[i] = itemsLimites[i];
            printf("\nlimite excedido en el item %d que son %d\n", i, itemsLimites[i]);
        }else{
             c[i] = a[i]+ b[i];
        }
    }
    printf("\n--Inventario nuevo--\n");
    for(i=0;i<cant_mayor;i++){
        printf("el Item %d contiene %d elementos\n",i,c[i]);
    }
}

int main(){
    srand(time(NULL));

    int arr1[N] = {0};
    int arr2[N] = {0};
    int arr3[N] = {0};
    int cant1=0;
    int cant2=0;
    int i;
    for (i=0;i<N; i++){
        arr3[i] = rand()%20+1;
    }
    while (cant1 <= 0){
        printf("\ncuantos items tienes jugador 1:");
        scanf("%d",&cant1);
    }
    for (i = 0; i < cant1; i++){
        printf("cuantos item hay del item [%d] ", i);
        scanf("%d", &arr1[i]);
    }
    while (cant2 <= 0){
        printf("\ncuantos items tienes jugador 2: ");
        scanf("%d",&cant2);
    }
    for (i = 0; i < cant2; i++){
        printf("cuantos item hay del item [%d]: ", i);
        scanf("%d", &arr2[i]);
    }
    fusionararrays(arr1, arr2, arr3, cant1, cant2);
    return 0; 
    
}