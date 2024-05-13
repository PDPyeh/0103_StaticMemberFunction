#include<iostream>
#include<string>
using namespace std;

class angka {
private:
	int *arr;
	string panjang;
public:
	angka(int i) {
		panjang = i;
		arr = new int[i];
		isiData();
	}
	~angka() {
		cout << endl;
		cetakData();
		delete[]arr;
		cout << "Alamat Array Sudah Dilepaskan" << endl;

	}

	void cetakData() {

	}
	void isiData();
	
};
