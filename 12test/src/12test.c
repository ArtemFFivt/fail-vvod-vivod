/*
 ============================================================================
 Name        : vvod12.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

/*#include <stdio.h>
#include <stdlib.h>

int main(void) {
	FILE *result;
	result = fopen("result.txt","w");
	fputs("12",result);
}*/

/*
 ============================================================================
 Name        : vektor.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

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
#include <stdlib.h>
int main(int argc,char *argv[])
{
	FILE *result;
		result = fopen("result.txt","w");//���������� � �������� ����� � ������������
	FILE *inf;
	    inf = fopen ("inf.txt","r");//���������� � �������� ����� � ������� �����������

char z;// ���������� ���������� �� ����������� ��� ���������� ������ ���������
do {//���� ����������� ��� ���� ����� ���������� ������ � ����������
 setvbuf(stdout, NULL, _IONBF, 0);
setvbuf(stderr, NULL, _IONBF, 0);
    printf("\n � ����� ������������ �� ������ ���������� ������ � ��������(l) ��� ���������(v)");
    char regime;// ���������� ���������� �� ����� ������ ������������
    //scanf(" %c",&regime);
    fscanf(inf," %c",&regime);
    switch(regime)
    {	case 'l': //�������� ����� ������ ������������
    {
    printf("������� ���� �� ��������:(+)(-)(*)(/)(!)(^)");//������� ������������� ���������
	int a,b;//����������, ������� ����� �������� �� �����, � �������� ����� ���������� �������������� ��������
	float res;// ����������, ���������� ����������� ��������
    char c;// ��������� ���������� �� ����� ��������
    fscanf(inf," %c",&c);
    switch(c)
         {
         case '+':{// ��������
                 printf ("\n ������� 2 �����");
	             fscanf(inf,"%i",&a);
	             fscanf(inf,"%i",&b);
	             res = a + b;
	             printf("%f",res);
	             printf ("\n ���� �� ������ ���������� ������� (o), ���� �� ������ ��������� ������ ��������� (n)");
	             fscanf(inf," %c",&z);
	             fprintf(result,"%i",a);//����� � ���� result
	             fputs("+",result);
	             fprintf(result,"%i",b);
	             fputs("=",result);
	             fprintf(result,"%f",res);
	             break;}
         case '-':{//���������
                 printf ("\n ������� 2 �����");
	             fscanf(inf,"%i",&a);
	             fscanf(inf,"%i",&b);
	             res = a - b;
	             printf("%f",res);
	             printf ("\n ���� �� ������ ���������� ������� (o), ���� �� ������ ��������� ������ ��������� (n)");
	             fscanf(inf," %c",&z);
	             fprintf(result,"%i",a);//����� � ���� result
	             	             fputs("-",result);
	             	             fprintf(result,"%i",b);
	             	             fputs("=",result);
	             	             fprintf(result,"%f",res);
	             break;}
         case '*':{//���������
	             printf ("\n ������� 2 �����");
	             fscanf(inf,"%i",&a);
	             fscanf(inf,"%i",&b);
	             res = a * b;
	             printf("%f",res);
	             printf ("\n ���� �� ������ ���������� ������� (o), ���� �� ������ ��������� ������ ��������� (n)");
	             fscanf(inf," %c",&z);
	             fprintf(result,"%i",a);//����� � ���� result
	             	             	             fputs("*",result);
	             	             	             fprintf(result,"%i",b);
	             	             	             fputs("=",result);
	             	             	             fprintf(result,"%f",res);
 	             break;}
        case '/':{ //�������
                 printf ("\n ������� 2 �����");
                 fscanf(inf,"%i",&a);
	             fscanf(inf,"%i",&b);
              	 res = a / b;
            	 printf("%f",res);
            	 printf ("\n ���� �� ������ ���������� ������� (o), ���� �� ������ ��������� ������ ��������� (n)");
            	 fscanf(inf," %c",&z);
            	 fprintf(result,"%i",a);//����� � ���� result
            	 	             	             fputs("/",result);
            	 	             	             fprintf(result,"%i",b);
            	 	             	             fputs("=",result);
            	 	             	             fprintf(result,"%f",res);
                 break;}
        case '!':{//���������
                 printf ("\n ������� �����");
	             fscanf(inf,"%i",&a);
                 res = 1;
                 a = a + 1;
                 for (int i=1;i<a;i++)
	             res= res * i;
                 printf("%f",res);
                 printf ("\n ���� �� ������ ���������� ������� (o), ���� �� ������ ��������� ������ ��������� (n)");
                 fscanf(inf," %c",&z);
                 fprintf(result,"%i",a);//����� � ���� result
                 fputs("!",result);
                 fputs("=",result);
                 fprintf(result,"%f",res);

                 break;}
       case '^':{//���������� � �������
                 printf ("\n ������� 2 �����, ������ ����� ����� ���������� � �������, ������ ������� �����");
	             fscanf(inf,"%i",&a);
	             fscanf(inf,"%i",&b);
	             res = 1;
                 for( int i=0;i<b;i++)
               	 res= a * res;
                 printf("%f",res);
                 printf ("\n ���� �� ������ ���������� ������� (o), ���� �� ������ ��������� ������ ��������� (n)");
                 fscanf(inf," %c",&z);
                 fprintf(result,"%i",a);//����� � ���� result
                 	             	             	             fputs("^",result);
                 	             	             	             fprintf(result,"%i",b);
                 	             	             	             fputs("=",result);
                 	             	             	             fprintf(result,"%f",res);
                 break;}
       default:{// ���� ������ ������ ������
           printf("\n �� ��� �� ������");
           fscanf(inf," %c",&z);}



} break;
    }
    case 'v': //��������� ����� ������ ������������
    {
    	printf ("\n �������� ��������: (+)(-)(s)");
    	char oper;// ���������� ���������� �� ����� ��������
    	int rank;// ���������� ���������� �� ����������� �������
    	 fscanf(inf," %c",&oper);
    	 switch(oper){
    	 case'+':{
    		 printf ("\n ������� ������������ �������");
    		 fscanf(inf,"%i",&rank);
    		 float *firstvector;
    		 firstvector = malloc(rank * sizeof(float));//�������� ������� ��� ������ ������
    		 fputs("(",result);//������ �������� � ���� result
    		 for (int i = 0; i<rank ; i++)
    		 {
    			 printf ("\n ������� ������� �����");
                 printf("%i",i);
    		     fscanf(inf,"%f",&firstvector[i]);
    		 }//���� �� ���������� ������� ������(�������)
    		 printf ("\n ��� ������ ������");
    		 for (int i = 0; i<rank; i++)
    		     		 {
    			         printf ("\t");
    		     		 printf("%f",firstvector[i]);
    		     		 fprintf(result,"%f",firstvector[i]);//����� ������� �������
    		     		 fputs(" ",result);
    		     		 }
    		 float *secondvector;
    		     		 secondvector = malloc(rank * sizeof(float));//�������� ������� ��� ������ ������
    		     		 fputs(")+(",result);//������ �������� � ���� result
    		     		 for (int i = 0; i<rank ; i++)
    		     		 {//���������� ������� ��� 2 ������
    		     			 printf ("\n ������� ������� �����");
    		                  printf("%i",i);
    		     		     fscanf(inf,"%f",&secondvector[i]);
    		     		 }
    		     		printf ("\n ��� ������ ������");
    		     		for (int i = 0; i<rank; i++)
    		     		    	 {//����� ������� ��� 2 ������
    		     		         printf ("\t");
    		     		         printf("%f",secondvector[i]);
    		     		         fprintf(result,"%f",secondvector[i]);//����� ������� ������� � ����
    		     		         fputs(" ",result);
    		     		         }
    		     		fputs(")",result);//������ �������� � ���� result
    		   float *thirdvector;
    		          thirdvector = malloc(rank * sizeof(float));//�������� ������� ��� ��������������  ������
    		          fputs(" = (",result);
    		          for (int k = 0; k<rank;k++ )
    		          {
    		        	thirdvector[k]= firstvector[k] + secondvector[k]  ; //���������� ������� 3 ������� ����� �������� ���� ��������� 1 � 2 �������

    		          }
    		          printf ("\n ��� ���������");
    		          for (int i = 0; i<rank; i++)//��������� 3 �������
    		          {
    		          printf ("\t");
    		          printf("%f",thirdvector[i]);
    		          fprintf(result,"%f",thirdvector[i]);//����� �������� ������� � ����
    		          fputs(" ",result);
    		          }
    		          fputs(")",result);


             break;
    	 }
    	 case'-':{
    		 printf ("\n ������� ������������ �������");
    		     		 fscanf(inf,"%i",&rank);
    		     		 float *firstvector;
    		     		 firstvector = malloc(rank * sizeof(float));//�������� ������� ��� ������ ������
    		     		 fputs("(",result);//������ �������� � ���� result
    		     		 for (int i = 0; i<rank ; i++)
    		     		 {
    		     			 printf ("\n ������� ������� �����");
    		                  printf("%i",i);
    		     		     fscanf(inf,"%f",&firstvector[i]);
    		     		 }//���� �� ���������� ������� ������(�������)
    		     		 printf ("\n ��� ������ ������");
    		     		 for (int i = 0; i<rank; i++)
    		     		     		 {
    		     			         printf ("\t");
    		     		     		 printf("%f",firstvector[i]);
    		     		     		 fprintf(result,"%f",firstvector[i]);//����� ������� �������
    		     		     		    		     		 fputs(" ",result);
    		     		     		 }
    		     		 float *secondvector;
    		     		     		 secondvector = malloc(rank * sizeof(float));//�������� ������� ��� ������ ������
    		     	     	      	 fputs(")-(",result);//������ �������� � ���� result
    		     		     		 for (int i = 0; i<rank ; i++)
    		     		     		 {//���������� ������� ��� 2 ������
    		     		     			 printf ("\n ������� ������� �����");
    		     		                 printf("%i",i);
    		     		     		     fscanf(inf,"%f",&secondvector[i]);
    		     		     		     fprintf(result,"%f",secondvector[i]);//����� ������� ������� � ����
    		     		     		       		     		         fputs(" ",result);
    		     		     		 }
    		     		     		fputs(")",result);//������ �������� � ���� result
    		     		     		printf ("\n ��� ������ ������");
    		     		     		for (int i = 0; i<rank; i++)
    		     		     		    	 {//���������� ������� ��� 2 ������
    		     		     		         printf ("\t");
    		     		     		         printf("%f",secondvector[i]);
    		     		     		         }
    		     		   float *thirdvector;
    		     		          thirdvector = malloc(rank * sizeof(float));//�������� ������� ��� ��������������  ������
    		     		          fputs(" = (",result);
    		     		          for (int k = 0; k<rank;k++ )
    		     		          {
    		     		        	thirdvector[k]= firstvector[k] - secondvector[k]  ; //���������� ������� 3 ������� ����� ��������� ���� ��������� 1 � 2 �������

    		     		          }
    		     		          printf ("\n ��� ���������");
    		     		          for (int i = 0; i<rank; i++)//��������� 3 �������
    		     		          {
    		     		          printf ("\t");
    		     		          printf("%f",thirdvector[i]);
    		     		          fprintf(result,"%f",thirdvector[i]);//����� �������� ������� � ����
    		     		             		          fputs(" ",result);
    		     		          }
    		     		         fputs(")",result);

    	             break;
    	    	 }
    	 case's':{//��������� ������������
    		 printf ("\n ������� ������������ �������");
    		    		     		 fscanf(inf,"%i",&rank);
    		    		     		 float *firstvector;
    		    		     		 firstvector = malloc(rank * sizeof(float));//�������� ������� ��� ������ ������
    		    		      		 fputs("(",result);//������ �������� � ���� result
    		    		     		 for (int i = 0; i<rank ; i++)
    		    		     		 {
    		    		     			 printf ("\n ������� ������� �����");
    		    		                  printf("%i",i);
    		    		     		     fscanf(inf,"%f",&firstvector[i]);
    		    		     		 }//���� �� ���������� ������� ������(�������)
    		    		     		 printf ("\n ��� ������ ������");
    		    		     		 for (int i = 0; i<rank; i++)
    		    		     		     		 {
    		    		     			         printf ("\t");
    		    		     		     		 printf("%f",firstvector[i]);
    		    		     		     		 fprintf(result,"%f",firstvector[i]);//����� ������� �������
    		    		     		     		    		     		     fputs(" ",result);
    		    		     		     		 }
    		    		     		 float *secondvector;
    		    		     		     		 secondvector = malloc(rank * sizeof(float));//�������� ������� ��� ������ ������
    		    		     		     	  	 fputs(")s(",result);//������ �������� � ���� result
    		    		     		     		 for (int i = 0; i<rank ; i++)
    		    		     		     		 {//���������� ������� ��� 2 ������
    		    		     		     			 printf ("\n ������� ������� �����");
    		    		     		                  printf("%i",i);
    		    		     		     		     fscanf(inf,"%f",&secondvector[i]);
    		    		     		     		 }
    		    		     		     		printf ("\n ��� ������ ������");
    		    		     		     		for (int i = 0; i<rank; i++)
    		    		     		     		    	 {//���������� ������� ��� 2 ������
    		    		     		     		         printf ("\t");
    		    		     		     		         printf("%f",secondvector[i]);
    		    		     		     		         fprintf(result,"%f",secondvector[i]);//����� ������� ������� � ����
    		    		     		     		           		     		    fputs(" ",result);
    		    		     		     		         }
    		    		     		   float *thirdvector;
    		    		     		          thirdvector = malloc(rank * sizeof(float));//�������� ������� ��� ��������������  ������
    		    		     		          fputs(" = (",result);
    		    		     		          for (int k = 0; k<rank;k++ )
    		    		     		          {
    		    		     		        	thirdvector[k]= firstvector[k] * secondvector[k]  ; //���������� ������� 3 ������� ����� ������������ ���� ��������� 1 � 2 �������

    		    		     		          }
    		    		     		          printf ("\n ��� ���������");
    		    		     		          for (int i = 0; i<rank; i++)//��������� 3 �������
    		    		     		          {
    		    		     		          printf ("\t");
    		    		     		          printf("%f",thirdvector[i]);
    		    		     		          fprintf(result,"%f",thirdvector[i]);//����� �������� ������� � ����
    		    		     		             		     		   fputs(" ",result);
    		    		     		          }
    		    		     		          fputs(")",result);
    	             break;
    	    	 }

    	 }
    	printf ("\n ���� �� ������ ���������� ������� (o), ���� �� ������ ��������� ������ ��������� (n)");
    	                 fscanf(inf," %c",&z);
    	                 fputs("\n",result);
		break;
    }
    default:{// ���� ������ ������ ������
               printf("\n �� ��� �� ������");
               printf ("\n ���� �� ������ ���������� ������� (o), ���� �� ������ ��������� ������ ��������� (n)");
                                scanf(" %c",&z);
               break;}
    }

}// ����� ��������� ���������� �� ���������� ��� ����������� ���������
while(z=='o');
if(z=='n')
	printf("\n ����������");
else
	printf("\n �� ��� �� ������");
    return 0;
}
