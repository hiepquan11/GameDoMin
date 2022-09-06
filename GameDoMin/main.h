#pragma once
#include <iostream>
#include <ctime>

#define ClickTrai 0x5A
#define ClickPhai 0x58

struct CauTrucBang
{
	short SDong = 0;
	short SCot = 0;
	short SSoBom = 0;
	short SSoODaMo = 0;
	short SSoCo = 0;
};

struct CauTrucO
{
	bool BCoBom = false;
	bool BDaMo = false;
	bool BCamCo = false;
	short SBomLanCan = 0;

};