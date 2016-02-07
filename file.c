#include<stdio.h>

struct student
{
 int roll;
 char name[20];
 int m1,m2,m3,m4,m5,m6;
 float avg;
}s[3]; 


void main()
{
 File *fp;
 int i,max1=0,max2=0,max3=0,max4=0,max5=0;
 char c;
 fp = fopen("Student.txt",r+);
 while(!feof(fp))
 {
   for(i=0;i<3;i++)
   {
    fscanf(fp,"%d",%s",%d,%d,%d,%d,%d",&e[i].roll,e[i].name,&e[i].m1,&e[i].m2,&e[i].m3,&e[i].m4,&e[i].m5);
    e[i].avg = (e[i].m1+e[i].m2+e[i].m3+e[i].m4+e[i].m5)/5;
    
   }
 }
 for(i=0;i<3;i++)
 {
   if(max1 > e[i].m1)
   {
     max1 = e[i].m1;
   }
   if(max2 > e[i].m2)
   {
     max2 = e[i].m2;
   }   
   if(max3 > e[i].m3)
   {
     max3 = e[i].m3;
   }
  if(max4 > e[i].m4)
   {
     max4 = e[i].m4;
   }
  if(max5 > e[i].m5)
   {
     max5 = e[i].m5;
   }
 } 
 for(i=0;i<3;i++)
 {
  if(e[i].m1==max1)
  {
    printf("The name of student is %s", e[i].name);
  }  
  if(e[i].m2==max2)
  {
    printf("The name of student is %s", e[i].name);
  } 
  if(e[i].m3==max3)
  {
    printf("The name of student is %s", e[i].name);
  } 
  if(e[i].m4==max4)
  {
    printf("The name of student is %s", e[i].name);
  } 
  if(e[i].m5==max5)
  {
    printf("The name of student is %s", e[i].name);
  } 
 }  
}
 
