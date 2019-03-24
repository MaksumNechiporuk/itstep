#include"Person.h"
#include"Server.h"
#include"Sender.h"
#include"Header.h"


int main()
{
	Server *s = new Server();
	Sender *p1 = new Sender(s);
	Sender *p2 = new Sender(s);
	p1->SetName("Petrov");
	p2->SetName("Ivanov");
	s->SetSender(p1, p2);
	p1->SendMessage(p1, p2, "HI");
	s->SetSender(p2, p1);
	p2->SendMessage(p2, p1, "HI");
	system("pause");
}