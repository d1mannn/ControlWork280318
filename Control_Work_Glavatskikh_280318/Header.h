#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <time.h>
#include <string.h>
#include <Windows.h>
#include "Struct.h"

int TaskNumb();
void CompanyCode(products *company, int *length);
void SalesPlan(products * company);
void ReaslSales(products * company, int * length);
void SortStruct(products * company, int *length);
void PrintStruct(products * company, int * length);
void RandomPeople(student *students, int * countOfStudents);
void CopyNames(int *from, char *to, int *length);
void Scores(student * students, int * length);
void PrintStudents(student *stundets, int * length);
void StudentsSort(student * students, int *length);
void GoodOrBad(student * students, int * length);
void Average(student *stundets, int * length);
void FactoryWorkers(factory *workers, int *countOfWorkers, int *count0, int*count1);
void PrintWorkers(factory * workers, int * length, int *count0, int*count1);
void Passengers(luggage * passenger, int *countOfPass);
void MaxWeight(luggage * passenger, int *countOfPass, int * index);
void PrintPassengers(luggage *passenger, int *countOfPass, int * index);
void Students(exams * student, int * countOfStudents);
void AverageScores(exams * students, int * length);
void SortStudentsExams(exams * students, int * length);
void StudPrintExams(exams * students, int * length);
void DateFilling(date *day);
void PrintYear(date * day);
void RandomPeople2(STUDENT *students, int * countOfStudents);
void AvScore(STUDENT *students, int * countOfStudents);
void StudInformPrint(STUDENT *students, int * countOfStudents);