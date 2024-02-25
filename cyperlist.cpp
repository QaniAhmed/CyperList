#include<stdio.h>
#include<stdlib.h>
using namespace std;
void logo();
int main(int argc , char*argv[])
{
	 logo();
int minSize,maxSize;

char* characters,*outputFile;

			//26 letters and 14 punctuation marks 10 numbers
printf("You have entered %d argc\n", argc);
if (argv[1]==NULL  || argv[2]==NULL || argv[3]==NULL)
{
	printf("PLEASE ENTER min and max size and characters of the list \n");
	exit(1);
}
for(int i=0;i<argc;i++)
	{
		if(i==1)
		{
					minSize= atoi (argv[i]);
		printf("minSize:%d\n",minSize);		
		}
		if(i==2)
		{
			maxSize=atoi (argv[i]);
		printf("maxSize:%d\n",maxSize);
		}
		if (i==3)
		{
			characters=argv[i];
			printf("characters : %s\n",characters);
		}
		if(i==4)
		{
			outputFile=argv[i];
			printf("outputFile : %s",outputFile);
			
		}
			
	}    
}
void logo(){
	printf("-------------------------------------------\n");
printf("\t\tCYPER LIST\t\t\t \n");
printf("-------------------------------------------\n\n\n");  
}
 
