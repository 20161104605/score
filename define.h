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

