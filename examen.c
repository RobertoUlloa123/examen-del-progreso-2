#include <stdio.h>
#include <time.h>
#define alumno 23
#define progreso 3
int main()
{
    float promedio;
    int nota;
    int i, j;
    float nota[i][j];
    int rand();
     for (i = 0; i < alumno; i++)
    {
        int suma = 0, may = 0, max = 0;
        for (j = 0; j < progreso; j++)
        {
            notas[i][j] = rand() % 11;
            printf("Las notas del estudiante %d en el %d es: %d ", i + 1, j + 1, notas[i][j]);
            printf("\n");
            suma = notas[i][j] + suma;
            promedio = suma / 3;
        }
         printf("\n");
         printf("El promedio del estudiante %d es: %d",i+1,promedio);
         printf("\n");
    }
    
    
    return 0;
}
