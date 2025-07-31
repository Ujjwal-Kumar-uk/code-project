// Write a Program to compare two string.
#include<stdio.h>
#include<string.h>
int main(){
    char str1[100],str2[100];
    printf("Enter the string1: ");
    fgets(str1,sizeof(str1),stdin);
    printf("Enter the string2: ");
    fgets(str2,sizeof(str2),stdin);

     // Remove trailing newline characters
    //  str1[strcspn(str1, "\n")] = '\0';
    //  str2[strcspn(str2, "\n")] = '\0';
    if(strcmp(str1,str2)==0){      //compairing both strings
        printf("BOTH STRINGS ARE EQUAL");
    }else{
        printf("BOTH STRINGS ARE NOT EQUAL");
    }
    return 0;
    

}