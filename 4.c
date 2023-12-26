#include<stdio.h>
#include<string.h>

// Write C program to count total number of vowel or consonant in a string.

void main(){
    char ch[50];
    int i, vow=0, cons=0, check=0;

    printf("Enter any String: ");
    gets(ch);

    for(i=0; i<ch[i]!='\0'; i++){
        if(ch[i]>='a' && ch[i]<='z' || ch[i]>='A' && ch[i]<='Z' || ch[i]<=' '){
            if(ch[i] =='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u' ||
			   ch[i] =='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U')
                vow++;
            else
                cons++;
        }else{
        	check=1;
        	break;
		}
    }
	if(check != 1){
		printf("Total Number of Vowel = %d\n", vow);
   		printf("Total Number of Consonant = %d\n", cons);
	}else{
		printf("Not Valid String");
	}
    
}
