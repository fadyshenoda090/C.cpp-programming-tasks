#include <iostream>

using namespace std;
template<class K>
K sum(K x,K y)
{
    return x+y;
}
template<class I,class F>
F sum(I x,F y)
{
    return x+y;
}
template <class t>
class distanc
{
    t num1,num2;
public:
    distanc (t _num1,t _num2 )
    {
        num1=_num1;
        num2=_num2;
    }

};
int main()
{
    cout<<sum<float>(1.5,1.5);
    distanc<int> d (5,5);
    return 0;
}
