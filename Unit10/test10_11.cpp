#include<iostream>
#include<string>
#include<list>
#include<numeric>
#include<algorithm>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;



bool isShorter(const string &s1 , const string &s2)
{
	return s1.size()<s2.size();
}
int main()
{

	vector<string> vs;
	string data;
	while(cin>>data)
	{
		vs.push_back(data);
	}
	sort(vs.begin(),vs.end());
	auto end_unique = unique(vs.begin(),vs.end());
	vs.erase(end_unique,vs.end());
	stable_sort(vs.begin(),vs.end(),isShorter);
for(string a : vs)
	cout<<a<<endl;


	return 0;
}
