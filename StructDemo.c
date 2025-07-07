#include <stdio.h>

struct student
{
    char name[30]; // 30
    int maths;     // 4
    int sci;       // 4
    int eng;       // 4
    float perc;    // 4
    // 46
    // 16 16 16
};

int main()
{

    struct student s; // name maths sci eng perc
    struct student t; // name maths sci eng perc
    // calloc ? malloc ?
    struct student *x; //

    struct student students[200];

  

    printf("\n%d", sizeof(x)); // pointer - no memory
    printf("\n%d", sizeof(s)); // normal - implicit memory

    x = malloc(sizeof(struct student));
    //________________________16
    //_________________________32
    //_________________________32
    //_________________________

    printf("\nEnter name and marks of three subjects");
    scanf("%s%d%d%d", &x->name, &x->maths, &x->sci, &x->eng);

    return 0;
}

/*
    1 For Add student
    2 For List all students
    3 Exit

    1
    Ram 30 30 30

    1 For Add student
    2 For List all students
    3 Exit

    1
    Laxman 40 40 40

    1 For Add student
    2 For List all students
    3 Exit

    2

    Ram     30  30  30
    Laxman  40  40  40


    counter -> 
    //5 memory -> 
    //counter -> 

    //royal -> 1000 
        //add student?


        //add student  
        //5000  6000      8000    4500 
        //[ram] [laxman] [ravan]  [sita]
*/