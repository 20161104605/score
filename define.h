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

