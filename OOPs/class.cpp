#include<iostream>
using namespace std;
class signup{
    //string format;
    public:
    string first_name;
    string email;
    string password;

void displayInfo(){
    cout<<"Firstname: "<<first_name<<endl;
}
};
int main(){
    signup user; //object creation
    user.first_name="Amit";
    user.email="abc@xxx.com";
    user.password="1234";
    user.displayInfo();
    return 0;
}