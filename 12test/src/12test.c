



#include <stdio.h>
#include <stdlib.h>
int main(int argc,char *argv[])

{
setvbuf(stdout, NULL, _IONBF, 0);
setvbuf(stderr, NULL, _IONBF, 0);
//переменные
char oper, d, reg;//переменна€ отвечающа€ за выбор операции и переменна€ отвечающа€ за прекращение или продолжение работы, выбор в какком режиме будет роботать калькул€тор скал€рный или векторный
double a, b, res;// переменные отвечающие за  первое число второе число и результат
int rank; //переменные отвечающие за размерность вектора
double *A,*B; // ѕервый вектор, второй вектор

do
{
	FILE *input, *output;
	char input_name[259], output_name[259];//переменные отвечающие за выбор имени файла
	printf("¬ведите название файла формата '.txt', дл€ получени€ данных");
	scanf("%s", input_name);
	printf("¬ведите название файла формата '.txt', в который будут выводитьс€ данные");
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
							  for(int i=0;i<rank;i++) fscanf(input,"%lf",&A[i]); //  оординаты первого вектора
							  for(int i=0;i<rank;i++) fscanf(input,"%lf",&B[i]); //  оординаты второго вектора
							  fprintf(output, "(");//вывод в текстовый файл
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
					 fprintf(output,"\n¬ы неправильно выбрали операцию!");
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
					   for(int i=0;i<rank;i++) fscanf(input,"%lf",&A[i]);//  оординаты первого вектора
					   for(int i=0;i<rank;i++) fscanf(input,"%lf",&B[i]); //  оординаты второго вектора
					   fprintf(output, "(");//вывод в текстовый файл
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
						 fprintf(output,"¬ы неправильно выбрали операцию!");
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
					 for(int i=0;i<rank;i++) fscanf(input,"%lf",&A[i]); //  оординаты первого вектора
					 for(int i=0;i<rank;i++) fscanf(input,"%lf",&B[i]); //  оординаты второго вектора
					 fprintf(output, "(");//вывод в текстовый файл
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
					 fprintf(output,"\n мы вас не пон€ли");
					 break;}
			 printf("’отите ли продолжить работу с программой(y/n)?: ");
					 scanf(" %c",&d);
  }}
    while (d == 'y');// продолжение или прикращение работы программы в зависимости от того будет выбрано y(продолж),n(заверш) или какой-=то другой символ в случае выбора другого символа
printf("работа калькул€тора завершена до свидани€!");
return 0;
}

