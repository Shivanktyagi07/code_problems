#include<iostream>
using namespace std;
void reachhome(int start,int destination){
cout<<"start "<<start<<"  destination "<<destination<<endl;
    if(start==destination){
        cout<<"pahoch gya";
        return ;
    }

    start++;
    reachhome(start,destination);

}
int main(){
       int start=1,destination=10;
       cout<<endl;
       reachhome(start ,destination);
    return 0;
}





