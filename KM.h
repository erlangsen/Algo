#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
#define min(x, y) (x) > (y)? (y) : (x) 
#define max(x, y) (x) > (y)? (x) : (y)

typedef struct{
    int nx; 
    int ny;
    int maxn; 
    int *cx;
    int *cy;
    int *xl;
    int *yl;
    int *s;
    int *t;
    double delta_l;
    double **g;
} TaskAssignment;


static void InitTask(TaskAssignment *task, int x, int y); 
static void LabelChange(TaskAssignment *task); 
static int Dfs(TaskAssignment *task, int u); 
static void MaxMatch(TaskAssignment *task);  
static void FreeTask(TaskAssignment *task); 
