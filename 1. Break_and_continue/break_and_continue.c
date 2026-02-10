#include <stdio.h>
/*
Este concepto nuevo concepto es interesante y es utilizado en bucles usualmente, probablemente ya sabes que hace
un bucle (repite el mismo codigo segun una condición) pues el break y el continue se usan para salir
de un bucle sin necesidad de que se cumpla la condición, nada mas.
*/
int main(void){//Función principal
    //Break
    for(int ii = 1; ii<=5; ii++){
        printf("Iteracion numero: %i\n",ii);
        if(ii == 4){
            break;
        }
        printf("What are you expecting for?\n");
    }
/*
What's going on?
El bucle imprime numeros del 1 al 5, pero si el numero es 4 entonces sale del bucle, facil. entonces para que sirve 
el printf("What are you ...")? solo para que te des cuenta que una vez se ejecuta el break 
todo el codigo despues de break no sera ejecutado al menos no dentro del bucle.

Ahora que sucede si tenemos 2 bucles (un bucle dentro de otro) ? pues si usamos el break en el bucle que
esta dentro entonces solo salimos de ese bucle pero si lo usamos en el bucle principal salimos de todo
el bucle. y ya :(.
*/
    printf("------------------------\n");
    //Continue
    for(int ii = 1; ii<=5; ii++){
        printf("Iteracion numero: %i\n",ii);
        if(ii == 4){
            continue;
        }
        printf("What are you expecting for?\n");
    }
    /*
    Aqui, No salimos del bucle, pero el codigo despues del continue se salta el codigo que sigue (el printf en este
     caso) y continua con la siguiente iteración.
    */
    return 0;
}
