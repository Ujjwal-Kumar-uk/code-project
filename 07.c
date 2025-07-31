//COUNT THE LENGTH OF STRING
#include<stdio.h>
int main(){
    char str[] = "ANSU";
    int i = 0,count;
    char c = str[i];
    while(c!='\0'){     //loop tab tak chalega jab tak null character na aa jaye
        c = str[i];
        i++;
    }
    count = i-1;
    printf("%d",count);
    return 0;
}