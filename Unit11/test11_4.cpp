#include<algorithm>
#include<iostream>
#include<set>
#include<map>
#include<ctype.h>
#include<string>
using namespace std;


int main()
{
	map<string,int> words;
	string word;
	
	while(cin>>word)
	{
		for(char & i : word)
		{
			i=tolower(i);
		}
		word.erase(remove_if(word.begin(),word.end(),[](const char & a){return (a=='.'||a==',');}),word.end());
		words[word]++;
	}
	for(auto w : words)
	{
		cout<<w.first<<" : "<<w.second<<endl;
	}
	return 0;
}
