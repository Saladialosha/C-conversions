// Basic to Class
// class will have hr and min, pred defined will be int variable
// assig the value fo int type tp hr and min
// hint: constructor to achive this conversion
#include<iostream>
using namespace std;
class time
{
	private:
		int hr,min;
	public:
		time()
		{
			hr=0;
			min=0;
		}
		 void show()
		{
			cout<<hr<<" "<<min<<endl;
		}
		time(int a)
		{
			hr = a/60;
			min = a%60;
		}
};
main()
{
 time obj;	
 obj.show();
 int m;
 m = 90;
 obj=m;
 obj.show();
}

