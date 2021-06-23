#include <iostream>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
	auto start = chrono::system_clock::now();
	// This and "end"'s type is
	chrono::time_point
	{
		this_thread::sleep_for(chrono::seconds(2));
	}
	auto end = chrono::system_clock::now();
    chrono::duration<double> elapsed = end - start;
	cout << "Elapsed time: " << elapsed.count() << "s"; 
}
