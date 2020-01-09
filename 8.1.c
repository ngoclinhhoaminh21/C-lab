#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
FILE *fi;
char c;
int CTRL_Z = -1;

int writefile(char *fi_name){
	fi=fopen(fi_name,"w");
	fflush(stdin);
	do{
		c=getchar();
		if(c!=CTRL_Z) fputc(c,fi);
	}while(c!=CTRL_Z);
	fclose(fi);
	return TRUE;
}

int main(int dem, char* dl[]){
	if(dem!=2) printf("phai nhap ten file");
	else if(writefile(dl[1])==TRUE) printf("Writing the file %s: done\n",dl[1]);
	else printf("Can not write the file %s\n",dl[1]);
}
