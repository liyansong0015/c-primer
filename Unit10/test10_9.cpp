#include<iostream>
#include<string>
#include<list>
#include<numeric>
#include<algorithm>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;




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
	for(string a : vs)
	cout<<a<<endl;
	return 0;
}
