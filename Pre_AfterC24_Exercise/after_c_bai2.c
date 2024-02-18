#include <stdio.h>
#include <stdlib.h>
#include <stdint.h>
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
    /* Khoi tao lai mang int arr[n] */
    for(int i = 0; i < n; i++){
        uint8_t *arr = (uint8_t*)calloc(n, n * sizeof(uint8_t));
        printf("Dung luong cua arr[%d] la: %d\n", i, sizeof( *(arr + i) ));
    }
    for(int i = 0; i < n; i++){
        uint16_t *arr = (uint16_t*)calloc(n, n * sizeof(uint16_t));
        printf("Dung luong cua arr[%d] la: %d\n", i, sizeof( *(arr + i) ));
    }
    for(int i = 0; i < n; i++){
        uint32_t *arr = (uint32_t*)calloc(n, n * sizeof(uint32_t));
        printf("Dung luong cua arr[%d] la: %d\n", i, sizeof( *(arr + i)) );
    }
    for(int i = 0; i < n; i++){
        uint64_t *arr = (uint64_t*)calloc(n, n * sizeof(uint64_t));
        printf("Dung luong cua arr[%d] la: %d\n", i, sizeof( *(arr + i)) );
    }
    return 0;
}