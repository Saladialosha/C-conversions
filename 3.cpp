#include<iostream>
using namespace std;
class time_d     // destination class
{
	int minutes;
	public:
		time_d()
		{
		}
		void show()
		{
			cout<<" "<<minutes<<endl;
		}
		friend class time_s;
};
class time_s     // source class
{
	int hr , min;
	public:
		time_s( int a , int b)
		{
		hr = a;
		min = b;	
		}
		void show()
		{
			cout<<hr<<" "<<min<<endl;
		}
		operator time_d ()
		{
			time_d m;
			m.minutes = (hr*60)+min;
			return m;
		}
};
main()
{
	time_s obj(1,30);
	obj.show();
	time_d obj1;
	obj1=obj;
	obj1.show();
	
}
