#include <stdio.h>
struct student
{
    int rollno;
    float marks;
};
int main()
{
    struct student s1, s2, s3;
    s1.rollno;
    s1.marks;
    s2.rollno;
    s2.marks;
    s3.rollno;
    s3.marks;
    printf("enter roll no\n");
    scanf("%d%d%d", &s1.rollno, &s2.rollno, &s3.rollno);

    printf("enter the marks\n");
    scanf("%f%f%f", &s1.marks, &s2.marks, &s3.marks);

    printf("roll no %d marks is %f\n", s1.marks);
    printf("roll no %d marks is %f\n", s2.marks);
    printf("roll no %d marks is %f\n", s3.marks);

    return 0;
}