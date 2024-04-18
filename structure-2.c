#include<stdio.h>


	// Write a Program to create an Employee Record System with an Array of objects for a given N number of employees using structure. Consider the below-mentioned attributes in the Employee structure
	
	/*
	    - emp_id
        - emp_name
        - emp_age
        - emp_role
        - emp_city
        - emp_experience
        - emp_company_name
	*/
	
struct Employee{
	int id;
	char name[100];
	int age;
	int role;
	char city[100];
	int  experience;
	char  company_name[100];
};

main()
{
	int i,n;
	
	printf("how many Employee data enter = ");
	scanf("%d",&n);
	
	struct Employee e[n];
	
	for(i=0; i<n; i++)
	{
		printf("enter Employee id = ");
	    scanf("%d",&e[n].id);
	
	    printf("enter Employee name = ");
	    scanf("%s",&e[n].name);
	
	    printf("enter Employee age = ");
	    scanf("%d",&e[n].age);
	
	    printf("enter Employee role = ");
	    scanf("%d",&e[n].role);
	
	    printf("enter Employee city = ");
	    scanf("%s",&e[n].city);
	
	    printf("enter Employee experience = ");
	    scanf("%d",&e[n].experience);
	
	    printf("enter Employee company_name = ");
	    scanf("%s",&e[n].company_name); 
	}
	
	for(i=0; i<n; i++)
	{
		printf("id = %d\n",e[n].id);
		printf("name = %s\n",e[n].name);
		printf("age = %d\n",e[n].age);
		printf("role = %d\n",e[n].role);
		printf("city = %s\n",e[n].city);
		printf("experience = %d\n",e[n].experience);
		printf("company_name = %s\n",e[n].company_name);
	}
}