#include<stdio.h>
#include<string.h>
#include<string.h>

//Write C program to count total number of alphabets, digits and special characters in a string.

void main(){
    char ch[50];
    int alphabets, digits=0, others, i;

    printf("Enter any string : ");
    gets(ch);

    for(i=0; i<ch[i]!='\0'; i++){
        if((ch[i]>='a' && ch[i]<='z') || (ch[i]>='A' && ch[i]<='Z')){
            alphabets++;
        }
        else if(ch[i]>='0' && ch[i]<='9'){
            digits++;
        }
        else{
            others++;
        }
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special Characters = %d", others);
}
