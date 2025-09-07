//WRITE A FUNCTION SLICE() TO SLICE A STRING. IT SHOULD CHANGE THE ORIGINAL STRING SUCH THAT IT IS NOW THE SLICED STRING.
//TAKE 'M' AND 'N' AS THE STARTING AND ENDING POSITION FOR SLICE.
#include<stdio.h>
char* slice(char str[],int m,int n){
    char *ptr1 = &str[m];
    char *ptr2 = &str[n];
    str = ptr1;
    str[n] = '\0';
    return str;
}
int main(){
    char str[] = "Hello world";
    printf("%s",slice(str,1,7));
    return 0;
}
