#include <stdio.h>

void input(int *p, int m, int n);
void print(int *p, int m, int n);

int main()
{
    int arr[3][4];
    input(&arr[0][0], 3, 4);
    printf("The elements of the array are:\n");
    print(&arr[0][0], 3, 4);
    return 0;
}

void input(int *p, int m, int n)
{
    int i, j;
    printf("Enter the elements of the array:\n");
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            scanf("%d", p+i*n+j);
        }
    }
}

void print(int *p, int m, int n)
{
    int i, j;
    for(i=0; i<m; i++)
    {
        for(j=0; j<n; j++)
        {
            printf("%d ", *(p+i*n+j));
        }
        printf("\n");
    }
}