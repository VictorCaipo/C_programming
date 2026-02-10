#include <stdio.h>
/*
So this is the first kind of interesting program
I am going to implement the scalar multiplication from scratch
*/
void displayMatrix(int the_matrix[2][3]){
    for(int ii = 0 ; ii < 2; ii++ ){
        for(int jj = 0; jj < 3; jj++){
            printf("%3i",the_matrix[ii][jj]);
        }
        printf("\n");
    } 
}

void scalar_multiplication(int the_matrix[2][3], int scalar){
    for(int ii = 0 ; ii < 2; ii++ ){
        for(int jj = 0; jj < 3; jj++){
            the_matrix[ii][jj] *= scalar;
        }
    } 
}

int main(void){
    int matrix[2][3] = {1,2,3,1,2,3};
    printf("Original matrix: \n");
    displayMatrix(matrix);
    printf("------------------------------\n");
    scalar_multiplication(matrix,3);
    displayMatrix(matrix);
}