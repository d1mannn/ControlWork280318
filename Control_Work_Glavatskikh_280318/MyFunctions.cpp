#include "Header.h"

int TaskNumb()
{
	printf("Введите номер задания - ");
	int task;
	scanf_s("%d", &task);
	return task;
}

void CompanyCode(products *company, int *length)
{
	for (int i = 0; i < *length; i++)
	{	
		getchar();
		do
		{	
			printf("Введите шифр Компании № %d (3 символа)\n---", i + 1);
			gets_s(company[i].code);
		} while (strlen(company[i].code)!= 3);
	}
}

void SalesPlan(products * company)
{	
	printf("Введите план реализации каждого квартала\n");
	for (int i = 0; i < 4; i++)
	{
		printf("Для %d-го квартала --\n", i + 1);
		scanf_s("%d", &company->plan[i]);
	}
	/*printf("-------\n");
	for (int i = 0; i < 4; i++)
	{
		printf("%d\n", company->plan[i]);
	}*/
}

void ReaslSales(products * company, int * length)
{
	printf("Введите сколько по факту было реализовано в каждом квартале\n");

	for (int i = 0; i < *length; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			printf("Для %d-го квартала %dй компании --\n", j + 1, i + 1);
			scanf_s("%d", &company[i].realized[j]);
		}
	}
	
}

void SortStruct(products * company, int *length)
{	
	for (int i = 0; i < *length; i++)
	{
		company[i].realizedCount = 0;
	}
	products temp;
	
	for (int i = 0; i < *length; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			if (company[i].realized[j] >= company->plan[j]);
			company[i].realizedCount = company[i].realizedCount + 1;
		}
	}
	int max = company[0].realizedCount;
	for (int i = 0; i < *length; i++)
	{
		for (int j = *length - 1; j > 0; j--)
		{
			if (company[j].realizedCount > company[j - 1].realizedCount)
			{
				temp = company[j - 1];
				company[j - 1] = company[j];
				company[j] = temp;
			}
		}
	}
}

void PrintStruct(products * company, int * length)
{
	for (int i = 0; i < *length; i++)
	{
		printf("Шифр - %s\n", company[i].code);
	}
}


void RandomPeople(student *students, int * countOfStudents)
{
	int fName[20], mName[20], lName[20];
	int length;
	for (int j = 0; j < *countOfStudents; j++)
	{
		length = 7 + rand() % 5;
		for (int i = 0; i < length; i++)
		{
			fName[i] = 97 + rand() % 25;
		}
		CopyNames(fName, (students + j)->Name.fName, &length);
		length = 10 + rand() % 7;
		for (int i = 0; i < length; i++)
		{
			mName[i] = 97 + rand() % 25;
		}
		CopyNames(mName, (students + j)->Name.mName, &length);
		length = 10 + rand() % 7;
		for (int i = 0; i < length; i++)
		{
			lName[i] = 97 + rand() % 25;
		}
		CopyNames(lName, (students + j)->Name.lName, &length);
		int a = 0 + rand() % 2;
		switch (a)
		{
		case 0:
		{
			strcpy_s(students[j].gender, "male");
		}  break;

		case 1:
		{
			strcpy_s(students[j].gender, "female");
		} break;
		}
	}
}

void CopyNames(int *from, char *to, int *length)
{
	for (int i = 0; i < *length; i++)
	{
		to[i] = (char)from[i];
	}
	to[0] = toupper(to[0]);
	to[*length] = '\0';
}


void Scores(student * students, int * length)
{
	for (int i = 0; i < *length; i++)
	{
		students[i].point.first = 5 + rand() % 6;
		students[i].point.second = 5 + rand() % 6;
	}
}

void PrintStudents(student *stundets, int * length)
{
	for (int i = 0; i < *length; i++)
	{
		printf("%s %s %s(%s)\n Оценка по 1му предмету - %d\nОценка по 2му - %d\nСредний балл - %d\n\n\n",
			stundets[i].Name.fName, stundets[i].Name.mName, stundets[i].Name.lName, stundets[i].gender, stundets[i].point.first, stundets[i].point.second, stundets[i].average);
	}
}

void Average(student *stundets, int * length)
{
	for (int i = 0; i < *length; i++)
	{
		stundets[i].average = (stundets[i].point.first + stundets[i].point.second) / 2;
	}
}

void GoodOrBad(student * students, int * length)
{
	for (int i = 0; i < *length; i++)
	{
		if (students[i].average > 7)
			students[i].score = 5;
		if (students[i].average > 5 && students[i].average < 8)
			students[i].score = 4;
		else
			students[i].score = 3;
	}
}

void StudentsSort(student * students, int *length)
{
	student temp;
	int max = students[0].score;
	for (int i = 0; i < *length; i++)
	{
		for (int j = *length - 1; j > 0; j--)
		{
			if (students[j].score < students[j - 1].score)
			{
				temp = students[j - 1];
				students[j - 1] = students[j];
				students[j] = temp;
			}
		}
	}
}


