#include<stdio.h>


	//Write a Program to create Student Record System for 3 students using structure. Consider the below-mentioned attributes in the Student structure:
	
    /*
        - stu_id
        - stu_name
        - stu_age
        - stu_course
        - stu_city
        - stu_standard
        - stu_school
    */

struct student{
	int id;
	char name[100];
	int age;
	char cours[50];
	char city[50];
	int std;
	char school[100];
};

main()
{
   struct student s,s1,s2;
   
   s.id =4;
   strcpy(s.name,"khushi");
   s.age =23;
   strcpy(s.cours,"full_stack_devlopment");
   strcpy(s.city,"surat");
   s.std =12;
   strcpy(s.school,"red_&_white");
   
   printf("id = %d\n",s.id);
   printf("name = %s\n",s.name);
   printf("age = %d\n",s.age);
   printf("cours = %s\n",s.cours);
   printf("city = %s\n",s.city);
   printf("std = %d\n",s.std);
   printf("school = %s\n",s.school);
   
   printf("\n-------------------------------\n");
   
   s1.id =5;
   strcpy(s1.name,"krishna");
   s1.age =20;
   strcpy(s1.cours,"web_designer");
   strcpy(s1.city,"vadodra");
   s1.std =10;
   strcpy(s1.school,"red_&_white");
   
   printf("id = %d\n",s1.id);
   printf("name = %s\n",s1.name);
   printf("age = %d\n",s1.age);
   printf("cours = %s\n",s1.cours);
   printf("city = %s\n",s1.city);
   printf("std = %d\n",s1.std);
   printf("school = %s\n",s1.school);
   
   printf("\n----------------------------------\n");
   
   s2.id =4;
   strcpy(s2.name,"kruti");
   s2.age =19;
   strcpy(s2.cours,"coummers");
   strcpy(s2.city,"rajkot");
   s2.std =12;
   strcpy(s2.school,"sanskar_tirth");
   
   printf("id = %d\n",s2.id);
   printf("name = %s\n",s2.name);
   printf("age = %d\n",s2.age);
   printf("cours = %s\n",s2.cours);
   printf("city = %s\n",s2.city);
   printf("std = %d\n",s2.std);
   printf("school = %s\n",s2.school);
   
}