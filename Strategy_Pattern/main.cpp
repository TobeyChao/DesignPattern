#include "Market.h"
#include <iostream>

using namespace std;

int main(int argc, char* argv[])
{
	CashFactory * pCashFactory = new CashFactory();

	Market * pMarket = new Market();

	//折扣参数
	double param[] = { 0.6 };

	//启用折扣
	pMarket->UpdateAccept(pCashFactory->GetCashAccept(CT_REBATE, param));

	pMarket->AddItem(10.5, 3);
	pMarket->AddItem(5, 10);

	std::vector<std::wstring> textList = pMarket->GetDescription();

	wcout.imbue(locale(locale(), "", LC_CTYPE));
	for (auto text : textList)
	{
		wcout << text.c_str() << endl;
	}
	wcout << L"总计:" << pMarket->GetTotalPrice() << endl;

	system("pause");
}