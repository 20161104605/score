#include"header.h"
#include"define.h"
#include<conio.h>
#include<stdlib.h> 


#include<iostream>
using namespace std;

#define	MAXSIZE  100   /*此处的宏定义常量表示线性表可能达到的最大长度*/
#define judgement 3 /*裁判数*/
#define namemax 20 /*姓名*/
#define filenamemax 90 /*文件名最大字符数*/
#define linkbuf 130 /*缓冲字符数*/
#define telnum 15 /*电话号码*/ 
struct StudentActor{ 
	char name[namemax+1];//姓名
	char sex[2];//性别 
	char per_name[20];//节目名称 
	char per_type[2];//节目类别
	int cla;//班级
	char telphone[telnum+1];//电话号码
	int score[judgement];//裁判给的成绩
	int total;//总成绩 
};

struct linkactor{
	char name[namemax+1];/*姓名*/
	char telphone[telnum+1];/*电话号码*/
	int score[judgement];/*各裁判给的成绩*/
	int total;/*总成绩*/
	struct linkactor *next;
	}*head;/*链表首指针*/


	int total[judgement];/*各裁判给的总成绩*/
	FILE *filepoint;/*文件指针*/
	char filename[filenamemax];/*文件名*/



void swap(SeqList* L,int *p, int *q); 
void judge(SeqList* L);
/*从指定文件读入一个记录*/
int GetRecord(FILE *fpt,struct StudentActor *sturecord); 

/*对指定文件写入一个记录*/
void PutRecord(FILE *fpt,struct StudentActor *sturecord);


    
    
    int GetRecord(FILE *fpt,struct StudentActor *sturecord)

　　{

　　char buf[linkbuf];

　　int i;

　　if(fscanf(fpt,"%s",buf)!=1)

　　return 0; /* 文件结束 */

　　strncpy(sturecord->name,buf,namemax);

　　fscanf(fpt,"%s",buf);

　　strncpy(sturecord->code,buf,telnum);

　　for(i=0;i

　　fscanf(fpt,"%d",&sturecord->score[i]);

　　for(sturecord->total=0,i=0;i

　　sturecord->total+=sturecord->score[i];

　　return 1;

　　}

void PutRecord(FILE *fpt,struct StudentActor *sturecord)
{
	int i;
	fprintf(fpt,"%s\n",sturecord->name);
	fprintf(fpt,"%s\n",sturecord->code);
	for(i=0;i)
	fprintf(fpt,"%d\n",sturecord->score[i]);
	return 1;
}

/*显示运动员记录*/

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
/*列表显示运动员成绩*/

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
