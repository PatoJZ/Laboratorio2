#include <stdio.h>
#define N 100

int main(){
    int arr[N] ={0};
    int cant=0;
    int freq=0;
    int i;
    while (cant <= 0){
        printf("cuantos items tienes");
        scanf("%d",&cant);
    }
    for (i = 0; i < cant; i++){
        printf("cuantos item hay del item %d", i);
        scanf("%d", &arr[i]);
    }
    for(i=0 ;i < cant; i++){
        printf("el item %d hay %d", i, arr[i]);
    }
    
    
    
}