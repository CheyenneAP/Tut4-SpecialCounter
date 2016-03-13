#pragma once
#include<iostream>
#include<string.h>
class SpecialCounter
{

private:
	int start;
	int end;
	int cur;
	int step;
public:

	SpecialCounter(int start = 0, int end = 255, int cur = 0, int step = 1);
	~SpecialCounter();
	int getCurrent();
	SpecialCounter operator++(int);//postfix
	SpecialCounter operator++();//prefix
	SpecialCounter operator--(int);//postfix
	SpecialCounter operator--();//prefix
};

