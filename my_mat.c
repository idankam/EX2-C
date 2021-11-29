#ifndef FUNCS
#define FUNCS
#include <stdio.h>
#include <math.h>
#include <string.h>
#include "my_mat.h"
#endif


int set_mat(int mat[ROWS][COLUMNS])
{
    int i,j;
    for(i=0; i<ROWS; i++){
        for(j=0; j<COLUMNS; j++){
            scanf("%d", &mat[i][j]);
        }
    }
    
    return 1;
}

int print_mat(int mat[ROWS][COLUMNS])
{
    int i,j;
    for(i=0; i<ROWS; i++){
            for(j=0; j<COLUMNS; j++){
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    return 1;
}

int is_there_path (int mat[ROWS][COLUMNS], int i, int j)
{
  if (mat[i][j] > 0)
    {
      printf ("True\n");
    }
  else
    {
      printf ("False\n");
    }
    return 1;
}

int minimal_path(int mat[ROWS][COLUMNS], int i, int j)
{
    if (mat[i][j]>0){
        printf("%d\n", mat[i][j]);
    }
    else{
        printf("-1\n");
    }
    return 1;
}

int get_minimal_path_matrix(int mat[ROWS][COLUMNS])
{
    // printf("ROWS: %d, COLUMNS: %d, UPDATES: %d\n", ROWS, COLUMNS, UPDATES);
    // print_mat(mat);
    int k, i, j;
    for(k=0; k<UPDATES; k++){
        for(i=0; i<ROWS; i++){
            for(j=0; j<COLUMNS; j++){
                if(mat[i][k]>0 && mat[k][j]>0){
                    if(i==j){
                        continue;
                    }
                    if(mat[i][j] > 0){
                        mat[i][j] = fmin(mat[i][j], mat[i][k]+mat[k][j]);   
                    }
                    else{
                        mat[i][j] = mat[i][k]+mat[k][j];    
                    }
                }
            }
        } 
        // print_mat(mat);
    }
    return 1;
}