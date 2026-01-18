#include <stdio.h>

int main(void){
    struct date{
        int dia;
        int mes;
        int year;
    };
    struct date today, *pointer_today;
    /*We are defining a structure called today from the tipe date,
    and pointer called *pointer_today that save the direccion of any
    structure of the type date.
    */
    pointer_today = &today;
    /*We are saving the direction of the structure today into pointer_today
    But inside the structure there are many variables, so the pointer only save
    the first direction, in this case dia.
    */
    (*pointer_today).dia = 18;
    (*pointer_today).mes = 01;
    (*pointer_today).year = 2026;
    /*
    We are writing "Access to the structure that point out *pointer_today"
    (today). So is the same that writting today.dia = 18
    (*pointer_today).dia = 18 can be replaced by pointer_today->month = 18
    */
    printf("%i / %i / %i",pointer_today->dia,pointer_today->mes,pointer_today->year);
    return 0;
}