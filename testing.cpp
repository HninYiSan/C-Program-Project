#include<iostream>
using namespace std;
class Date
{
	int day;	// member data
	string month;
	int year;
	
	public:
	void inputDate(); // method (prototype)	
	void setDate(int,string,int);
	void showDate()
	{
		cout<<"Date = "<<day<<"-"<<month<<"-"<<year<<endl;
	}
};
int main()
{
	Date d1,d2; // create object
//	d1.day = 23; // use member data
//	d1.month = "Feb";
//	d1.year = 2024;
	d1.setDate(23,"Feb",2024);
	d1.showDate(); // use member function
	d2.inputDate();
	d2.showDate();
}

void Date::inputDate()
	{
		cout<<"Enter day: ";
		cin>>day;
		cout<<"Enter month: ";
		cin>>month;
		cout<<"Enter year: ";
		cin>>year;
	}
	
void Date::setDate(int d,string m,int y)
	{
		day = d;
		month = m;
		year = y;
	}