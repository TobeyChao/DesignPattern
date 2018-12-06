#pragma once
#include "Pipeline.h"
template<typename T1, typename T2>
class Filter
{
protected:
	virtual ~Filter() = default;

public:
	Filter(Pipeline<T1>* input, Pipeline<T2>* output)
		:
		mInput(input),
		mOutput(output)
	{

	}

	virtual void ProcessData() = 0;
protected:
	Pipeline<T1>* mInput;
	Pipeline<T2>* mOutput;
};