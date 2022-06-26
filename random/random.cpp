#include <iostream>
#include <string.h>
#include <fstream>
using namespace std;
int main()
{
	string st = "Harry Bhai";
	string st2;
	// opening file
	// // opening file and  writing  it
	ofstream out("randomSample.cpp");
	out << st;
	// opening file and  reading   it
	ifstream in("randomSampleb.cpp");
	// in >> st;
	getline(in, st2);
	cout << st2;
	return 0;
}

// #include <iostream>
// #include <fstream>
// using namespace std;
// int main()
// {
// 	ofstream hout("randomSample.cpp");

// 	cout << "Enter your name";
// 	string name;
// 	cin >> name;
// 	hout << "My name is " + name;

// 	hout.close();

// 	// reading from file
// 	ifstream hin("randomSample.cpp");
// 	string content;
// 	// hin >> content;
// 	getline(hin, content);
// 	cout
// 		<< "The content of the file is " << content;
// }

// // *************next method of reading and writing in file **************
// #include <iostream>
// #include <fstream>
// #include <string.h>
// using namespace std;
// int main()
// {
// 	// writing on the file.
// 	ofstream out;
// 	out.open("randomSample.cpp");
// 	out << "It is written using open file.";
// 	out << "You are nice lady tara thutuno vayena.\n";
// 	out << "hahah dami";
// 	out.close();

// 	// reading the file
// 	ifstream in;
// 	in.open("randomSample.cpp");
// 	string text;
// 	// in >> text;
// 	// getline(in, text);
// 	// use of eof()
// 	while (in.eof() == 0)
// 	{
// 		getline(in, text);
// 		cout << text << endl;
// 	}
// 	in.close();
// }