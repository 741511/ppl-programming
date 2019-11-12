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
class teacher:public student
{  char tname[30];
int clas;
public:
  void tenter()
  {
  senter();
  cout<<"enter teacher's name:"<<endl;
  cin>>tname;
  cout<<"enter class: "<<endl;
  cin>>clas;
  }
  void tshow()
  {sshow();
  cout<<"class teacher:"<<tname<<endl;
  cout<<"class:"<<clas<<endl;
  }
};
class school:public teacher

{   char sname[30];
public:
void enter()
{  tenter();
cout<<"enter school name :"<<endl;
cin>>sname;
}
void show()
{ tshow();
  cout<<"school name; "<<sname<<endl;
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