#pragma once
#include "stdafx.h"
#include <string>



class Message
{
public:
	Message(std::wstring msg);
	void show();
private:
	std::wstring _msg;
};