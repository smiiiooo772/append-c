//create a file...
#include<stdio.h>
#include<string.h>
int main()
{
	int i;
	FILE *fp;
	char ch[50]=("it is a good batch");
	fp=fopen("bsc.txt","a");
	if(fp == NULL)
	{
		printf("file can't be open");
	}
	for(i=0;i<strlen(ch);i++)
	{
		fputc(ch[i],fp);
	}
	fclose(fp);
	
}
