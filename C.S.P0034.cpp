#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int IsLower(char c){
	if (c>='a'&&c<='z') return 1;
	else return 0;
}
int IsUpper(char c){
	if (c>='A'&&c<='Z') return 1;
	else return 0;
}
int ToLower(char c){
	return c=c+32;
}
int ToUpper(char c){
	return c=c-32;
}
void reserve(char s[]){
	int i;
	for(i=0;i<strlen(s);i++){
		if (IsLower(s[i])==1) s[i]=ToUpper(s[i]);
		else if (IsUpper(s[i])==1) s[i]=ToLower(s[i]);
	}
	char s2[100];
	for(i=0;i<strlen(s);i++){
		s2[i]=s[strlen(s)-1-i];
	}
	s2[strlen(s)]='\0';
	printf("%s",s2);
}
int main(int argc, char *argv[]) {
	char s[100];
	int key;
	do{
	printf("enter a string:");
	gets(s);
	reserve(s);
	key=getchar();
}while(key!=27);
return 0;
}
