#pragma once
#include"Header.h"
#include"Person.h"
#include"Server.h"
class Server;
class Sender:public Person
{
	Server *_s;
	string my_mes;
	string Receive_mes;
public:
	Sender(Server *s);
	void SendMessage(Sender *s, Sender *to, string message);
	void ReceiveMes(string mes, Sender *s);
};

