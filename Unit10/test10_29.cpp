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
	ifstream ifs("/home/liyansong/c-primer/Unit10/test10_28.cpp");
	istream_iterator<string> in(ifs),eof;
	vector<string> vs;
	copy(in,eof,back_inserter(vs));

	copy(vs.begin(),vs.end(),ostream_iterator<string>(cout,"\n"));

	return 0;
}
