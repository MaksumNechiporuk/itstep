#include <fstream>
#include <string>

using namespace std;

ifstream fin;
ofstream fout;

void writeWord(string& str) {
	if (str.size() >= 7) {
		fout << str;
		fout << " ";
	}
}

int main() {
	fin.open("in.txt");
	fout.open("out.txt");

	string str;
	int ch;
	while ((ch = fin.get()) != EOF) {
		if (ch != ' ') { 
			str += static_cast<char>(ch);
		}
		else {
			writeWord(str);
			str = "";
		}
	}
	writeWord(str);

	return 0;
}