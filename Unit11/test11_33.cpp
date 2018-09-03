#include<iostream>
#include<map>
#include<fstream>
#include<sstream>


using namespace std;
map<string , string> buildMap(ifstream & map_file)
{
	map<string ,string> trans_map;
	string key,value;
	while(map_file>>key&&getline(map_file,value))
	{
		if(value.size()>=1)
			trans_map[key]=value.substr(1);
		else
			throw runtime_error("no rule for "+key);
	}
	return trans_map;
}

void word_transform(ifstream & map_file,ifstream & input)
{
	auto trans_map=buildMap(map_file);
	string text;
	while(input>>text)
	{
		if(trans_map.find(text)!=trans_map.end())
		{
			text=trans_map[text];
			cout<<text<<" ";
		}else
			cout<<text<<" ";
	}
	cout<<endl;

}

int main()
{
	ifstream mf("/home/liyansong/c-primer/Unit11/rlus");
	ifstream ii("/home/liyansong/c-primer/Unit11/file");
	word_transform(mf,ii);
	return 0;
}



