/*
 ============================================================================
 Name        : 12test.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */




#include <stdio.h>
int main(int argc,char *argv[])
{
printf("\n � ����� ������������ �� ������ ���������� ������ � ��������(l) ��� ���������(v));
char z;// ���������� ���������� �� ����������� ��� ���������� ������ ���������
do {//���� ����������� ��� ���� ����� ���������� ������ � ����������
 setvbuf(stdout, NULL, _IONBF, 0);
setvbuf(stderr, NULL, _IONBF, 0);
    printf("������� ���� �� ��������:(+)(-)(*)(/)(!)(^)");//������� ������������� ���������
	int a,b;//����������, ������� ����� �������� �� �����, � �������� ����� ���������� �������������� ��������
	float res;// ����������, ���������� ����������� ��������
    char c;// ��������� ���������� �� ����� ��������
    scanf(" %c",&c);
    switch(c)
         {
         case '+':{// ��������
                 printf ("\n ������� 2 �����");
	             scanf("%i",&a);
	             scanf("%i",&b);
	             res = a + b;
	             printf("%f",res);
	             printf ("\n ���� �� ������ ���������� ������� (o), ���� �� ������ ��������� ������ ��������� (n)");
	             scanf(" %c",&z);
	             break;}
         case '-':{//���������
                 printf ("\n ������� 2 �����");
	             scanf("%i",&a);
	             scanf("%i",&b);
	             res = a - b;
	             printf("%f",res);
	             printf ("\n ���� �� ������ ���������� ������� (o), ���� �� ������ ��������� ������ ��������� (n)");
	             scanf(" %c",&z);
	             break;}
         case '*':{//���������
	             printf ("\n ������� 2 �����");
	             scanf("%i",&a);
	             scanf("%i",&b);
	             res = a * b;
	             printf("%f",res);
	             printf ("\n ���� �� ������ ���������� ������� (o), ���� �� ������ ��������� ������ ��������� (n)");
	             scanf(" %c",&z);
 	             break;}
        case '/':{ //�������
                 printf ("\n ������� 2 �����");
                 scanf("%i",&a);
	             scanf("%i",&b);
              	 res = a / b;
            	 printf("%f",res);
            	 printf ("\n ���� �� ������ ���������� ������� (o), ���� �� ������ ��������� ������ ��������� (n)");
            	 scanf(" %c",&z);
                 break;}
        case '!':{//���������
                 printf ("\n ������� �����");
	             scanf("%i",&a);
                 res = 1;
                 a = a + 1;
                 for (int i=1;i<a;i++)
	             res= res * i;
                 printf("%f",res);
                 printf ("\n ���� �� ������ ���������� ������� (o), ���� �� ������ ��������� ������ ��������� (n)");
                 scanf(" %c",&z);
                 break;}
       case '^':{//���������� � �������
                 printf ("\n ������� 2 �����, ������ ����� ����� ���������� � �������, ������ ������� �����");
	             scanf("%i",&a);
	             scanf("%i",&b);
	             res = 1;
                 for( int i=0;i<b;i++)
               	 res= a * res;
                 printf("%f",res);
                 printf ("\n ���� �� ������ ���������� ������� (o), ���� �� ������ ��������� ������ ��������� (n)");
                 scanf(" %c",&z);
                 break;}
       default:{// ���� ������ ������ ������
           printf("\n �� ��� �� ������");
           scanf(" %c",&z);}



}

}// ����� ��������� ���������� �� ���������� ��� ����������� ���������
while(z=='o');
if(z=='n')
	printf("\n ����������");
else
	printf("\n �� ��� �� ������");
    return 0;
}
