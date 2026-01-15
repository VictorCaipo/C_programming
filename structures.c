#include <stdio.h>
//Structres: Sirven para agrupar elementos relacionados
struct datos{ //Definición de una estructura
    int edad;
    double altura;
};

int main(void){
    struct datos victor;//Creación de una variable tipo estructura llamada victor
    victor.edad = 25;
    victor.altura = 1.69;    
    printf("%i\n",victor.edad);
    printf("%f\n",victor.altura);
}
/*
Es un nuevo tipo de dato que ayuda a definir variables que estan relacionadas
se parace un poco a la POO que usan programas como JAVA y Matlab
*/