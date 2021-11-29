#ifndef ROWS
#define ROWS 10
#endif

#ifndef COLUMNS
#define COLUMNS 10
#endif

#ifndef UPDATES
#define UPDATES 10
#endif

#ifndef FUNCS
#define FUNCS
int set_mat(int mat[ROWS][COLUMNS]);
int print_mat(int mat[ROWS][COLUMNS]);
int is_there_path (int mat[ROWS][COLUMNS], int i, int j);
int minimal_path(int mat[ROWS][COLUMNS], int i, int j);
int get_minimal_path_matrix(int mat[ROWS][COLUMNS]);
#endif