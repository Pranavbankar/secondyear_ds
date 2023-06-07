#include<iostream>
using namespace std;
class Program
{
    public:
        
        void area(int a,int b)
        {
        	int area1;
            area1=0.5*b*a;
            cout<<"Area Of Triangle: "<<area1;
        }
        void area(int a)
           {
           	int area2;
            area2=3.14*a*a;
            cout<<"\nArea Of Circle: "<<area2;
            }
};
int main()
{
     Program p;
     p.area(10,15);
     p.area(10);
      return 0;

}
