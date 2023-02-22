// class to basic
#include<iostream>
using namespace std;
class time
{
	int hr , min;
	public:
		time(int a , int b)
		{
			hr = a;
			min = b;
		}
		void show()
		{ 
		cout<<hr<<" "<<min<<endl;
		}
		operator int ()
		{
		int m;
		m=(hr*60)+min;
		return m;	
		}
};
main()
{
	time obj(1,30);
	obj.show();
	int n;
	n;
	n=obj;
	cout<<n<<endl;
	
}
