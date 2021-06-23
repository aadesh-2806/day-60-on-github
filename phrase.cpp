#include<iostream>
#include<ostream>

using namespace std;

int main()
{
	int n=30;
	cout<<oct<<n<<endl;//hex can also be used
	string phrase ="guen";
	cout<<phrase.size()<<endl;
	cout<<phrase[0]<<endl;
	cout<<phrase.find("uen",0)<<endl;
	cout<<phrase.substr(1,3)<<endl;
	cout<<(10/3)<<endl;
	cout<<phrase.max_size()<<endl;
	cout<<phrase.capacity()<<endl;
	//cout<<phrase.begin<<endl;
	//cout<<phrase.end()<<endl;'
	
	
	getline(cin,phrase);
	cout<<phrase<<endl;
	//cin.getline(phrase,5);
	cout<<phrase<<endl;
	phrase +=" there";
	cout<<phrase<<endl;
	phrase.append(" there");
	cout<<phrase<<endl;
	phrase.insert(3,"  ");
	cout<<phrase<<endl;
	phrase.erase(3);
	cout<<phrase<<endl;
	//phrase.pop_back();
	cout<<phrase<<endl;
	phrase.replace(0,1,"there");
	cout<<phrase<<endl;
	cout<<phrase.find_first_of("eae")<<endl;
	
	return 0;
}
