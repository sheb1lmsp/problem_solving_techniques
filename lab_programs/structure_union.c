#include <stdio.h>
#include <string.h>

struct structure_ex
{	
	int integer;
	float decimal;
	char name[20];
};

union union_ex
{
	int integer;
	float decimal;
	char name[20];
};

void main()
{
	struct structure_ex s = {18,38,"structure"};
	union union_ex u = {18, 38, "Union"};
	printf("Defference between Structure and Union\n");
	printf("Strucure data\t: integer = %d \t decimal = %.2f \t name = %s\n", s.integer, s.decimal, s.name);
	printf("Union data\t: integer = %d \t decimal = %.2f \t name = %s\n", u.integer, u.decimal, u.name);
	printf("Size of structure = %d\n", sizeof(s));
	printf("Size of union = %d\n", sizeof(u));

	printf("\nAccessing all structure and union members at a time..\n");
	s.integer = 80;
	s.decimal = 90;
	strcpy(s.name, "new Structure");
	u.integer = 80;
	u.decimal = 90;
	strcpy(u.name, "new Union");
	printf("Strucure data\t: integer = %d \t decimal = %.2f \t name = %s\n", s.integer, s.decimal, s.name);
	printf("Union data\t: integer = %d \t decimal = %.2f \t name = %s\n", u.integer, u.decimal, u.name);

	printf("\nAccessing one member of a structure and union at a time..\n");
	printf("Structure data\t: ");
	s.integer = 180;
	printf("integer = %d\t", s.integer);
	s.decimal = 190;
	printf("decimal = %.2f\t", s.decimal);
	strcpy(s.name, "C Programming");
	printf("name = %s\n\n", s.name);

	printf("Union data\t: ");
	u.integer = 180;
	printf("integer = %d\t", u.integer);
	u.decimal = 190;
	printf("decimal = %.2f\t", u.decimal);
	strcpy(u.name, "C Programming");
	printf("name = %s\n\n", u.name);
}