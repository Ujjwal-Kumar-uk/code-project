//C PROGRAM TO TAKE INPUT FROM USER ABOUT MARKS OF 5 STUDENTS
#include<stdio.h>
int main(){
    int marks[5] = {90,69,85,88,97};
    for(int i = 0;i<5;i++){
        printf("The value of marks at index %d is %d\n",i,marks[i]);
    }
    return 0;
}