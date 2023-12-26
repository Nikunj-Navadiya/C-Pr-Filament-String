#include<stdio.h>
#include<string.h>

//Write C program to search all occurrences of a character in a string.

void main(){
    char ch[50], search;
    int i;

    printf("Enter any string: ");
    gets(ch);
    
    printf("Enter any character to search: ");
    search = getchar();

    for(i=1; i<ch[i]!='\0'; i++){
        if(ch[i] == search){
            printf("'%c' is found at index %d\n", search, i);
        }
    }
}
