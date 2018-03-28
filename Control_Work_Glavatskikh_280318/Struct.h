#pragma once
//a.шифр подразделени€, содержащий не более трЄх символов(вводим);
//b.план выпуска продукции по кварталам одного года в виде массива(вводим);
//c.фактическое выполнение плана по кварталам одного года в виде массива(вводим);

struct products
{
	char code[5];
	int plan[5];
	int realized[5];
	int realizedCount;
};

//a.фамили€, им€ отчество студента(вводим);
//b.массив оценок в дес€тибалльной системе(вводим);
//c.признак

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


//фамили€, средний возраст, специальность, средний оклад.

struct factory
{
	char lName[20];
	int age;
	char job[15];
	int salary;
};


/*5.	Ѕагаж пассажира характеризуетс€ количеством вещей и общим весом.
¬вести информацию об N пассажирах и определить есть ли среди пассажиров такой,
у которого самый большой багаж по числу и по весу.*/

struct luggage
{	
	char lName[20];
	int countOfThings;
	int weight;
};

/*6.	»меетс€ информаци€ по итогам экзаменов в институте всего в списке N человек.
ѕо каждому из студентов имеютс€ следующие сведени€ :
фамили€, оценка по математике, оценка по информатике и оценка по физике.
¬вести информацию об экзаменах и напечатать количество и фамилии отличников.*/

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


/*7.	Ќапишите программу, котора€ приглашает пользовател€ ввести день, мес€ц и год.
ћес€ц может быть представлен пор€дковым номером, названием или абђбревиатурой.
«атем программа должна возвратить общее количество дней, ис - текших с начала года по указанный день включительно.*/

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

/*9.	ќписать структуру с именем STUDENT, содержащую пол€ :
a.фамили€ и инициалы студента;
b.номер группы;
c.успеваемость(массив из четырех оценок на экзаменах в 5 - бальной системе).
d.ZOD Ц знак зодиака
e.DATE Ц дата рождени€(массив из трех чисел : год, мес€ц, число).*/

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