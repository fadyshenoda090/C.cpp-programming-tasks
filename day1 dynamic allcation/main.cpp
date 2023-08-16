#include <iostream>
#include <string>

using namespace std;

struct Student {
    string name;
    int age;
    string address;
};
void fill(Student *ptr,int number)
{
    for(int i=0;i<number;i++)
    {
        cout<<"enter the name of student"<<i+1<<endl;
        cin>>ptr->name;
        cout<<"enter the age of student"<<i+1<<endl;
        cin>>ptr->age;
        cout<<"enter the address of student"<<i+1<<endl;
        cin>>ptr->address;
        ptr++;
    }
}
void print (Student*ptr,int number)
{
    for(int i=0;i<number;i++)
    {
        cout<<"the name of student"<<i+1<<"\n is: "<<ptr[i].name<<endl;
        cout<<"the age of student"<<i+1<<"\n is: "<<ptr[i].age<<endl;
        cout<<"the address of student"<<i+1<<"\n is: "<<ptr[i].address<<endl;
    }
}
int main()
{
    int i;
    cout<<"enter number of students \n";
    cin>>i;
    Student*arrheap=new Student[i];
    fill(arrheap,i);
    print(arrheap ,i);

    return 0;
    delete[] arrheap;
}
