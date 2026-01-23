#include <stdio.h> //To interact with the operating system
/*
The purpose /ˈpɜːr.pəs/ is to learn how work a function that contain pointers
*/
int main(void){
    struct pointer_structure{
        int *pointer1;//We are just defining two pointers of type int inside the structure
        int *pointer2;    
    };

    struct pointer_structure var;//We are just defining a new variable called "var" of type struct pointer_structure
    int i1 = 100;//Just defining two integers
    int i2;

    var.pointer1 = &i1;//Assigning the direccion of i1 to the pointer "pointer1" that is inside the structure var
    var.pointer2 = &i2;
    *var.pointer2 = -9;//Assigning the value of -9 to the value that is pointed out by the pointer2

    //Just printing some shit
    printf("i1: %i pointer1: %i\n",i1,*var.pointer1);
    printf("i2: %i pointer2: %i\n",i2,*var.pointer2);

    return 0;
}