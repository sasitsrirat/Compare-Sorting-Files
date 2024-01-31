// gcc main.c -o sort
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "bubblesort.c"
#include "selectionsort.c"
#include "insertionsort.c"

void display(int a[], int n)
{
    int i;
    for (i = 1; i < n; i++)
    {
        printf("% d", a[i]);
    }
    printf("\n");
}
void swap(int *x, int *y)
{
    int t;
    t = *y;
    *y = *x;
    *x = t;
}

int main(int argc, char **argv)
{

    int count, N, *a;
    N = argc - 1;
    a = (int *)malloc(sizeof(int) * N);

    printf("Argument= %d\n", argc);
    for (count = 1; count < argc; count++)
    {
        a[count - 1] = atoi(argv[count]);
    }
    if (strcmp(argv[1], "bubble") == 0)
    {
        bubblesort(a, N);
    }
    else if (strcmp(argv[1], "selection") == 0)
    {
        selectionsort(a, N);
    }
    else if (strcmp(argv[1], "insertion") == 0)
    {
        insertionsort(a, N);
    }

    printf("After Sorting \n");
    for (count = 1; count < argc; count++)
    {
        printf("%d ", a[count - 1]);
    }
}
//5 6 9 7 6 5 4 1 0 1 5    
//694 166 458 863 213 872 604 359 564 698 47 117 465 47 75 339 245 14 992 464 135 945 165 282 280 244 784 382 868 199 72 736 727 353 215 530 836 966 266 8 963 740 230 351 702 562 23 526 635 807
//0 8 14 23 47 47 72 75 117 135 165 166 199 213 215 230 244 245 266 280 282 339 351 353 359 382 458 464 465 526 530 562 564 604 635 694 698 702 727 736 740 784 807 836 863 868 872 945 963 966 992