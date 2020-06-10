#include "stdafx.h"
#include "Message.h"
#include <iostream>

Message::Message(std::wstring msg) :
		_msg(msg)	
{

}


void Message::show()
{
	std::wcout << _msg << std::endl;
}

