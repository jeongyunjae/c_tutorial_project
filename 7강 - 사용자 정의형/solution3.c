#include<stdio.h>
struct test{
    char name[31];
    int stu_num;
    float point;
};
int main(){
    struct test temp;

    scanf("%s %d %f", temp.name, &temp.stu_num, &temp.point);
    printf("과목이름: %s\n학생수: %d\n과목학점: %.1f", temp.name, temp.stu_num, temp.point);
    return 0;
}
