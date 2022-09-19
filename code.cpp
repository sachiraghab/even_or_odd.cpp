#include<iostream>
using namespace std;
int main(){
    int n, remain;
    cout<<"Enter a number"<<endl;
    cin>>n;
    remain = n%2;
    if(remain == 1){
        cout<<n<<" is an odd."<<endl;
    }
    else{
        cout<<n<<" is an even."<<endl;
    }
    return 0;
}
