#include"header.h"
#include"define.h"
#include<conio.h>
#include<stdlib.h> 


#include<iostream>
using namespace std;

#define	MAXSIZE  100   /*�˴��ĺ궨�峣����ʾ���Ա���ܴﵽ����󳤶�*/
#define judgement 3 /*������*/
#define namemax 20 /*����*/
#define filenamemax 90 /*�ļ�������ַ���*/
#define linkbuf 130 /*�����ַ���*/
#define telnum 15 /*�绰����*/ 
struct StudentActor{ 
	char name[namemax+1];//����
	char sex[2];//�Ա� 
	char per_name[20];//��Ŀ���� 
	char per_type[2];//��Ŀ���
	int cla;//�༶
	char telphone[telnum+1];//�绰����
	int score[judgement];//���и��ĳɼ�
	int total;//�ܳɼ� 
};

struct linkactor{
	char name[namemax+1];/*����*/
	char telphone[telnum+1];/*�绰����*/
	int score[judgement];/*�����и��ĳɼ�*/
	int total;/*�ܳɼ�*/
	struct linkactor *next;
	}*head;/*������ָ��*/


	int total[judgement];/*�����и����ܳɼ�*/
	FILE *filepoint;/*�ļ�ָ��*/
	char filename[filenamemax];/*�ļ���*/



void swap(SeqList* L,int *p, int *q); 
void judge(SeqList* L);
/*��ָ���ļ�����һ����¼*/
int GetRecord(FILE *fpt,struct StudentActor *sturecord); 

/*��ָ���ļ�д��һ����¼*/
void PutRecord(FILE *fpt,struct StudentActor *sturecord);


    
    
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
    cout<<"name is :"<<rct->name<<endl;
	cout<<"code is:"<<rct->code<<endl;
	cout<<"score : "<<endl;
	for(i=0;i)
	cout<<"judgement[i] <<rct->score[i] <<"<<endl;
	cout<<"total: "<<rct->total<<endl;
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
int main(int argc, char *argv[])
{ 
    int a[10];
    int i,j,k;
     for (i=0; i<10; i++)
    {
        cout<<a[i]<<endl;
    }

    for (j=0; j<9; j++)
    {
        for (k=0; k<9-j; k++)
        if (a[k]<a[k+1])
        {
            swap(&a[k],&a[k+1]);
        }
    }
    i = 0;
    for (j=1; j<9; j++)
    {
        i += a[j];
    }
         cout<<"the average is "<<i/8<<endl;

    return 0;
}
