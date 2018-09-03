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
	sort(vs.begin(),vs.end());				   //����
	auto new_end = unique(vs.begin(),vs.end());//ȥ�� ���ظ���Ԫ�ط��ں��
	vs.erase(new_end,vs.end());				   //����ظ�Ԫ��
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
