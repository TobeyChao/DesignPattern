#pragma once
#include <tuple>

#include "Filter.h"
#include "Keyword.h"
class ScannerFilter : public Filter<char, tuple<string, string>>
{
public:
	ScannerFilter(Pipeline<char>* in_pipe, Pipeline<tuple<string, string>>* out_pipe)
		:
		Filter<char, tuple<string, string>>(in_pipe, out_pipe)
	{
	}
	~ScannerFilter() = default;
	void ProcessData() override
	{
		string line;

		string syn;
		string token;

		char chTmp;
		auto readFlag = Read(chTmp);

		while (chTmp != '\0')
		{
			if (!readFlag)
			{
				readFlag = Read(chTmp);
				continue;
			}
			if (chTmp != '\n')
			{
				line += chTmp;
				readFlag = Read(chTmp);
				continue;
			}
			else
			{
				readFlag = Read(chTmp);
			}
			size_t index = 0;
			while (index < line.size())
			{
				char ch = line.at(index);
				if (isalpha(ch) != 0)// If the ch is a alpha.
				{
					do
					{
						token += ch;
						index++;
						if (index >= line.length())
							break;
						ch = line[index];
					} while (ch != '\0' && (isalpha(ch) || isdigit(ch)));

					// Then determine if it is a keyword or an identifier.
					syn = IsKeyword(token) ? "keyword" : "identifier";
				}
				else if (ispunct(ch) != 0)// If the ch is a punct.
				{
					index++;
				}
				else if (isdigit(ch) != 0)// If the ch is a digit.
				{
					index++;
				}
				else
				{
					index++;
				}
				if (!token.empty())
				{
					mOutput->Write({ syn, token });
					cout << "InFilter-Scanner" << syn << "-" << token << endl;
					token.clear();
				}
			}
			line.clear();
		}
	}
private:
	static bool IsKeyword(const string& str)
	{
		return !(keyword.find(str) == keyword.end());
	}
	bool Read(char& ch) const
	{
		if (mInput->Size() > 0)
		{
			ch = mInput->Read();
			return true;
		}
		return false;
	}
};