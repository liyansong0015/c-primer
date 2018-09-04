#include<iostream>
using namespace std ;


template <class T>
int compare(const T& a,const T& b)
{
	if(a<b)return -1;
	else return 1;
	return 0;
}

int main()
{
	int a, b;
	a=10;b=20;
	cout<<compare(a,b)<<endl;
	return 0;
}
