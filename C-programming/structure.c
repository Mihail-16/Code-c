#include <stdio.h>

void ptrStruct(void);
void passData(void);

int main()
{
	passData();	
}

void ptrStruct(void)
{
	typedef struct person {
		int age;
		float weight;
		char name[20];
	} person;

	person andrea = {21, 74.23, "andrea"};
	person alessia = {21, 64, "alessia"};
	printf("the age of person is: %d, the wight is %.2f, the name is %s\n", andrea.age, andrea.weight, andrea.name);

	person *ptr = &alessia;

	printf("the age of person is: %d, the wight is %.2f, the name is %s\n", ptr->age, ptr->weight, ptr->name);
}

void passData(void)
{
	typedef struct employer {
		char name[20];
		int age;
		int salary;
		char work[20];
	} employer;

	employer webDev[3];
	
	for(int i = 0; i < 3; i ++)
	{
		printf("insert the name of employer, the age, the salary and the work that have to do [%d]\n", i + 1);
		scanf("%s%d%d%s", webDev[i].name, &webDev[i].age, &webDev[i].salary, webDev[i].work);
	}

	for(int i = 0; i < 3; i ++)
		printf("\nthe name si: %s, the age is %d, the salary is %d, the work is %s\n", webDev[i].name, webDev[i].age, webDev[i].salary, webDev[i].work);
}	

	

	