void FactoryWorkers(factory *workers, int *countOfWorkers, int *count0, int*count1)
{	
	int lName[20], length, a;
	for (int i = 0; i < *countOfWorkers; i++)
	{
		length = 4 + rand() % 4;
		for (int j = 0; j < length; j++)
		{
			lName[j] = 97 + rand() % 25;
		}
		CopyNames(lName, workers[i].lName, &length);
		workers[i].age = 18 + rand() % 50;
		workers[i].salary = 5000 + rand() % 10000;
		a = 0 + rand() % 2;
		switch (a)
		{
		case 0:
		{
			strcpy_s(workers[i].job, "Слесарь");
			(*count0)++;
		} break;
		case 1:
		{
			strcpy_s(workers[i].job, "Токарь");
			(*count1)++;
		} break;
		}
	}
}

void PrintWorkers(factory * workers, int * length, int *count0, int*count1)
{	
	for (int i = 0; i < *length; i++)
	{
		printf("%s, Возраст: %d, Профессия: %s\n З/п = %d\n\n", workers[i].lName, workers[i].age, workers[i].job, workers[i].salary);

	}
	printf("Кол-во слесарей - %d\nКол-во токарей - %d\n\n", *count0, *count1);
}

void Passengers(luggage * passenger, int *countOfPass)
{
	int lName[20], length;
	for (int i = 0; i < *countOfPass; i++)
	{
		length = 4 + rand() % 4;
		for (int j = 0; j < length; j++)
		{
			lName[j] = 97 + rand() % 25;
		}
		CopyNames(lName, passenger[i].lName, &length);
		passenger[i].countOfThings = 10 + rand() % 40;
		passenger[i].weight = 10 + rand() % 10;
	}
}

void MaxWeight(luggage * passenger, int *countOfPass, int * index)
{
	int max = passenger[0].countOfThings + passenger[0].weight;
	*index = 0;
	for (int i = 0; i < *countOfPass; i++)
	{
		if ((passenger[i].countOfThings + passenger[i].weight) > max)
		{
			max = passenger[i].countOfThings + passenger[i].weight;
			*index = i;
		}
	}
}

void PrintPassengers(luggage *passenger, int *countOfPass, int * index)
{
	for (int i = 0; i < *countOfPass; i++)
	{
		printf("Пассажир: %s  Вес багажа: %d\n", passenger[i].lName, passenger[i].weight);
	}
	printf("\nПассажир с максимальным весом всего багажа:\n\t%s, вес всего багажа = %d\n",
		passenger[*index].lName, (passenger[*index].countOfThings + passenger[*index].weight));
}

void Students(exams * student, int * countOfStudents)
{
	int lName[20], length;
	for (int i = 0; i < *countOfStudents; i++)
	{
		length = 4 + rand() % 4;
		for (int j = 0; j < length; j++)
		{
			lName[j] = 97 + rand() % 25;
		}
		CopyNames(lName, student[i].lName, &length);
		student[i].subjects.IT = 5 + rand() % 5;
		student[i].subjects.math = 5 + rand() % 5;
		student[i].subjects.physics = 5 + rand() % 5;
	}
}

void AverageScores(exams * students, int * length)
{
	for (int i = 0; i < *length; i++)
	{
		students[i].average = (students[i].subjects.IT + students[i].subjects.physics + students[i].subjects.math) / 3;
	}
}


void SortStudentsExams(exams * students, int * length)
{	
	exams temp;
	for (int i = 0; i < *length; i++)
	{
		for (int j = *length - 1; j < 0; j--)
		{
			if (students[j].average < students[j - 1].average)
			{
				temp = students[j - 1];
				students[j - 1] = students[j];
				students[j] = temp;
			}
		}
	}
}

void StudPrintExams(exams * students, int * length)
{
	for (int i = 0; i < *length; i++)
	{
		printf("%d) %s, ср.балл = %d\n", i + 1, students[i].lName, students[i].average);
	}
}

void DateFilling(date *day)
{
	for (int i = 0; i < 1; i++)
	{
		day[i].year = 1900 + rand() % 117;
		if ((day[i].year % 4 == 0 && day[i].year % 100 == 0) || day[i].year % 400 == 0)
		{
			day[i].month = 1 + rand() % 12;
			if (day[i].month == 1 || day[i].month == 3 || day[i].month == 5 || day[i].month == 7 || day[i].month == 8 || day[i].month == 10 || day[i].month == 12)
				day[i].day = 1 + rand() % 31;
			else if (day[i].month == 4 || day[i].month == 6 || day[i].month == 9 || day[i].month == 11)
				day[i].day = 1 + rand() % 30;
			else if (day[i].month == 2)
				day[i].day = 1 + rand() % 29;
		}
		else
		{
			day[i].month = 1 + rand() % 12;
			if (day[i].month == 1 || day[i].month == 3 || day[i].month == 5 || day[i].month == 7 || day[i].month == 8 || day[i].month == 10 || day[i].month == 12)
				day[i].day = 1 + rand() % 31;
			else if (day[i].month == 4 || day[i].month == 6 || day[i].month == 9 || day[i].month == 11)
				day[i].day = 1 + rand() % 30;
			else if (day[i].month == 2)
				day[i].day = 1 + rand() % 28;
		}
	}
}

