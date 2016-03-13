#include "SpecialCounter.h"
using namespace std;

SpecialCounter::SpecialCounter(int s, int e, int c, int steps)
{
	end = e;
	start = s;
	
	if (c < s || c > e)
		cur = s;
	else
		cur = s;
	step = steps;
}


SpecialCounter::~SpecialCounter()
{
}

int SpecialCounter::getCurrent()
{
	return cur;
};
//postfix form
SpecialCounter SpecialCounter::operator++(int)
{
	SpecialCounter spctr(start, end, cur, step);
	cur = cur + step;
	if (cur > end)
		cur = start;
	return spctr;
};
//postfix form
SpecialCounter SpecialCounter::operator--(int)
{
	SpecialCounter spctr(start, end, cur, step);
	cur = cur - step;
	if (cur < start)
		cur = end;
	return spctr;
};
//prefix form
SpecialCounter SpecialCounter::operator++()
{
	cur= cur + step;
	if (cur > end)
		cur = start;
	return SpecialCounter(start, end, cur, step);
};
//prefix form
SpecialCounter SpecialCounter::operator--()
{
	cur = cur - step;
	if (cur < end)
		cur = end;
	return SpecialCounter(start, end, cur, step);
};
