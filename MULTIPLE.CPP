#include<iostream.h>
#include<conio.h>
class student
{ char name[20];
int rollno;
public:
   void senter()
   {  cout<<"enter name of student: "<<endl;
   cin>>name;
   cout<<"enter roll no :"<<endl;
   cin>>rollno;
   }
   void sshow()
   { cout<<"name of student: "<<name<<endl;
   cout<<"roll no "<<rollno<<endl;
   }
};
class teacher
{  char tname[30];
int clas;
public:
  void tenter()
  {
  cout<<"enter teacher's name:"<<endl;
  cin>>tname;
  cout<<"enter class: "<<endl;
  cin>>clas;
  }
  void tshow()
  {
  cout<<"class teacher:"<<tname<<endl;
  cout<<"class:"<<clas<<endl;
  }
};
class school:public student,public teacher

{   char sname[30];
public:
void enter()
{
cout<<"enter school name :"<<endl;
cin>>sname;
student::senter();
teacher::tenter();
}
void show()
{
  cout<<"school name; "<<sname<<endl;
  student::sshow();
  teacher::tshow();
}
};

void main()
{clrscr();
 school s1;
cout<<"student info;  "<<endl;
s1.enter();
cout<<"entered student's info; "<<endl;
s1.show();
getch();
}