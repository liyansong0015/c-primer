#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main()
{
	vector<int> vi{1,2,3,4,5,6,7,8,10,6,1,11,6,7,6,5};
	cout<<count(vi.cbegin(),vi.cend(),6)<<endl;
	return 0;
}
