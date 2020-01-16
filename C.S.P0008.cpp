#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char str[100];
    int freq[256]; // Store frequency of each character
    int i = 0, max;
    int ascii;
    int key;
    do{
    	
	

    printf("Enter any string: ");
    gets(str);
    strlwr(str);

    /* Initializes frequency of all characters to 0 */
    for(i=0; i<256; i++)
    {
        freq[i] = 0;
    }


    /* Finds frequency of each characters */
    i=0;
    while(str[i] != '\0')
    {
        ascii = (int)str[i];
        freq[ascii] += 1;

        i++;
    }
    
    for( i=0;i<256;i++){
		if (freq[i]==1)
		printf("ki tu '%c': 1 times\n",i);
	}
   	key=getchar();
	}while(key!=27);
	return 0;
}
