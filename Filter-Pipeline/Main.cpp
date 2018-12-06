#include "Pipeline.h"
#include "DataSource.h"
#include "ScannerFilter.h"
#include <thread>

int main(int argc, char* argv[])
{
	const auto pipe1 = new Pipeline<char>();
	const auto pipe2 = new Pipeline<tuple<string, string>>();
	auto source = new DataSource("main_.cpp", pipe1);
	auto scanner = new ScannerFilter(pipe1, pipe2);

	thread th1(&DataSource::ProcessData, source);
	thread th2(&ScannerFilter::ProcessData, scanner);
	
	th1.join();
	th2.join();
	system("pause");
	return 0;
}