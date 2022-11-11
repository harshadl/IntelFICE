#include <iostream>
using namespace std;
struct student {
   int rollNo;
   char name[50];
   float marks;
   char grade;
};
int main() {
   struct student s = { 12 , "Harry" , 90 , 'A' };
   cout<<"The student information is given as follows:"<<endl;
   cout<<endl;
   cout<<"Roll Number: "<<s.rollNo<<endl;
   cout<<"Name: "<<s.name<<endl;
   cout<<"Marks: "<<s.marks<<endl;
   cout<<"Grade: "<<s.grade<<endl;
   return 0;
}

