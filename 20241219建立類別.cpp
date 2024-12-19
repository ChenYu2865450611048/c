#include<iostream>
using namespace std;

class myTime{
	public:
		int hour;
		int minute;
		void printTime();
};
void myTime::printTime(){
    cout<<hour<<":"<<minute<<"\n";
}
int mian(){
   myTime now, open;
   now.hour =8;
   now.minute =18;
   cout<<"現在時間";
   now.printTime();
   open.hour =9;
   open.minute =10;
   cout<<"開張時間";
   open.printTime();
	
} 
