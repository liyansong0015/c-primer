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
{	vector<int> vi{1,2,3,4,5,6,7,8};
	fill_n(vi.begin(),vi.size(),0);
	for(vector<int>::iterator i=vi.begin();i!=vi.end();i++)
	{
		cout<<*i<<endl;
	}
	return 0;
}
