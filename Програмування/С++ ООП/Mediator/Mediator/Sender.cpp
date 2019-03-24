#include "Sender.h"



Sender::Sender(Server * s)
{
	_s = s;
}

void Sender::SendMessage(Sender * s, Sender * to, string message)
{
	_s->SendMessage(message, to);
}

void Sender::ReceiveMes(string mes, Sender * s)
{
	cout << mes << endl;
	cout<<s->GetName() << endl;
}
