#include <fstream>
#include <string>

using namespace std;

ifstream fin;
ofstream fout;

void writeWord(string& str) {
	
		fout << str;
		fout << " ";

}

int main() {
	fin.open("in.txt");
	fout.open("out.txt");

	string str;
	int ch;
	while ((ch = fin.get()) != EOF) {
		
			str += static_cast<char>(ch);
		
	}
	writeWord(str);

	return 0;
}