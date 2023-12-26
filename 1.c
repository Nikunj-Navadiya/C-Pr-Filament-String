#include<stdio.h>
#include<string.h>

//Write C program to convert string to uppercase. 

void main (){
	char ch[50];
	printf("Enter String :- ");
	gets(ch);
	
	printf("String Uppercase :- %s", strupr(ch));
}
