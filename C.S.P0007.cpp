#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char s[100];
	int i,j;
	int key;
	do{
	printf("enter a string:");
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i]==' '&&s[i+1]==' '){
			for(j=i;j<strlen(s);j++){
				s[j]=s[j+1];
			}
			i--;
		}	
	}
	printf("after string format:%s",s);
	key=getchar();
}while(key!=27);
	return 0;
}
