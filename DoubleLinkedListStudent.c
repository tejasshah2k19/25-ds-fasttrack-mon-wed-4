#include <stdio.h>
#include <stdlib.h>
#include <string.h>
struct student
{
    char name[30];        // 30
    int maths;            // 4
    int sci;              // 4
    int eng;              // 4
    float perc;           // 4
                          // 46
                          // 16 16 16
    struct student *next; // self ref structure
    struct student *prev; 
} *head = NULL, *last = NULL;

void addNodeLast()
{
    struct student *tmp;
    if (head == NULL)
    {
        head = malloc(sizeof(struct student));
        printf("\nEnter name and marks of three subjects : ");
        scanf("%s%d%d%d", &head->name, &head->maths, &head->sci, &head->eng);
        head->next = NULL;
        head->prev = NULL;
        last = head;
    }
    else
    {
        // new node
        // address -> first node -> next
        tmp = malloc(sizeof(struct student));
        printf("\nEnter name and marks of three subjects : ");
        scanf("%s%d%d%d", &tmp->name, &tmp->maths, &tmp->sci, &tmp->eng);
        tmp->next = NULL;

        last->next = tmp;
        tmp->prev = last; 
        last = tmp;
    }
}
void addNodeBeg()
{
    struct student *tmp;
    tmp = malloc(sizeof(struct student));
    printf("\nEnter name and marks of three subjects : ");
    scanf("%s%d%d%d", &tmp->name, &tmp->maths, &tmp->sci, &tmp->eng);
    tmp->next = head;
    head->prev = tmp; 
    tmp->prev = NULL; 
    head = tmp;
}
void addNodeAny()
{
}

void delAtLast()
{
    struct student *p = head;

    while (p->next != last)
    {
        p = p->next;
    }

    p->next = NULL;
    free(last);
    last = p;
}
void delAtBeg()
{
    struct student *p = head;
    head = head->next;
    free(p);
}
void delAtAny()
{
    char name[34];
    struct student *p, *q;
    printf("\nEnter name");
    scanf("%s", &name);

    p = head;
    while (p != NULL)
    {
        if (stricmp(p->name, name) == 0)
        {
            break;
        }
        q = p;
        p = p->next;
    }

    if (p == NULL)
    {
        printf("\nStudent Not Found");
    }
    else
    {
        q->next = p->next;
        free(p);
    }
}

void display()
{
    struct student *p;
    for (p = head; p != NULL; p = p->next)
    {
        printf(" %s %d %d %d ", p->name, p->maths, p->sci, p->eng);
    }
}

void search()
{

    struct student *p;
    int found = 0; // not avlbl
    char searchName[30];
    printf("\nEnter name for Search : ");
    scanf("%s", &searchName);

    p = head;
    while (p != NULL)
    {
        if (stricmp(p->name, searchName) == 0)
        {
            found = 1; // avlb
            break;
        }
        p = p->next;
    }

    if (found == 1)
    {
        printf("\nFound");
    }
    else
    {
        printf("\nNot Found");
    }
}

int main()
{
    int choice;

    struct student *head = NULL;
    struct student *tmp;
    struct student *last;
    struct student *p;
    while (1)
    {
        printf("\n0 For Exit\n1 For Add student{last}\n2 For Add Student{Beg}\n3 For Add Student{Any}\n4 For Delete Last\n5 For Delete Beg\n6 For Delete Any\n7 For Display\n8 for Search\nEnter choice");
        scanf("%d", &choice);

        switch (choice)
        {
        case 0:
            exit(0);
        case 1:
            // new node
            addNodeLast();
            break;
        case 2:
            addNodeBeg();
            break;
        case 3:
            addNodeAny();
            break;

        case 4:
            delAtLast();
            break;
        case 5:
            delAtBeg();
            break;
        case 6:
            delAtAny();
            break;
        case 7:
            display();
            break;
        case 8:
            search();
            break;
        }
    }
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