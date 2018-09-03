#include<iostream>
#include<string>
#include<list>
#include<numeric>
#include<algorithm>
#include<vector>
#include<fstream>
#include<sstream>
#include<iterator>
using namespace std;




int main()
{
	vector<string> vs{"1","2","3","4","5"};

	list<string> a;
	copy(vs.cbegin(),vs.cend(),inserter(a,a.begin()));
	for_each(a.begin(),a.end(),[](const string &d){cout<<d<<" ";});
	
	list<string> b;
	copy(vs.cbegin(),vs.cend(),front_inserter(b));
	for_each(b.begin(),b.end(),[](const string &d){cout<<d<<" ";});
	cout<<endl;
	
	list<string> c;
	copy(vs.cbegin(),vs.cend(),back_inserter(c));
	for_each(c.begin(),c.end(),[](const string &d){cout<<d<<" ";});
	return 0;
}
