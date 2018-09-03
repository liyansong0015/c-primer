#include<iostream>
#include<string>
#include<list>
#include<numeric>
#include<algorithm>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;

void elimdups(vector<string> &vs)//
{
	sort(vs.begin(),vs.end());				   //排列
	auto new_end = unique(vs.begin(),vs.end());//去重 将重复的元素放在后边
	vs.erase(new_end,vs.end());				   //清除重复元素
}
void biggies(vector<string> &words,int sz)
{
	elimdups(words);

	stable_sort(words.begin(),words.end(),
		[](const string &a ,const string &b)
			{return a.size()<b.size();});
	
	auto fb = find_if(words.begin(),words.end(),
					[sz](const string &a)
						{return a.size()>=sz;});
	auto count = words.end()-fb;
	cout<<" "<<count<<endl;
	for_each(fb,words.end(),[](const string &s){cout<<s<<" ";});
	cout<<endl;

}


int main()
{
	vector<string> words{"asd","asdafasd","asdas","asd","vfad","abr","grgrg","rgwerq","asczx"};
	biggies(words,5);
	return 0;
}
