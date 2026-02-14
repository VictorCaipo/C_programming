#include <stdio.h> /*A way to import contents of one file into this source file*/

/*The OS always run the main function*/
int main(int argc, char *argv[]){
    int distance = 100;
    printf("You are %d miles away.\n",distance);/*The prinf funciton can take multiple arguments*/
    return 0;
}
/*gcc .\Introduction.c -o Introduction*/