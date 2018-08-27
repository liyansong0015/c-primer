//全都转换成int形 进行计算了
//结果：55
#include<iostream>
#include<numeric>
#include<algorithm>
#include<vector>
using namespace std;
int main()
{
	vector<double> vi{1.1,2.0,3.5,4.1,5.5,6.1,7.5,8.1,9.5,10.1};//sum 55
	double sum = accumulate(vi.cbegin(),vi.cend(),0);
	cout<<sum<<endl;
	return 0;
}
