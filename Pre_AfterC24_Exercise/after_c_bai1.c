#include <stdio.h>
#include <stdlib.h>
int main(){
    int n = -1;
    while((n < 0) || (n >= 16))
    {
        printf("Nhap so phan tu n = ");
        scanf("%d", &n);
    }
    /* Khoi tao mang int arr[n] */
    printf("Khoi tao mang int arr[%d]\n", n);
    int *arr = (int*)calloc(n, n * sizeof(int));
    /* Nhap gia tri tung phan tu */
    printf("Nhap gia tri tung phan tu:\n");
    for (int i = 0; i < n; i++)
    {
        printf("arr[%d] = ", i);
        scanf("%d", arr + i);
    }
    /* In tat ca phan tu co trong mang */
    printf("arr[] = { ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", *(arr + i));
    }
    printf("}\n");
    /* In dia chi cua tung phan tu */
    printf("Dia chi cua tung phan tu:\n");
    for (int i = 0; i < n; i++)
    {
        printf("&arr[%d] = %d\n", i, (arr + i));
    }
    return 0;
}