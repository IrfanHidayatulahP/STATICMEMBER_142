#include <iostream>
using namespace std;

class angka {
private:
	int *arr;
	int panjang;
public:
	angka(int);					//constructor
	~angka();					//desctructor
	void cetakData();
	void isiData();
};								//definisi member function

angka::angka(int i) {			//constructor
	panjang = i;
	arr = new int[i];
	isiData();
}

angka::~angka() {				//Destructor
	cout << endl;
	cetakData();
	delete[]arr;
	cout << "Alamat Array Sudah Dilepaskan" << endl;
}


int main() {

}
