#include<iostream>
#include<string>
 using namespace std;
 
 class media
 {
 	protected:
 		
 	string title;
	float price; 
	
	public:
	media(){
		title="";
		price=0.0;
		
	} 
	
	media(string t,float p){
		title=t;
		price=p;
		
	}
 		
 };
 
 class book:public media
 {
 	int p_count;
 	
 	public:
 		book(){
 			p_count=0;
		 }
		 
		 book(string t,float p,int pc):media(t,p)
		 {
		 	p_count=pc;
		 }
		 
	void display(){
		cout<<"title:"<<title<<"\n";
		cout<<"price"<<price<<"\n";
		cout<<"page count:"<<p_count;
	}
 };
 
 class CD : public media
 {
 float time;
 public:
 CD()
 {
 time=0.0;
 
 }
 CD(string t,float p,float tim):media(t,p)
 {
 
 time=tim;
 
 }
 
 void display()
 {
 cout<<"title :"<<title<<endl;
 cout<<"Price: "<<price<<endl;
 
 cout<<"time in minutes :"<<time<<endl;
 } 
 };
int main()
{
 cout<<endl<<"Book information"<<endl;
 book Bo("Java Programming",1000,500);
 Bo.display();
 
 cout<<endl<<"\nvideo information"<<endl;
 CD cd("C++ programming ",100,125);
 cd.display();
 return 0;
 }
 
