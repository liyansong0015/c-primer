#include<iostream>
#include<string>
#include<list>
#include<numeric>
#include<algorithm>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;



bool fun(string & s)
{
	return s.size()>=5 ;
}
int main()
{	
	vector<string> vs{"aaaaaaaaa","aa","aaaaaa","afdsgds"};
	auto pp=partition(vs.begin(),vs.end(),fun);
	for(auto i = vs.begin();i!=pp;i++)
	cout<<*i<<endl;
	return 0;
}
