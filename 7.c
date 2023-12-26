#include<stdio.h>

//Write C program to string length count (without string function use).

void main (){
	char ch[50];
	int i, words=0;
	
	printf("Enter the String :- ");
	gets(ch);
	
	for(i=0; ch[i]; i++){
		words++;
	}
	printf("NO of Words in String = %d\n",words);
}
