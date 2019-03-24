#pragma once
#include"Header.h"
#include"Sender.h"
class Sender;
class Server
{
	Sender *_s;
	Sender *_s1;
public:
	Server();
	void SendMessage(string mess, Sender *s);
	void SetSender(Sender *a,Sender *b);


};

