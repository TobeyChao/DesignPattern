#pragma once
enum CashType
{
	CT_NORMAL,
	CT_RETURN,
	CT_REBATE
};

//收费父类
class CashSuper
{
public:
	virtual double AcceptCash(const double money) = 0;
private:

};

//正常
class CashNormal : public CashSuper
{
public:
	double AcceptCash(const double money)
	{
		return money;
	}
private:

};

//返利
class CashReturn : public CashSuper
{
public:
	CashReturn(double _pay, double _return)
	{
		mPay = _pay;
		mReturn = _return;
	}

	double AcceptCash(const double money)
	{
		if (money > mPay)
		{
			return money - mReturn;
		}
		return money;
	}
private:
	double mPay;
	double mReturn;
};

//打折
class CashRebate : public CashSuper
{
public:
	CashRebate(double _rebate)
	{
		mRebate = _rebate;
	}
	double AcceptCash(const double money)
	{
		return money * mRebate;
	}
private:
	double mRebate;
};

//折扣工厂
class CashFactory
{
public:
	CashSuper * GetCashAccept(CashType cashtype, double * parameter)
	{
		switch (cashtype)
		{
		case CT_NORMAL:
			return new CashNormal();
			break;
		case CT_RETURN:
			return new CashReturn(parameter[0], parameter[1]);
			break;
		case CT_REBATE:
			return new CashRebate(parameter[0]);
			break;
		default:
			return nullptr;
			break;
		}
	}
private:
};