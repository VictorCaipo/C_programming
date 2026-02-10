#include <stdio.h>
//To work with neural networks we have to use arrays and matrices
int main(void){
//Declaring vectors (one dimension array)
    double measures[2]; //Two elements
    measures[0] = 7.4;//Begin from zero
    measures[1] = 5.6;
    //Printing the vector
    for(int ii = 0; ii<2; ii++){
        printf("Value[%i] = %f \n",ii,measures[ii]);
    }
    printf("-------------------------------\n");
    //Declaring a matrix
    int data[2][3] = { //filasXcolumnas
        {1,2,3},
        {1,2,3}
    };
    int pop[2][3] = {1,2,3,1,2,3};
    //It is not necessary to fill the whole matrix
    //Printing the matrix
    for(int ii = 0 ; ii < 2; ii++ ){
        for(int jj = 0; jj < 3; jj++){
            printf("%3i",data[ii][jj]); //The 3 specife the minimum widht
            //Sirve para imprimir chevere nada mas.
        }
        printf("\n");
    }   
}