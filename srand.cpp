#include<iostream>
#include<ctime>
#include<cstdlib>
using namespace std;

int main()
{
	srand(time(0));
	cout<<(rand()%6)<<endl;
	cout<<(rand()%6)+1<<endl;
	cout<<(rand()%6)+2<<endl;
	return 0;
}
