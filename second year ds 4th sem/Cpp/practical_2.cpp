#include <iostream>
#include <string.h>
using namespace std;
class BankAccount
{
    public:
              string depositor_name;
              int acc_no;
              string acc_type;
              float bal_amount;
              int amount;
   
        BankAccount(string s,double at,string acc,int amt)
       {
            depositor_name=s;
            acc_no=at;
            acc_type=acc;
            bal_amount=amt;
       }
    
         void deposit()
     {
          
          cout<<"Enter amount to be deposited"<<endl;
          cin>>amount;
          bal_amount=bal_amount+amount;
          cout<<"Balance After Depositing="<<bal_amount<<endl;
     }
         void withdraw()
     {
        
        cout<<"Enter amount to be withdrawn"<<endl;
        cin>>amount;
        bal_amount=bal_amount-amount;
        cout<<"Balance After Withdrawl="<<bal_amount<<endl;
    }
        void display()
     {
    
        cout<<"Name of Accountholder= "<<depositor_name<<endl;
        cout<<"Account No= "<<acc_no<<endl;
        cout<<"Account Type= "<<acc_type<<endl;
        cout<<"Balance Amount= "<<bal_amount<<endl;
    }
    
};
int main() 
{
    BankAccount a("Pranav Bankar",57837295,"Current Account",5000);
    
    a.deposit();
    cout<<"\n-----------------------------------------\n";
    a.withdraw();
    cout<<"\n-----------------------------------------\n";
    a.display();
    
    return 0;
}

