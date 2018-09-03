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
	vector<string> vs{"int","string","char","int","long","float","char","string"};

	vector<string> sv;
	sort(vs.begin(),vs.end());
	for_each(vs.begin(),vs.end(),[](const string &a){cout<<a<<" ";});
	unique_copy(vs.begin(),vs.end(),back_inserter(sv));
	for_each(sv.begin(),sv.end(),[](const string &a){cout<<a<<" ";});
	cout<<endl;
	return 0;
}
