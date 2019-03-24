#include "Server.h"




Server::Server()
{
	
}

void Server::SendMessage(string mess, Sender * s)
{
	cout << _s->GetName() << endl;;
	_s->ReceiveMes(mess,s);

}

void Server::SetSender(Sender *a, Sender *b)
{
	_s =a;
	_s1 = b;
}


