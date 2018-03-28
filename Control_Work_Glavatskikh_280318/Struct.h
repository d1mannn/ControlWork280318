#pragma once
//a.���� �������������, ���������� �� ����� ��� ��������(������);
//b.���� ������� ��������� �� ��������� ������ ���� � ���� �������(������);
//c.����������� ���������� ����� �� ��������� ������ ���� � ���� �������(������);

struct products
{
	char code[5];
	int plan[5];
	int realized[5];
	int realizedCount;
};

//a.�������, ��� �������� ��������(������);
//b.������ ������ � �������������� �������(������);
//c.�������

struct MyNames
{
	char fName[25];
	char mName[25];
	char lName[25];
};

struct Points
{
	int first;
	int second;
};

struct student
{
	MyNames Name;
	Points point;
	char gender[10];
	int average;
	int score;
	int goodorbad;
};


//�������, ������� �������, �������������, ������� �����.

struct factory
{
	char lName[20];
	int age;
	char job[15];
	int salary;
};


/*5.	����� ��������� ��������������� ����������� ����� � ����� �����.
������ ���������� �� N ���������� � ���������� ���� �� ����� ���������� �����,
� �������� ����� ������� ����� �� ����� � �� ����.*/

struct luggage
{	
	char lName[20];
	int countOfThings;
	int weight;
};

/*6.	������� ���������� �� ������ ��������� � ��������� ����� � ������ N �������.
�� ������� �� ��������� ������� ��������� �������� :
�������, ������ �� ����������, ������ �� ����������� � ������ �� ������.
������ ���������� �� ��������� � ���������� ���������� � ������� ����������.*/

struct subjecstScores
{
	int math;
	int IT;
	int physics;
};

struct exams
{
	char lName[20];
	subjecstScores subjects;
	int average;
};


/*7.	�������� ���������, ������� ���������� ������������ ������ ����, ����� � ���.
����� ����� ���� ����������� ���������� �������, ��������� ��� �������������.
����� ��������� ������ ���������� ����� ���������� ����, �� - ������ � ������ ���� �� ��������� ���� ������������.*/

enum Month
{
	Jan = 1, Feb, March, Apr, May, Jun, Jul, Aug, Sep, Nov, Oct, Dec
};
struct date
{
	int day;
	int month;
	char months[15];
	int year;
};

/*9.	������� ��������� � ������ STUDENT, ���������� ���� :
a.������� � �������� ��������;
b.����� ������;
c.������������(������ �� ������� ������ �� ��������� � 5 - ������� �������).
d.ZOD � ���� �������
e.DATE � ���� ��������(������ �� ���� ����� : ���, �����, �����).*/

struct Subjects
{
	int firts;
	int second;
	int third;
	int fourth;
};

enum signsOfZodiac
{
	Aries, Taurus, Gemini, Cancer, Leo, Virgo, Libra,
	Scorpio, Sagittarius, Capricorn, Aquarius, Pisces
};

struct dateofbirth
{
	int day;
	int month;
	int year;
};

struct STUDENT
{
	MyNames Name;
	int group;
	Subjects subject;
	char sign[15];
	dateofbirth DOF;
	int average;
};