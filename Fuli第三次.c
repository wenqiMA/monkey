#include<stdio.h>
#include<math.h>
void tip()
{
    printf("�����������\n");
    printf("    �������㹫ʽ\n");
    printf("\tF=P*pow((1+i/m),N*m)\n");
	printf("    ������㹫ʽ\n");
	printf("\tP=F/pow((1+i/m),N*m)\n");
	printf("    �������㹫ʽ\n");
	printf("\tL=P*N*i\n\tH=L+P");
	printf("    ���ʼ��㹫ʽ\n");
	printf("\ti=");
    printf("\tF:������ֵ\n");
    printf("\tP:����\n");
    printf("\ti:����\n");
	printf("\tH:������\n");
    printf("\tN�����ʻ�ȡʱ���������\n");
	printf("\tm:�긴������(һ�굱�еĹ�������)\n");
}
void benjin()
{
	int N,m;
	double i,F,P;
	printf("������ֵ:");
	scanf("%lf",&F);
	printf("������:");
    scanf("%lf",&i);
    printf("��������:");
    scanf("%d",&N);
    printf("�긴������:");
    scanf("%d",&m);
	P=F/pow((1+i)/m,N*m);
	printf("�긴����ֵΪ%lf��Ҫ����Ϊ:%.4lf\n",F,P);
}
void fuli()
{
	int N,m;
    double i,F,P;
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("������:");
    scanf("%lf",&i);
    printf("��������:");
    scanf("%d",&N);
    printf("�긴������:");
    scanf("%d",&m);
    F=P*pow((1+i/m),N*m);
    printf("������ֵ:%.4lf\n",F);
}
void danli()
{
	int N;
    double i,H,P,L;
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("������:");
    scanf("%lf",&i);
    printf("��������:");
    scanf("%d",&N);
	L=P*N*i;
	H=L+P;
	printf("��Ϣ��Ϊ:%.4lf\n",H);
}
void lilv()
{
	int 
	double 
    printf("���뱾��:");
    scanf("%lf",&P);
    printf("��������:");
    scanf("%d",&N);
    printf("�긴������:");
    scanf("%d",&m);
    printf("������ֵ:");
	scanf("%lf",&F);




void main()
{
	int n,i;
	while(1)
	{
	//	tip();
		getchar();
		printf("��������Ҫѡ��Ĺ���(0~3):\n   1:���㱾��\n   2:�����긴����ֵ\n   3:��������\n   4:���ʼ���\n   0:����\n");
	    scanf("%d",&n);
		if(i==0)
			break;
		switch(n)
		{
		   case 1:
               benjin();break;
		   case 2:
               fuli();break;
		   case 3:
	 	       danli();break;
		   case 4:
	 	       lilv();break;
		   case 0:i=0;break;	
		}
	}
}
