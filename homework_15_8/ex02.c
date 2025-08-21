#include <stdio.h>
int main(){
        int matrix[3][3] = {1, 0, -1,
                        -1, 2, 3,
                        2, 4, 5};
        int r, c;

        int transpose[3][3];

        for(r=0; r<3; r++){
           for(c=0; c<3; c++){
                transpose[r][c] = matrix[c][r];
           } 
        }

        for(r=0; r<3; r++){
            for(c=0; c<3; c++){
                printf("%5d", transpose[r][c]);
            }
            printf("\n");
        }
}