void PrintYear(date * day)
{	
	int n = rand() % 2;
	switch (n)
	{
		case 0:
		{
			switch (day[0].month)
			{
			case Jan: strcpy_s(day[0].months, "Jan");
				break;
			case Feb: strcpy_s(day[0].months, "Feb");
				break;
			case March: strcpy_s(day[0].months, "March");
				break;
			case Apr: strcpy_s(day[0].months, "Apr");
				break;
			case May: strcpy_s(day[0].months, "May");
				break;
			case Jun: strcpy_s(day[0].months, "Jun");
				break;
			case Jul: strcpy_s(day[0].months, "Jul");
				break;
			case Aug: strcpy_s(day[0].months, "Aug");
				break;
			case Sep: strcpy_s(day[0].months, "Sep");
				break;
			case Nov: strcpy_s(day[0].months, "Nov");
				break;
			case Oct: strcpy_s(day[0].months, "Oct");
				break;
			case Dec: strcpy_s(day[0].months, "Dec");
				break;
			default: printf("ERROR\n");
				break;
			}
			printf("Today is %d-е %s, %d-й год\n", day[0].day, day[0].months, day[0].year);
		} break;
		case 1:
		{
			printf("Today is %d.%d.%d-й год\n", day[0].day, day[0].month, day[0].year);
		} break;
	}
}

void RandomPeople2(STUDENT *students, int * countOfStudents)
{
	int fName[20], mName[20], lName[20];
	int length;
	for (int j = 0; j < *countOfStudents; j++)
	{
		length = 7 + rand() % 5;
		for (int i = 0; i < length; i++)
		{
			fName[i] = 97 + rand() % 25;
		}
		CopyNames(fName, (students + j)->Name.fName, &length);
		length = 10 + rand() % 7;
		for (int i = 0; i < length; i++)
		{
			mName[i] = 97 + rand() % 25;
		}
		CopyNames(mName, (students + j)->Name.mName, &length);
		length = 10 + rand() % 7;
		for (int i = 0; i < length; i++)
		{
			lName[i] = 97 + rand() % 25;
		}
		CopyNames(lName, (students + j)->Name.lName, &length);
		int sign = 0 + rand() % 12;
		switch (sign)
		{
		case Aries: strcpy_s(students[j].sign, "Aries");
			break;
		case Taurus: strcpy_s(students[j].sign, "Taurus");
			break;
		case Gemini: strcpy_s(students[j].sign, "Gemini");
			break;
		case Cancer: strcpy_s(students[j].sign, "Cancer");
			break;
		case Leo: strcpy_s(students[j].sign, "Leo");
			break;
		case Virgo: strcpy_s(students[j].sign, "Virgo");
			break;
		case Libra: strcpy_s(students[j].sign, "Libra");
			break;
		case Scorpio: strcpy_s(students[j].sign, "Scorpio");
			break;
		case Sagittarius: strcpy_s(students[j].sign, "Sagittarius");
			break;
		case Capricorn: strcpy_s(students[j].sign, "Capricorn");
			break;
		case Aquarius: strcpy_s(students[j].sign, "Aquarius");
			break;
		case Pisces: strcpy_s(students[j].sign, "Pisces");
			break;
		default: printf("\nERRORSIGN\n");
			break;
		}
		students[j].DOF.day = 1 + rand() % 30;
		students[j].DOF.month = 1 + rand() % 11;
		students[j].DOF.year = 1945 + rand() % 70;
		students[j].group = 1 + rand() % 10;
		students[j].subject.firts = 1 + rand() % 10;
		students[j].subject.second = 1 + rand() % 10;
		students[j].subject.third = 1 + rand() % 10;
		students[j].subject.fourth = 1 + rand() % 10;
	}
}

void AvScore(STUDENT *students, int * countOfStudents)
{
	for (int i = 0; i < *countOfStudents; i++)
	{
		students[i].average = (students[i].subject.firts + students[i].subject.second + students[i].subject.third + students[i].subject.fourth) / 4;
	}
}

void StudInformPrint(STUDENT *students, int * countOfStudents)
{
	for (int i = 0; i < *countOfStudents; i++)
	{
		printf("%s %c.%c\n%d.%d.%d %s\nСредний балл: %d\n\n", students[i].Name.lName, students[i].Name.fName[0], students[i].Name.mName[0],
			students[i].DOF.day, students[i].DOF.month, students[i].DOF.year, students[i].sign, students[i].average);
	}
}