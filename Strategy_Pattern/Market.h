#pragma once
#include <string>
#include <vector>

#include "Cash.h"
class Market
{
public:
	Market()
	{
		mCashAccept = new CashNormal();
		mText.push_back(std::wstring(L"----------------------------------------"));
		mPrice = 0.0;
	}
	void AddItem(const double price, const double number)
	{
		double post = mCashAccept->AcceptCash(price * number);
		mPrice += post;

		std::wstring text = L"����:" + std::to_wstring(price) +
			L"\t����:" + std::to_wstring(number) +
			L"\t�ϼ�:" + std::to_wstring(price * number) + 
			L"\t�ۿۺ�:" + std::to_wstring(post);

		mText.push_back(text);
	}
	double GetTotalPrice() const
	{
		return mPrice;
	}
	std::vector<std::wstring> GetDescription()
	{
		return mText;
	}

	void UpdateAccept(CashSuper * cashAccept)
	{
		mCashAccept = cashAccept;
	}
private:
	double mPrice;
	std::vector<std::wstring> mText;
	CashSuper * mCashAccept;
};