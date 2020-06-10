// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Message.h"

int main()
{
	Message * m = new Message(L"Hello world");
	m->show();
	delete m;

	return 0;
}

