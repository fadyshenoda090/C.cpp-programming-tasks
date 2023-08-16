#include <iostream>

using namespace std;

float multiply(float num1,float num2)
{
    return num1*num2;
};
double multiply(double num1,double num2)
{
    return num1*num2;
}
int multiply(int num1,int num2)
{
    return num1*num2;
}

int main()
{
    int i;
    int d;
    cout<<"enter two numbers\n";
    cin>>i>>d;
    cout<<multiply(i,d);
    return 0;
}
