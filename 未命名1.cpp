#include<stdio.h>
#include<time.h>
int main()
{
	time_t timep;
//	long long int time1;
	struct tm *p;
    time (&timep);
    p=gmtime(&timep);
    printf("%d\n",p->tm_sec); /*��ȡ��ǰ��*/
    printf("%d\n",p->tm_min); /*��ȡ��ǰ��*/
    printf("%d\n",8+p->tm_hour);/*��ȡ��ǰʱ,�����ȡ������ʱ��,�պ����˸�Сʱ*/
    printf("%d\n",p->tm_mday);/*��ȡ��ǰ�·�����,��Χ��1-31*/
    printf("%d\n",1+p->tm_mon);/*��ȡ��ǰ�·�,��Χ��0-11,����Ҫ��1*/
    printf("%d\n",1900+p->tm_year);/*��ȡ��ǰ���,��1900��ʼ������Ҫ��1900*/
    printf("%d\n",p->tm_yday); /*�ӽ���1��1�������������������ΧΪ0-365*/
//	time1=time();
	return 0;
}
