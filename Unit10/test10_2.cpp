#include<iostream>
#include<vector>
#include<algorithm>
#include<list>
#include<string>
using namespace std;

int main()
{
	list<string> ls{"world","asas","hello","mm","mm","nihao","sawadika","nihao","hello","mm","gg"};
	cout<<count(ls.cbegin(),ls.cend(),"mm")<<endl;
	return 0;
}
