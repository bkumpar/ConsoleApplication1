#include "stdafx.h"
#include "Message.h"
#include <iostream>


Message::Message() :
	_msg(L"")
{

}

Message::Message(std::wstring msg) :
		_msg(msg)	
{

}

void Message::setText(std::wstring msg)
{
	_msg = msg;
}

std::wstring Message::text()
{
	return _msg;
}

void Message::show()
{
	std::wcout << _msg << std::endl;
}

