/*
Te preguntaras porque tenemos que declarar esta libreria, la respuesta es que no tenemos que, pero
muchos dummies la declaran porque sirve para interactuar con el sistema operativo y permitirnos
ver si nuestro codigo es correcto. la parte final de <stdio> significa input output
por la misma razon mencionada
*/
#include <stdio.h>

/*
La siguiente pregunta es porque siempre en cualquier programa de C tenemos que declarar una función
llamada main, esto es porque el compilador (otro programa) esta programado de tal manera que siempre
deba ejecutar la función main. A parte de eso es una función como cualquier otra que retorna un
int, llamada main y el void significa que no hay parametros
*/
int main(void){
/*
Es correcto y estandar declarar el return 0 al final. ¿porque? porque nuestra función main no deja de ser una
función y esta indicada que debe retornar algun valor me parece que el compilador cuando dectecta un error
el return es diferente de cero de esta manera sabemos que existe un error.
*/
    return 0;
}
/*
Suficiente introducción ahora vamos a lo importante no tocare cosas basicas como variables basicas, operadores
o bucles e iteraciones simples porque, las considero muy basicas, pardon.
*/