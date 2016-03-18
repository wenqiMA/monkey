#include<stdio.h>
#include<math.h>
void tip()
{
    printf("复利计算软件\n");
    printf("    复利计算公式\n");
    printf("\tF=P*pow((1+i/m),N*m)\n");
	printf("    本金计算公式\n");
	printf("\tP=F/pow((1+i/m),N*m)\n");
	printf("    单利计算公式\n");
	printf("\tL=P*N*i\n\tH=L+P");
	printf("    利率计算公式\n");
	printf("\ti=m*(pow(F/P,1.0/(N*m))-1)");
	printf("    年份计算公式\n");
	printf("\tn=(int)(log(F/P)/log(1+i/m)/m)");
    printf("\tF:复利终值\n");
    printf("\tP:本金\n");
    printf("\ti:利率\n");
	printf("\tH:本利和\n");
    printf("\tN：利率获取时间的整数倍\n");
	printf("\tm:年复利次数(一年当中的滚利次数)\n");
}
void benjin()
{
	int N,m;
	double i,F,P;
	printf("复利终值:");
	scanf("%lf",&F);
	printf("年利率:");
    scanf("%lf",&i);
    printf("存入年限:");
    scanf("%d",&N);
    printf("年复利次数:");
    scanf("%d",&m);
	P=F/pow((1+i)/m,N*m);
	printf("年复利终值为%lf需要本金为:%.4lf\n",F,P);
}
void fuli()
{
	int N,m;
    double i,F,P;
    printf("存入本金:");
    scanf("%lf",&P);
    printf("年利率:");
    scanf("%lf",&i);
    printf("存入年限:");
    scanf("%d",&N);
    printf("年复利次数:");
    scanf("%d",&m);
    F=P*pow((1+i/m),N*m);
    printf("复利终值:%.4lf\n",F);
}
void danli()
{
	int N;
    double i,H,P,L;
    printf("存入本金:");
    scanf("%lf",&P);
    printf("年利率:");
    scanf("%lf",&i);
    printf("存入年限:");
    scanf("%d",&N);
	L=P*N*i;
	H=L+P;
	printf("本息和为:%.4lf\n",H);
}
void lilv()
{
	int N,m;
	double i,F,P;
    printf("存入本金:");
    scanf("%lf",&P);
    printf("存入年限:");
    scanf("%d",&N);
    printf("年复利次数:");
    scanf("%d",&m);
    printf("复利终值:");
	scanf("%lf",&F);
    i=m*(pow(F/P,1.0/(N*m))-1);
	printf("从%.4lf到%.4lf需要%.4lf\n",P,F,i);
}
void nianfen()
{
	int N,m;
	double i,F,P;
	printf("存入本金:");
	scanf("%lf",&P);
	printf("年利率:");
	scanf("%lf",&i);
	printf("年复利次数:");
	scanf("%d",&m);
	printf("复利终值:");
	scanf("%lf",&F);
	N=(int)(log(F/P)/log(1+i/m)/m);
	printf("从%.4lf到%.4lf需要%d年\n",P,F,N);
}



void main()
{
	int n,i;
	while(1)
	{
	//	tip();
		getchar();
		printf("请输入你要选择的功能(0~3):\n   1:计算本金\n   2:计算年复利终值\n   3:单利计算\n   4:利率计算\n   5:年份计算\n   0:结束\n");
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
		   case 5:
	 	       nianfen();break;
		   case 0:i=0;break;	
		}
	}
}