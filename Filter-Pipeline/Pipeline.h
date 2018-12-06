#pragma once
#include <queue>
#include <mutex>
using namespace std;
template<typename T>
class Pipeline
{
public:
	Pipeline() = default;

	Pipeline(const Pipeline&)
	{
	}

	~Pipeline()
	{
	}

	void Write(T t)
	{
		mLock.lock();
		mData.push(t);
		mLock.unlock();
	}

	T Read()
	{
		mLock.lock();
		T data = mData.front();
		mData.pop();
		mLock.unlock();
		return data;
	}

	typename queue<T>::size_type Size()
	{
		return mData.size();
	}

private:
	mutex mLock;
	queue<T> mData;
};