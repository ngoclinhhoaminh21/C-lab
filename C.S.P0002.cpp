#include<stdio.h>
#include<string.h>
int main()
{
	
	char s[100];
	int i,a;
	char *decima[]={ "zero", "one", "two", "three", "four","five", "six", "seven", "eight", "nine"};
	char *tens_place[] = { "ten", "eleven", "twelve", "thirteen", "fourteen", "fifteen", "sixteen", "seventeen", "eighteen", "nineteen"};
	char *tens_multiple[] = {"", "", "twenty", "thirty", "forty", "fifty","sixty", "seventy", "eighty", "ninety"};
	printf("enter a number from 0 to 9999: ");
	scanf("%s",&s);
	for(i=0;i<strlen(s);i++)
	{
		/* - idea: su dung switch de phan biet cac hang (hang phan nghin, hang phan tram, hang phan chuc va hang don vi ung theo thu tu a=4,3,2,1)
			-giai quyet: khai bao cac mang chuoi */
		/* co the mo rong ra voi cac so >9999 neu biet hang chuc nghin,hang tram nghin, hang trieu,hang chuc trieu trong tieng anh la gi, va van su dung idea nay,*/
		/* chu y: o hang phan chuc va hang don vi ta se xu ly khac voi cac hang khac */	
		a=strlen(s)-i;
		switch(a)
		{
			case 4:	if (s[i]!='0') printf("%s thousand, ",decima[s[i]-'0']);
					break;
			case 3: if (s[i]!='0') printf("%s hundred,",decima[s[i]-'0']);
					break;
			case 2: if (s[i]=='1') printf("%s ",tens_place[s[i+1]-'0']);
					if (s[i]!='1'&&s[i]!='0') printf("%s ",tens_multiple[s[i]-'0']);
					break;
			case 1: if (s[i-1]!='1'&&s[i]!='0')
					printf("%s",decima[s[i]-'0']);
					if (s[i]=='0') printf("%s",decima[s[i]-'0']);
					break;
			default: break;
			
		}
	}
	
	
}

