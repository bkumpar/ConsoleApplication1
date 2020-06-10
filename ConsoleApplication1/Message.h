#pragma once
#include "stdafx.h"
#include <string>



class Message
{
public:
	Message();
	Message(std::wstring msg);
	void setText(std::wstring msg);
	std::wstring text();
	void show();
private:
	std::wstring _msg;
};