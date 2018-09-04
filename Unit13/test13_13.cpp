#include<string>
#include<iostream>
using namespace std;

struct X {
	X(){cout<<"X()"<<endl;}
	X(const X&){cout<<"X(const X&)"<<endl;}
	X& operator=(const X&)
	{
		cout<<"operator=()"<<endl;
	}
	~X(){cout<<"~X()"<<endl;}
};

int main()
{
	X x;
	X a(x);
    X b;
	b=a;

	return 0;
}
