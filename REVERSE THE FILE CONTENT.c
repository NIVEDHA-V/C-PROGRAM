//C PROGRAM TO REVERSE THE CONTENT OF THE FILE AND PRINT IT
#include<stdio.h>
#include<errno.h>
long count_characters(FILE*);

void main(int agrc, char * agrv[])
{
	int i;
	long cnt;
	char ch, ch1;
	FILE *fp1, *fp2;
	
	if(fp1 = fopen(argv[1],"r"))
	{
		printf("The FILE has been opened..\n");
		fp2= fopen(argv[2],"w");
		cnt= count_characters(fp1);
		fseek(fp1, -1L, 2);
		printf("Numbers of characters tobe copied %d\n",ftell(fp1));
		while(cnt)
		{
			ch=fgetc(fp1);
			fputc(ch, fp2);
			fseek(fp1, -2L, 1);
			cnt--;
		}
		printf("\n**File copied successfully in reverse order**\n");
	}
	else
	{
		perror("Error occured\n");
	}
	fclose(fp1);
	fclose(fp2);
}

long count_characters(FILE *f)
{
	fseek(f, -1L, 2);
	long last_pos=ftell(f);
	last_pos++;
	return last_pos;
}
