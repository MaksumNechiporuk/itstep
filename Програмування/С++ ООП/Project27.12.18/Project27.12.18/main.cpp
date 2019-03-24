//#include<iostream>
//#include<queue>
//#include<string>
//
//using namespace std;
//
//class Car
//{
//	string producer;
//	string color;
//	int size;
//public:
//	Car(string producer,string color,int size)
//	{
//		this->producer = producer;
//		this->color = color;
//		this->size = size;
//	}
//	friend ostream& operator << (ostream& out, Car &q);
//};
// ostream& operator << (ostream& out, Car &q)
//{
//	 out << q.producer << "  " << q.color << "  " << q.size << endl;
//	return out;
//}
//
//int main()
//{
//	queue <Car> q;
//	q.push(Car("BMW", "red", 20000));
//	q.push(Car("AUDI", "black", 20000));
//	q.push(Car("LADA", "green", 20000));
//	for (size_t i = 0; i < 3; i++)
//	{
//		cout << q.front() << endl;;
//		q.pop();
//		cout << q.size() << endl;;
//	}
//	cout << q.size() << endl;;
//	system("pause");
//}