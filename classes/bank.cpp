#include<iostream>
#include<stdio.h>
#include<string.h>

using namespace std;

class bank
{
        int acno;
        char nm[100], acctype[100];
        float bal;  
   public:
        bank(int accno, char *name, char *acc_type, float balance)  //Parameterized Constructor
        {
                acno=accno;
                strcpy(nm,name);
                strcpy(acctype,acc_type);

                bal=balance;
        }
        void deposit();
        void withdraw();
        void display();
};
void bank::deposit()   
{
        int damt;
        cout<<" Enter Deposit Amount = ";
        cin>>damt;
        bal+=damt;
}
void bank::withdraw()  
{
        int wamt1;
        cout<<"\n Enter Withdraw Amount = ";
        cin>>wamt1;
        if(wamt1>bal)
                cout<<"\n Cannot Withdraw Amount";
        bal-=wamt1;
}
void bank::display()  
{
        cout<<" Accout No. : "<<acno<<endl;
        cout<<" Name : "<<nm<<endl;
        cout<<" Account Type : "<<acctype<<endl;
        cout<<" Balance : "<<bal<<endl;  
}
int main()
{
        int accno;
        char name[100], acctype[100];
        float balance;
        cout<< "Enter Details:"<<endl ;
        
        cout<<" Accout No. ";
        cin>>accno;
        cout<<" Name : "<<endl;
        cin>>name;
        cout<<" Account Type : "<<endl;
        cin>>acctype;
        cout<<" Balance : "<<endl;
        cin>>balance;
  
        bank b1(accno, name, acctype, balance);  
        b1.deposit(); 
        b1.withdraw(); 
        b1.display(); 
        return 0;
}