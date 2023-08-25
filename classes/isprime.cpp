#include<iostream>
using namespace std;

bool is_prime(int n){

    if(n<=1){
        return false;
    }
    for(int i = 2; i<=n/2; i++){

        if(n % i == 0){
        return false;
        break;
    }
    }
    return true;
    
}
int main(){
    int n;
    cout<<"enter a no :";
    cin>> n;
    if(is_prime(n))
    cout<< " no. is prime ";
    else
    cout<<" not prime";
}