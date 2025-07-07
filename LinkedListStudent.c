#include <stdio.h>
#include <stdlib.h>
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
};

int main()
{
    int choice;

    struct student *head = NULL;
    struct student *tmp;
    struct student *last;
    struct student *p;
    while (1)
    {
        printf("\n1 For Add student\n2 For List all students\n3 Exit");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            // new node
            if (head == NULL)
            {
                head = malloc(sizeof(struct student));
                printf("\nEnter name and marks of three subjects : ");
                scanf("%s%d%d%d", &head->name, &head->maths, &head->sci, &head->eng);
                head->next = NULL;
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
                last = tmp;
            }
            break;
        case 2:
            // list all node

            // p = head;

            // while (p != NULL)
            // {
            //     printf(" %s %d %d %d ", p->name, p->maths, p->sci, p->eng);
            //     p = p->next;
            // }

            for (p = head; p != NULL; p = p->next)
            {
                printf(" %s %d %d %d ", p->name, p->maths, p->sci, p->eng);
            }

            break;
        case 3:
            exit(0);
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