#include<iostream>
#include<string.h>
using namespace std;
class stud
{
          public:
          string name, address;
          int rollno;
   
           stud()
         {
            cout<<"Student Details Constructor Called...."<<endl; 
         }
         void read()
        {
        cout<<"--------------------------------------------"<<endl;
        cout<<"Enter Name of Student"<<endl;
        cin>>name;
        cout<<"Enter Rollno"<<endl;
        cin>>rollno;
        cout<<"Enter Address of Student"<<endl;
        cin>>address;
        
       }
       void display()
       { 
         cout<<"--------------------------------------------"<<endl;
         cout<<"STUDENT DETAILS"<<endl;
         cout<<"Name of Student="<<name<<endl;
         cout<<"Roll no="<<rollno<<endl;
         cout<<"Address="<<address<<endl;
      }
       ~stud()
      {
        cout<<"Destructor........Students Details closed";
      }
          
};
int main()
{
    stud s;
    s.read();
    s.display();
    
    return 0;
}

