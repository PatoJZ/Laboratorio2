#include <stdio.h>
#include <string.h>

#define MAX_PACIENTES 100
#define DIAS_SEMANA 7
#define TEMPERATURA_FIEBRE 37.5

float Conversion_Fahrenheit(float celsius){
    return (float)((celsius * 9.0 / 5.0) + 32.0);
}

int main()
{
    float temperaturas[MAX_PACIENTES][DIAS_SEMANA];
    char nombres[MAX_PACIENTES][50] = {{"N/A"}};
    char habitaciones[MAX_PACIENTES][10] = {{"N/A"}};
    int edades[MAX_PACIENTES];
    int n;
    int mostrarEnFahrenheit;
    int opcionIngreso;
    int i;
    int j;
    printf("Ingrese la cantidad de pacientes (maximo %d): \n", MAX_PACIENTES);
    scanf("%d", &n);

    for ( i = 0; i < n; i++){
        printf("Pulse [1] para ingresar Nombre\n");
        printf("Pulse [2] para ingresar habitacion y edad\n");
        scanf("%d",&opcionIngreso);

        if (opcionIngreso == 1){
            printf("Ingrese el nombre del paciente %d: ", i+1);
            scanf("%s", nombres[i]);
        }else if(opcionIngreso == 2){
            printf("Ingrese el numero de habitacion del paciente %d: ", i+1);
            scanf("%s", habitaciones[i]);
            printf("Ingrese la edad del paciente %d: ", i+1);
            scanf("%d", &edades[i]);
        }
        printf("Ingrese las temperaturas del paciente %d para los ultimos %d dias:\n", i+1, DIAS_SEMANA);
        for ( j = 0; j < DIAS_SEMANA; j++){
            printf("Dia %d: ", j+1);
            scanf("%f", &temperaturas[i][j]);
        }
    }

    printf("Desea ver las temperaturas en Fahrenheit? (1 = Si, 0 = No): ");
    scanf("%d", &mostrarEnFahrenheit);

    printf("\nTemperaturas promedio de los pacientes:\n");
    for ( i = 0; i < n; i++){
        float sum = 0;
        for ( j = 0; j < DIAS_SEMANA; j++){
            sum += temperaturas[i][j];
        }
        float promedio = sum / DIAS_SEMANA;
        if (mostrarEnFahrenheit == 1){
            promedio = Conversion_Fahrenheit(promedio);
            printf("%s - Habitacion %s: %.2f grados Fahrenheit\n", nombres[i], habitaciones[i], promedio);
        } else {
            printf("%s - Habitacion %s: %.2f grados Celsius\n", nombres[i], habitaciones[i], promedio);
        }
    }

    printf("\nPacientes con fiebre durante tres o mas dias consecutivos:\n");
    for ( i = 0; i < n; i++) {
        int consecutivos = 0;
        for ( j = 0; j < DIAS_SEMANA; j++) {
            if (temperaturas[i][j] >= TEMPERATURA_FIEBRE) {
                consecutivos++;
                if (consecutivos >= 3) {
                    printf("%s - Habitacion %s\n", nombres[i], habitaciones[i]);
                    break;
                }
            } else {
                consecutivos = 0;
            }
        }
    }

    return 0;
}
