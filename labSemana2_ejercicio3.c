#include <stdio.h>
#define N 100

void reemplazarArrays(int a[], int b[]){
    int ArrayElegido = 0;
    int indiceReemplazable = 0;
    int opcion = 0;
    printf("Que array quieres reemplazar\n");
    scanf("%d",&ArrayElegido);
    while(opcion!=-1){
        if (ArrayElegido == 1){
            printf("que item quieres reemplazar\n");
            scanf("%d",&indiceReemplazable);
            a[indiceReemplazable]++;
            printf("pulse -1 si no desea continuar reemplazando\n");
            printf("pulse cualquier otra tecla si desea seguir reemplazando\n");
            scanf("%d",&opcion);
            }
    
        if(ArrayElegido == 2){
            printf("que item quieres reemplazar\n");
            scanf("%d",&indiceReemplazable);
            b[indiceReemplazable]++;
            printf("pulse -1 si no desea continuar reemplazando\n");
            printf("pulse cualquier otra tecla si desea seguir reemplazando\n");
            scanf("%d",&opcion);
        }
    }
}
void DeleteContent (int a[]){
    int indice = 0;
    printf("que item quieres disminuir");
    scanf("%d",&indice);
    if (a[indice]>1){
        a[indice]--;
    }
    else{
        printf("no se puede disminuir\n");
    }
    
}
    
int main(){
    int arr1[N] ={0};
    int arr2[N] ={0};
    int cant1=0;
    int cant2=0;
    int freq=0;
    int i;
    int opcion=0;
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
    printf("seleccione la funcion");
    printf(" 1 reemplazar un item");
    printf(" 2 eliminar un item");
    if (opcion ==  1){
        reemplazarArrays(arr1, arr2);
    }
    else if (opcion ==  2){
        DeleteContent(arr1);
    }
    return 0;

    
    
}