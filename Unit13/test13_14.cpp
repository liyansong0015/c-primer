#include<iostream>

using namespace std;

int num = 10;
struct numbered{
	public:
		numbered(){mysn=num++;}
		int mysn;
};
void f(numbered s)
{
	cout<<s.mysn<<endl;
}
int main()
{	
	numbered a,b=a,c=b;
	f(a);
	f(b);
	f(c);
	return 0;
}
