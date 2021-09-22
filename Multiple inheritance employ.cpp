#include<iostream>
#include<stdio.h>
#include<conio.h>
using namespace std;
class company
{
char Com_name[30];
int year;
public:
void getdata();
void putdata();
};
void company :: getdata()
{
cout<<"\n Enter Name of Company:";
cin>>Com_name;
cout<<"\n Enter Year of Company: ";
cin>>year;
}
void company::putdata()
{
cout<<"\n Name Of company:"<<Com_name;
cout<<"\n Year Of Company:"<<year;
}; 
class worker
{
char name[30];
int age;
public:
void get()
{
cout<<"\n Enter Name of Employee:";
cin>>name;
cout<<"\n Enter Age of Employee:";
cin>>age;
}
void put()
{ cout<<"\n Name of Employee:"<<name;
cout<<"\n Age of Employee:"<<age;
}
};
class product: public company, public worker
{
char prod_name[30];
float price;
public:
void get1()
{ getdata();
get();
cout<<"\n Enter the product name:";
cin>>prod_name;
cout<<"\n Enter the price:";
cin>>price;
}
void put1()
{ putdata();
put();
cout<<"\n The Product name is:"<<prod_name;
cout<<"\n The Product Price:"<<price;
}
};  
int main()
{

product p1;
p1.get1();
p1.put1();
getch();
return 0;
}
