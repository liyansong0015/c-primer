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
	istream_iterator<string> in(cin),eof;
	vector<string> vs;
	copy(in,eof,back_inserter(vs));
	sort(vs.begin(),vs.end());

	copy(vs.begin(),vs.end(),ostream_iterator<string>(cout,"\n"));

	return 0;
}
