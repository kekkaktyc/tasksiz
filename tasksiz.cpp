#include <string>
#include <fstream>
#include <iostream>
using namespace std;
int main(int argc, char* argv[]){
	if(argc!=3){
		cout << "Wrong number of arguments" << endl;
		return -1;
	}
	ifstream infile;
	ofstream outfile;
	infile.open(argv[1]);
	outfile.open(argv[2]);
	if(!infile.is_open() || !outfile.is_open()){
		cout << "File cannot be opened" << endl;
		return -1;
	}
	string result;
	int N1, N2;
	cout << "Enter N1, N2" << endl;
	cin >> N1 >> N2;
	string t1, t2;
	getline(infile, t1);
	getline(infile, t2);
	result.append(t1, 0, N1);
	result.append(t2, t2.size()-N2, N2);
	outfile << result;
	infile.close();
	outfile.close();
	return 0;
}
