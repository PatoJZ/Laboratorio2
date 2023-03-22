#include <stdio.h>
#include <string.h>

#define MAX_PACIENTES 100
#define DIAS_SEMANA 7
#define TEMPERATURA_FIEBRE 37.5

int main()
{
    float temperaturas[MAX_PACIENTES][DIAS_SEMANA];
    char nombres[MAX_PACIENTES][50];
    char habitaciones[MAX_PACIENTES][10];
    int edades[MAX_PACIENTES];
    int n;

    printf("Ingrese la cantidad de pacientes (maximo %d): ", MAX_PACIENTES);
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("Ingrese el nombre del paciente %d: ", i+1);
        scanf("%s", nombres[i]);

        printf("Ingrese el numero de habitacion del paciente %d: ", i+1);
        scanf("%s", habitaciones[i]);

        printf("Ingrese la edad del paciente %d: ", i+1);
        scanf("%d", &edades[i]);

        printf("Ingrese las temperaturas del paciente %d para los ultimos %d dias:\n", i+1, DIAS_SEMANA);
        for (int j = 0; j < DIAS_SEMANA; j++) {
            printf("Dia %d: ", j+1);
            scanf("%f", &temperaturas[i][j]);
        }
    }

    printf("\nTemperaturas promedio de los pacientes:\n");
    for (int i = 0; i < n; i++) {
        float sum = 0;
        for (int j = 0; j < DIAS_SEMANA; j++) {
            sum += temperaturas[i][j];
        }
        float promedio = sum / DIAS_SEMANA;
        printf("%s - Habitacion %s: %.2f°C\n", nombres[i], habitaciones[i], promedio);
    }

    printf("\nPacientes con fiebre durante tres o mas dias consecutivos:\n");
    for (int i = 0; i < n; i++) {
        int consecutivos = 0;
        for (int j = 0; j < DIAS_SEMANA; j++) {
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
