#include <iostream>
#include <vector>
using namespace std;

#include "kantor.h"

int main() {
	penerbit* varPenerbit1 = new penerbit("Gama Press");
	penerbit* varPenerbit2 = new penerbit("Intan Pariwara");
	pengarang* varPengarang1 = new pengarang("Joko");
	pengarang* varPengarang2 = new pengarang("Lia");
	pengarang* varPengarang3 = new pengarang("Giga");
	pengarang* varPengarang4 = new pengarang("Asroni");
	buku* varBuku1 = new buku("Fisika");
	buku* varBuku2 = new buku("Algoritma");
	buku* varBuku3 = new buku("Basis Data");
	buku* varBuku4 = new buku("Dasar Pemrograman");
	buku* varBuku5 = new buku("Matematika");
	buku* varBuku6 = new buku("Multimedia 1");

	varPenerbit1->tambahPengarang(varPengarang1);
	varPenerbit1->tambahPengarang(varPengarang2);
	varPenerbit1->tambahPengarang(varPengarang3);

	varPenerbit2->tambahPengarang(varPengarang4);
	varPenerbit2->tambahPengarang(varPengarang3);

	varPengarang3->tambahPenerbit(varPenerbit1);
	varPengarang3->tambahPenerbit(varPenerbit2);

	varPengarang1->tambahBuku(varBuku1);
	varPengarang1->tambahBuku(varBuku2);
	varPengarang2->tambahBuku(varBuku3);
	varPengarang4->tambahBuku(varBuku4);
	varPengarang3->tambahBuku(varBuku5);
	varPengarang3->tambahBuku(varBuku6);

	varPenerbit1->cetakPengarang();
	varPenerbit2->cetakPengarang();
	varPengarang3->cetakPenerbit();
	varPengarang1->cetakBuku();
	varPengarang2->cetakBuku();
	varPengarang4->cetakBuku();
	varPengarang3->cetakBuku();

	delete varPenerbit1;
	delete varPenerbit2;
	delete varPengarang1;
	delete varPengarang2;
	delete varPengarang3;
	delete varPengarang4;
	delete varBuku1;
	delete varBuku2;
	delete varBuku3;
	delete varBuku4;
	delete varBuku5;
	delete varBuku6;

	return 0;
}