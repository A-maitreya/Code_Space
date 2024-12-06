#include<iostream>
using namespace std;
int main()
{
    int var=20;
    int *poi;
    int ff=69;

    cout<<"Value of pointer: "<<var<<endl;

    cout<<endl<<"Address of pointer: "<<poi<<endl;

    poi=&ff;

    cout<<endl<<"Value of pointer: "<<*poi;

return 0;
}