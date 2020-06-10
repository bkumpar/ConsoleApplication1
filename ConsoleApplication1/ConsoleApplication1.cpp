// ConsoleApplication1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include "Message.h"

int main()
{
	Message * m1 = new Message(L"Hello world");
	m1->show();
	delete m1;

	Message m2;
	m2.setText(L"New text");
	m2.show();

	return 0;
}

