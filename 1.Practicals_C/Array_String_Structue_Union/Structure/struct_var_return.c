#include<stdio.h>
struct marks{
    int maths;
    int physics;
    int chem;
};

struct marks deviation(struct marks student1 , struct marks student2 );

int main(){

    struct marks student;
    student.maths= 87;
    student.chem = 67;
    student.physics=96;

    struct marks avg;
    avg.maths= 55;
    avg.chem = 45;
    avg.physics=34;
    //struct marks dev;
    struct marks dev= deviation(student, avg );
    printf("%d %d %d" ,dev.maths,dev.chem,dev.physics);

    return 0;
 }

struct marks deviation(struct marks student , struct marks student2 )
    {
    struct marks dev;

    dev.maths = student.maths-student2.maths;
    dev.chem = student.chem-student2.chem;
    dev.physics = student.physics-student2.physics; 

    return dev;
    }