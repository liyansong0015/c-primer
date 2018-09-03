#include<iostream>
#include<set>
#include<map>
#include<string>
using namespace std;


int main()
{
	map<string,int> words;
	string word;
	while(cin>>word)
	{
		words[word]++;
	}
	for(auto w : words)
	{
		cout<<w.first<<" : "<<w.second<<endl;
	}
	return 0;
}
