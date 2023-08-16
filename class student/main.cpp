#include <iostream>

using namespace std;

class student
{
private:
    string name;
    int age,grade;
    string address;
public:
    void setname( string _name)
    {
        if(_name.length()>7&&_name.length()<15)
        {
            name=_name;
        }
        else
        {
            name="\n err\n";
        }
    }
    string getname()
    {
        return name;
    }
    void setage(int _age)
    {
        if( _age>19 && _age<21)
        {
            age=_age;
        }
        else
        {
            age=0;
        }
    }
    int getage()
    {
        return age;
    }
    void setgrade(int _grade)
    {
        if(_grade<=100 &&_grade>0)
        {
            grade=_grade;
        }
        else
        {
            cout<<"err enter a valid grade\n";
        }
    }
    int getgrade()
    {
        return grade;
    }
    void setaddress( string _address)
    {
        address=_address;
    }
   string getaddress()
    {
        return address;
    }
    void print()
    {
        cout<<getname()<<getage()<<endl<<getgrade()<<endl<<getaddress()<<endl<<endl;
        if(grade>=50)
        {
            cout<<"success\n";
        }
        else
        {
            cout<<"fail\n";
        }
    }
};
int main()
{
    string name,address;
    int age,grade,num;
    cout<<"enter number of students\n";
    cin>>num;

    //student* st=new student();
    for(int i=0; i<num; i++)
    {
        cout<<"enter name of st :"<<i+1<<endl;
        cin>>name;
        cout<<"enter age of st :"<<i+1<<endl;
        cin>>age;
        cout<<"enter grade of st :"<<i+1<<endl;
        cin>>grade;
        cout<<"enter address of st :"<<i+1<<endl;
        cin>>address;
        student st;
        st.setname(name);
        st.setage(age);
        st.setgrade(grade);
        st.setaddress(address);
        st.print();
    }
    return 0;
}
