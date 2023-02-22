#include<iostream>
using namespace std;
class time_s
{
	int hr , min;
	public:
		time_s(int a , int b)
		{
			hr=a;
			min=b;
		}
		int gethr()
		{
			return hr;
		}
		int getmin()
		{ 
		return min;
		}
};
class time_d
{
	int minutes;
	public:
		time_d()
		{
		} 
		time_d(time_s x)
		{
			int m=x.getmin();
			int h=x.gethr();
			minutes=m+(h*60);
		}
		void show()
		{
			cout<<minutes<<endl;
		}
		friend class time_s;
};
main()
{
	time_s obj(1,30);
	time_d obj1;
	obj1=obj;
	obj1.show();
	
}
