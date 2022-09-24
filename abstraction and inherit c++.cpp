#include<iostream>
using namespace std;
class sum
{
private:
	int x,y,z,z1,z2;
	public:
		void add()
		{
			cout <<"enter the value of x and y :"<<endl;
			cin >>x>>y;
			z=x+y;
			cout <<"result is :"<<z<<endl;
		}
		void sub()
		{
			z1=x-y;
			
		}
		void mul()
		{
			z2=x*y;
			
		}
		
		void dis()
		{
			cout<<"result is:"<<z1<<endl;
		    cout<<"result is:"<<z2<<endl;
				
			
		}
		
		
	};
	
		
		
		
		int main()
		{
			sum s;
			s.add();
			s.sub();
			s.mul();
			s.dis();
			
		
return 0;
}











