#include<stdio.h>




void mul(){
    printf("\nmul -> 123");//
}

void sub(){
    printf("\nsub -> 123");//
    mul();
    printf("\nOVER");
}
void add(){
    printf("\nadd -> 123");//
    sub();
    printf("\nOVER AGAIN");
}

void master(int i){
    printf("\n%d ",i);
    master(i+1);//recursion 
}
//infinite ---stack overflow 
int main(){
 
    master(1);
    return 0;
}




//function calling another function -> nested function 
//function calling itself -> 

//why? 

//loop -> 
//recursion -> 

//base case :- a condition where recursion will break; 

