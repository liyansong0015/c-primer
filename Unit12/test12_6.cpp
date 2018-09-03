#include<iostream>
#include<vector>
using namespace std;

vector<int> * fun()
{
	return new vector<int> ();
}
void fun1(vector<int> *q)
 {
	int in=0;
	while(cin>>in)
	q->push_back(in);

 }
 void fun2(vector<int> * q)
 {
	for(int i=0;i<q->size();i++)
	{
		cout<<(*q)[i]<<endl;
	}
 }
int main()
{
	auto test=fun();
	fun1(test);
	fun2(test);
	delete test;
	return 0;
}
