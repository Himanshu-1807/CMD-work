#include<iostream>
using namespace std;
class box
{
	private:
		int l,b,h;
	public:
		box()
		{
			l=b=h=00;
		}
		box(int a,int b,int c)
		{
			this->l=a;this->b=b;this->h=c;
		}
		void display()
		{
			cout<<"\n Length = "<<this->l<<"\n Breadth = "<<this->b<<"\n Height = "<<this->h<<endl;
		}
		box(const box & obj)
		{
			this->l=obj.l;
			this->b=obj.b;
			this->h=obj.h;
		}
};

int main897()
{
	box b1(65,52,86);
	b1.display();
	try
	{
		int a=1,b=0;
	if (b==0)	
	throw 1;
	}
	catch(int a)
	{
		cout<<"brobr likh n";
	}

	
}
