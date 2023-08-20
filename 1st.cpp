#include<iostream>
using namespace std;
class Triangle{
	public:  //Access specifier
	float base,height,area;
	void getdataa()
	{
		cout<<"Enter the base:";
		cin>>base;
		cout<<"Enter the height:";
		cin>>height;
	}
	
	void Calculate_area()
	{
		area=0.5*base*height;
	cout<<"Area is:"<<area;
	}
};

int main()
{
	Triangle obj;
	obj.getdataa();
	obj.Calculate_area();
	return 0;
}
