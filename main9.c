#include <stdio.h>
#include <stdlib.h>

/*Desarrolla un programa que solicite la carga de un n�mero al usuario.
A continuaci�n, deber� pedir las notas de ese n�mero de alumnos, y mostrar por pantalla
el n�mero de alumnos aprobados y suspensos.*/

int main()
{
    int n, contador_aprobados=0, contador_suspensos=0;
    float nota;

    printf("Introduce el n�mero de alumnos\n");
    scanf("%d",&n);

    for (int i=1; i<=n; i++){
        printf("Introduce la nota del alumno %d\n",i);
        scanf("%f",&nota);

        if(nota>=5){
            contador_aprobados++;
        }
        else{
            contador_suspensos++;
        }
    }

    printf("El n�mero de alumnos aprobados es: %d y el de alumnos suspensos es: %d\n",contador_aprobados,contador_suspensos);
}
