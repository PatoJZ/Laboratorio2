#include <stdio.h>
#define N 100
void fusionararrays(int a[], int b[],int cant_a, int cant_b){
    int limit = 0;
    int c[N] = {0};
    for(int i=0;i<cant_a;i++){
        a[i]=c[i];
        limit++;
    }
    for(int i=limit;i<cant_b + limit;i++){
        b[i]=c[i];
        limit++;
        if (limit > N){
            break;
        }
    }
    for(int i=0;i<limit;i++){
        printf("array nuevo\n");
        printf("el indice %d contiene el elemento %d\n",i,c[i]);
    }
}

int main(){
    int arr1[N] ={0};
    int arr2[N] ={0};
    int cant1=0;
    int cant2=0;
    int freq=0;
    int i;
    while (cant1 <= 0){
        printf("cuantos items tienes jugador 1:");
        scanf("%d",&cant1);
    }
    for (i = 0; i < cant1; i++){
        printf("cuantos item hay del item %d\n ", i);
        scanf("%d", &arr1[i]);
    }
    while (cant2 <= 0){
        printf("cuantos items tienes jugador 2:");
        scanf("%d",&cant2);
    }
    for (i = 0; i < cant2; i++){
        printf("cuantos item hay del item %d\n ", i);
        scanf("%d", &arr2[i]);
    }
    fusionararrays(arr1, arr2, cant1, cant2);
    return 0;

    
    
}