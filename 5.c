#include<stdio.h>
#include<string.h>

//Write C program to count total number of words in a string.

void main(){
    char ch[50];
    int i, words=1;

    printf("Enter any string :- ");
    gets(ch);

    for(i=1; i<ch[i]!='\0'; i++){
        if(ch[i]==' ' || ch[i]=='\n' || ch[i]=='\t'){
            words++;
        }
    }

    printf("Total Number of Words = %d", words);

}


