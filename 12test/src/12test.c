



#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])

{
setvbuf(stdout, NULL, _IONBF, 0);
setvbuf(stderr, NULL, _IONBF, 0);
//����������
char oper, d, reg;//���������� ���������� �� ����� �������� � ���������� ���������� �� ����������� ��� ����������� ������, ����� � ������ ������ ����� �������� ����������� ��������� ��� ���������
double a, b, res;// ���������� ���������� ��  ������ ����� ������ ����� � ���������
int rank; //���������� ���������� �� ����������� �������
double *A,*B; // ������ ������, ������ ������

do
{
	FILE *input, *output;
	char input_name[259], output_name[259];//���������� ���������� �� ����� ����� �����
	printf("������� �������� ����� ������� '.txt', ��� ��������� ������");
	scanf("%s", input_name);
	printf("������� �������� ����� ������� '.txt', � ������� ����� ���������� ������");
	scanf("%s", output_name);
	input = fopen(input_name,"r");
	output = fopen(output_name,"w");
	while (fscanf(input, " %c", &oper)!= EOF)
	switch(oper)
	  case '+':
			 { fscanf(input," %c",&reg);
			  switch(reg)
			  {
			  case 'v':
				  fscanf(input,"%i",&rank);
							  A = malloc(rank*sizeof(double));
							  B = malloc(rank*sizeof(double));
							  for(int i=0;i<rank;i++) fscanf(input,"%lf",&A[i]); // ���������� ������� �������
							  for(int i=0;i<rank;i++) fscanf(input,"%lf",&B[i]); // ���������� ������� �������
							  fprintf(output, "(");//����� � ��������� ����
							  for(int i=0;i<rank;i++) fprintf(output,"%lf ",A[i]);
							  fprintf(output, ") + (");
							  for(int i=0;i<rank;i++) fprintf(output,"%lf ",B[i]);
							  fprintf(output, ") = (");
							  for(int i=0;i<rank;i++) fprintf(output,"%lf ",A[i]+B[i]);
							  fprintf(output, ")\n");
							  break;
			 case 's':
				 fscanf(input," %lf",&a);
				 fscanf(input," %lf",&b);
				 res = a + b;
				 fprintf(output,"\n%lf + %lf = %lf",a,b,res);
				 break;
			 default:
					 fprintf(output,"\n�� ����������� ������� ��������!");
			 break;}
             break;
	  case '-':
			 fscanf(input," %c",&reg);
				 switch(reg)
				 {
				 case 'v':
					 fscanf(input,"%i",&rank);
					   A = malloc(rank*sizeof(double));
					   B = malloc(rank*sizeof(double));
					   for(int i=0;i<rank;i++) fscanf(input,"%lf",&A[i]);// ���������� ������� �������
					   for(int i=0;i<rank;i++) fscanf(input,"%lf",&B[i]); // ���������� ������� �������
					   fprintf(output, "(");//����� � ��������� ����
					   for(int i=0;i<rank;i++) fprintf(output,"%lf ",A[i]);
					   fprintf(output, ") - (");
					   for(int i=0;i<rank;i++) fprintf(output,"%lf ",B[i]);
					   fprintf(output, ") = (");
					   for(int i=0;i<rank;i++) fprintf(output,"%lf ",A[i]-B[i]);
					   fprintf(output, ")\n");
					   break;
				 case 's':
					 fscanf(input," %lf",&a);
					 fscanf(input," %lf",&b);
					 res = a - b;
					 fprintf(output,"\n%lf - %lf = %lf",a,b,res);
					 break;
				 default:
						 fprintf(output,"�� ����������� ������� ��������!");
				 break;}
				 break;
	  case '*':
			 fscanf(input," %c",&reg);
				 switch(reg)
				 {
				 case 'v':
					 fscanf(input,"%i",&rank);
					 A = malloc(rank*sizeof(double));
					 B = malloc(rank*sizeof(double));
					 for(int i=0;i<rank;i++) fscanf(input,"%lf",&A[i]); // ���������� ������� �������
					 for(int i=0;i<rank;i++) fscanf(input,"%lf",&B[i]); // ���������� ������� �������
					 fprintf(output, "(");//����� � ��������� ����
					 for(int i=0;i<rank;i++) fprintf(output,"%lf ",A[i]);
					 fprintf(output, ") + (");
					 for(int i=0;i<rank;i++) fprintf(output,"%lf ",B[i]);
					 fprintf(output, ") = (");
					 for(int i=0;i<rank;i++) fprintf(output,"%lf ",A[i]*B[i]);
					 fprintf(output, ")\n");
					 break;

				 case 's':
					 fscanf(input," %lf",&a);
					 fscanf(input," %lf",&b);
					 res = a * b;
					 fprintf(output,"\n%lf * %lf = %lf",a,b,res);
					 break;
				 default:
					 fprintf(output,"\n �� ��� �� ������");
					 break;}
			 printf("������ �� ���������� ������ � ����������(y/n)?: ");
					 scanf(" %c",&d);
  }}
    while (d == 'y');// ����������� ��� ����������� ������ ��������� � ����������� �� ���� ����� ������� y(�������),n(������) ��� �����-=�� ������ ������ � ������ ������ ������� �������
printf("������ ������������ ��������� �� ��������!");
return 0;
}

