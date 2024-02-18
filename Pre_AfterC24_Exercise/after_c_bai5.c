#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <string.h>
typedef struct{
    char name[32];
    char mssv[8];
    uint8_t course_c;
}infor;

void infor_get(infor* stu_infor){
    printf("nhap vao [ten][ho] cua nguoi code: ");
    fgets(stu_infor->name, sizeof(stu_infor->name), stdin); /* fgets gets all character until it gets '\n' */
    fflush(stdin);
    printf("nhap vao mssv cua nguoi code: ");
    fgets(stu_infor->mssv, sizeof(stu_infor->mssv), stdin);
    printf("nhap so thu tu khoa C da tham gia: ");
    scanf("%i", &stu_infor->course_c);
}

void infor_print(infor* stu_infor){
    printf("name: %s", stu_infor -> name);
    printf("mssv: %s", stu_infor -> mssv);
    printf("course C: %d\n", stu_infor -> course_c);
}

int main(){
    infor *stu_infor = malloc(sizeof(infor)); /* Allocate an address; sizeof(infor) = 41 */
    infor_get(stu_infor);
    infor_print(stu_infor);
}