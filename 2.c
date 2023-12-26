#include<stdio.h>
#include<string.h>

// Write C program to toggle case of each character in a string.

void main (){
	char ch[50];
	int i;
	printf("Enter String :- ");
	gets(ch);
	
	for(i=0; i<ch[i]!='\0'; i++){
		if(ch[i]>='a' && ch[i]<='z'){
			ch[i]=ch[i] - 32;
		}
		else if(ch[i]>='A' && ch[i]<='Z'){
			ch[i]=ch[i] + 32;
		}
	}
	printf("String :- %s", ch);
}
