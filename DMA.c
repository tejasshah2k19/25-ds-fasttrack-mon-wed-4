#include<stdio.h>
#include<stdlib.h>


int main(){

    

    int *a; //4 
    a = malloc(sizeof(int));//2 4 

    printf("\nEnter value");
    scanf("%d",a);  // a

    printf("\n%d",*a);// * 
    
    printf(" %d ",sizeof(int));//4 

    free(a);



    return 0;
}