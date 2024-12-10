//Decalrae an Array int arr[size]=[2,3,4,5,6]
//Homogenous i.e. having same datatype use index for accessing 
#include<iostream> 
using namespace std;

int main(){
    int arr[5];
    int n;
    cout<<"Enter Size of Arr: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        int ele;
        cout<<"Enter %d Element: ",i;
        cin>>ele;
        arr[i]=ele;
    }
    int result;
    for(int i=0;i<n;i++){
        if(arr[i]>result){
            result=arr[i];
        }
    }
    cout<<"Max number is: "<<result;
    return 0;
}

