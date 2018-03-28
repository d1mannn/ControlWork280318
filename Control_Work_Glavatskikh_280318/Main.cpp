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
				/*1.	Сформировать массив структур, каждый элемент которого содержит следующие поля :
				a.шифр подразделения, содержащий не более трёх символов(вводим);
				b.план выпуска продукции по кварталам одного года в виде массива(вводим);
				c.фактическое выполнение плана по кварталам одного года в виде массива(вводим);

				Рассортировать массив структур следующим образом : сначала должна быть информация о тех подразделениях,
					которые выполнили план во всех кварталах, затем о тех, кто выполнил план в трёх кварталах, и т.д.*/

				printf("Введите кол-во подразделений - \n");
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
				printf("\n До сорт. \n");
				PrintStruct(company, &length);
				SortStruct(company, &length);
				printf("\n После сорт. \n");
				PrintStruct(company, &length);
				free(company);
			} break;

			case 2:
			{
				/*2.	Сформировать массив структур, каждый элемент которого содержит следующие три поля :
				a.фамилия, имя отчество студента(вводим);
				b.массив оценок в десятибалльной системе(вводим);
				c.признак

				Для каждого студента получить одно из следующих значений признака :
				5 – отличник(только 9 и(или) 10), 4 – хорошист(нет оценок, меньше 6, но не все 9 или 10, а есть 6 и(или) 7 и(или) 8),
					3 – троечник(нет оценок, меньше 4, но есть 4 и(или) 5), 2 – неуспевающий(есть 1 и(или) 2 и(или) 3).
					Рассортировать массив структур по убыванию полученного признака*/
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
				printf("\n До сорт. \n");
				Average(students, &length);
				PrintStudents(students, &length);
				GoodOrBad(students, &length);
				StudentsSort(students, &length);
				printf("\n После сорт. \n");
				PrintStudents(students, &length);
				free(students);
			} break;

			case 3:
			{

			} break;

			case 4:
			{
				/*4.	Информация по N заводам города задается строкой следующего вида :
				фамилия, средний возраст, специальность, средний оклад.
				Ввести информацию по заводам, посчитать количество слесарей и токарей.
				Напечатать эти значения.*/
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
				/*5.	Багаж пассажира характеризуется количеством вещей и общим весом.
					Ввести информацию об N пассажирах и определить есть ли среди пассажиров такой,
					у которого самый большой багаж по числу и по весу.*/
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
				/*6.	Имеется информация по итогам экзаменов в институте всего в списке N человек.
					По каждому из студентов имеются следующие сведения :
				фамилия, оценка по математике, оценка по информатике и оценка по физике.
					Ввести информацию об экзаменах и напечатать количество и фамилии отличников.*/
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
				/*7.	Напишите программу, которая приглашает пользователя ввести день, месяц и год.
					Месяц может быть представлен порядковым номером, названием или аб¬бревиатурой.
					Затем программа должна возвратить общее количество дней, ис - текших с начала года по указанный день включительно.*/
				date day[1];
				DateFilling(day);
				PrintYear(day);
			} break;

			case 9:
			{
				/*9.	Описать структуру с именем STUDENT, содержащую поля :
				a.фамилия и инициалы студента;
				b.номер группы;
				c.успеваемость(массив из четырех оценок на экзаменах в 5 - бальной системе).
					d.ZOD – знак зодиака
					e.DATE – дата рождения(массив из трех чисел : год, месяц, число).*/
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

		printf("Для выхода введите 0\n---");
		scanf_s("%d", &exit);
		if (exit == 0)
			return 0;
	} while (task > 0);
}