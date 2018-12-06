#pragma once
#include "Filter.h"
#include <fstream>
#include <sstream>
#include <string>
#include <iostream>
class DataSource : public Filter<char, char>
{
public:
	DataSource(string fileName, Pipeline<char>* pipe)
		:
		Filter<char, char>(nullptr, pipe),
		mFileName(fileName)
	{
	}
	~DataSource() = default;

	void ProcessData() override
	{
		std::ifstream t(mFileName);
		std::stringstream buffer;
		buffer << t.rdbuf();
		auto contents(buffer.str());
		for (auto ch : contents)
		{
			mOutput->Write(ch);
			cout << "InFilter-DataSource" << ch << endl;
		}
		mOutput->Write('\0');
	}
private:
	string mFileName;
};