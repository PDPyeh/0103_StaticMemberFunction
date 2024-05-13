#include<iostream>
#include<string>
using namespace std;

class mahasiswa {
private:
	static long int nim;
public:
	long int id;
	string nama;

	void setID();
	void printAll();

	static void setNim(long int pNim) { nim = pNim; }
	static long int getNim() { return nim; }
	mahasiswa(string pnama) {
		nama = pnama;
		setID();
	}

}; 

long int mahasiswa::nim = 20230140103;
void mahasiswa::setID() {
	id = ++nim;
}
void mahasiswa::printAll() {
	cout << "ID   = " << id << endl;
	cout << "Nama = " << nama << endl;
	cout << endl;
}

int main() {
	mahasiswa mhs1("Pradipa Yogananda");
	mahasiswa mhs2("Imron");
	mahasiswa::setNim(9);
	mahasiswa mhs3("Lalu");
	mahasiswa mhs4("Kratos");

	mhs1.printAll();
	mhs2.printAll();
	mhs3.printAll();
	mhs4.printAll();

	cout << "akses dari luar object = " << mahasiswa::getNim() << endl;
}
