#include "Header.h"

int main()
{
	setlocale(LC_ALL, "rus");
	srand(time(NULL));
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);


	int task, exit;
	do
	{
		task = TaskNumb();
		switch (task)
		{
			case 1:
			{
				/*1.	������������ ������ ��������, ������ ������� �������� �������� ��������� ���� :
				a.���� �������������, ���������� �� ����� ��� ��������(������);
				b.���� ������� ��������� �� ��������� ������ ���� � ���� �������(������);
				c.����������� ���������� ����� �� ��������� ������ ���� � ���� �������(������);

				�������������� ������ �������� ��������� ������� : ������� ������ ���� ���������� � ��� ��������������,
					������� ��������� ���� �� ���� ���������, ����� � ���, ��� �������� ���� � ��� ���������, � �.�.*/

				printf("������� ���-�� ������������� - \n");
				int length;
				scanf_s("%d", &length);
				products * company;
				company = (products*)calloc(length, sizeof(products));
				if (company == 0)
				{
					printf("ERROR\n");
					EXIT_FAILURE;
				}
				CompanyCode(company, &length);
				SalesPlan(company);
				ReaslSales(company, &length);
				printf("\n �� ����. \n");
				PrintStruct(company, &length);
				SortStruct(company, &length);
				printf("\n ����� ����. \n");
				PrintStruct(company, &length);
				free(company);
			} break;

			case 2:
			{
				/*2.	������������ ������ ��������, ������ ������� �������� �������� ��������� ��� ���� :
				a.�������, ��� �������� ��������(������);
				b.������ ������ � �������������� �������(������);
				c.�������

				��� ������� �������� �������� ���� �� ��������� �������� �������� :
				5 � ��������(������ 9 �(���) 10), 4 � ��������(��� ������, ������ 6, �� �� ��� 9 ��� 10, � ���� 6 �(���) 7 �(���) 8),
					3 � ��������(��� ������, ������ 4, �� ���� 4 �(���) 5), 2 � ������������(���� 1 �(���) 2 �(���) 3).
					�������������� ������ �������� �� �������� ����������� ��������*/
				int length = 2 + rand() % 2;
				student * students;
				students = (student*)calloc(length, sizeof(student));
				if (students == NULL)
				{
					printf("ERROR\n");
					EXIT_FAILURE;
				}
				RandomPeople(students, &length);
				Scores(students, &length);
				printf("\n �� ����. \n");
				Average(students, &length);
				PrintStudents(students, &length);
				GoodOrBad(students, &length);
				StudentsSort(students, &length);
				printf("\n ����� ����. \n");
				PrintStudents(students, &length);
				free(students);
			} break;

			case 3:
			{

			} break;

			case 4:
			{
				/*4.	���������� �� N ������� ������ �������� ������� ���������� ���� :
				�������, ������� �������, �������������, ������� �����.
				������ ���������� �� �������, ��������� ���������� �������� � �������.
				���������� ��� ��������.*/
				int length = 4 + rand() % 4;
				int count0 = 0, count1 = 0;
				factory *workers;
				workers = (factory *)calloc(length, sizeof(factory));
				if (workers == NULL)
				{
					printf("ERROR\n");
					EXIT_FAILURE;
				}
				FactoryWorkers(workers, &length, &count0, &count1);
				PrintWorkers(workers, &length, &count0, &count1);
				free(workers);
			} break;

			case 5:
			{
				/*5.	����� ��������� ��������������� ����������� ����� � ����� �����.
					������ ���������� �� N ���������� � ���������� ���� �� ����� ���������� �����,
					� �������� ����� ������� ����� �� ����� � �� ����.*/
				int countOfPass = 4 + rand() % 4, index = 0;
				luggage *pass;
				pass = (luggage*)calloc(countOfPass, sizeof(luggage));
				if (pass == NULL)
				{
					printf("ERROR\n");
					EXIT_FAILURE;
				}
				Passengers(pass, &countOfPass);
				MaxWeight(pass, &countOfPass, &index);
				PrintPassengers(pass, &countOfPass, &index);
			} break;

			case 6:
			{
				/*6.	������� ���������� �� ������ ��������� � ��������� ����� � ������ N �������.
					�� ������� �� ��������� ������� ��������� �������� :
				�������, ������ �� ����������, ������ �� ����������� � ������ �� ������.
					������ ���������� �� ��������� � ���������� ���������� � ������� ����������.*/
				int countOfStud = 4 + rand() % 4, index = 0;
				exams *students;
				students = (exams*)calloc(countOfStud, sizeof(exams));
				if (students == NULL)
				{
					printf("ERROR\n");
					EXIT_FAILURE;
				}
				Students(students, &countOfStud);
				AverageScores(students, &countOfStud);
				SortStudentsExams(students, &countOfStud);
				StudPrintExams(students, &countOfStud);
				free(students);
			} break;

			case 7:
			{
				/*7.	�������� ���������, ������� ���������� ������������ ������ ����, ����� � ���.
					����� ����� ���� ����������� ���������� �������, ��������� ��� �������������.
					����� ��������� ������ ���������� ����� ���������� ����, �� - ������ � ������ ���� �� ��������� ���� ������������.*/
				date day[1];
				DateFilling(day);
				PrintYear(day);
			} break;

			case 9:
			{
				/*9.	������� ��������� � ������ STUDENT, ���������� ���� :
				a.������� � �������� ��������;
				b.����� ������;
				c.������������(������ �� ������� ������ �� ��������� � 5 - ������� �������).
					d.ZOD � ���� �������
					e.DATE � ���� ��������(������ �� ���� ����� : ���, �����, �����).*/
				int countOfStud = 4 + rand() % 4, index = 0;
				STUDENT *students;
				students = (STUDENT*)calloc(countOfStud, sizeof(STUDENT));
				if (students == NULL)
				{
					printf("ERROR\n");
					EXIT_FAILURE;
				}
				RandomPeople2(students, &countOfStud);
				AvScore(students, &countOfStud);
				StudInformPrint(students, &countOfStud);
				free(students);
			} break;

		}

		printf("��� ������ ������� 0\n---");
		scanf_s("%d", &exit);
		if (exit == 0)
			return 0;
	} while (task > 0);
}