#include <stdio.h>
#include <math.h>

struct punto{
    double x;
    double y;
    double distancia;
};
//Funcion de salida y parametro con structura
//Debeos declarar cual sera la estructura de salida
struct punto operacion_distancia(struct punto p){
    p.distancia = sqrt(p.x *p.x + p.y * p.y);
    return p;
} 

int main(void){
    struct punto coordenada = {2.3,3.4,0.0};
    coordenada = operacion_distancia(coordenada);
    printf("%f\n",coordenada.distancia);
}
//Estamos sobreescribiendo el struct, porque es del mismo tipo y porque se encuentra fuera de la funcion por lo que si es valido

