#include"define.h"
#include<iostream>
#include<stdlib.h>
#include<conio.h>
using namespace std;
    void swap (int *p, int *q)
    {
        int t;
        t = *p;
        *p = *q;
        *q = t;
    }
    
    
    int GetRecord(FILE *fpt,struct StudentActor *sturecord)

����{

����char buf[linkbuf];

����int i;

����if(fscanf(fpt,"%s",buf)!=1)

����return 0; /* �ļ����� */

����strncpy(sturecord->name,buf,namemax);

����fscanf(fpt,"%s",buf);

����strncpy(sturecord->code,buf,telnum);

����for(i=0;i

����fscanf(fpt,"%d",&sturecord->score[i]);

����for(sturecord->total=0,i=0;i

����sturecord->total+=sturecord->score[i];

����return 1;

����}

void PutRecord(FILE *fpt,struct StudentActor *sturecord)
{
	int i;
	fprintf(fpt,"%s\n",sturecord->name);
	fprintf(fpt,"%s\n",sturecord->code);
	for(i=0;i)
	fprintf(fpt,"%d\n",sturecord->score[i]);
	return 1;
}

/*��ʾ�˶�Ա��¼*/

void ShowActorRecord(struct StudentActor *rct)
{
	int i;
	printf("\n name: %s\n",rct->name);
	printf("code: %s\n",rct->code);
	printf("score :\n");
	for(i=0;i)
	printf("%-20s : %4d\n",judgement[i],rct->score[i]);
	printf("total :%4d\n",rct->total);
}
/*�б���ʾ�˶�Ա�ɼ�*/

void listactorinfo(char *fname)
{
	FILE *fp;
	struct StudentActor s;
	system("cls");

	clrscr();

	if((fp=fopen(fname,"r"))==NULL)
	{
		printf("can not open %s.\n",fname);
		return ;
	}



}
