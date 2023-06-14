#ifndef KANTOR_H
#define KANTOR_H

class penerbit;
class buku;
class pengarang {
public:
	string nama;
	vector<penerbit*> daftar_penerbit;
	vector<buku*> daftar_buku;
	pengarang(string pNama) :nama(pNama) {
		cout << " ";
	}

	~pengarang() {
		cout << " ";
	}

	void tambahPenerbit(penerbit*);
	void cetakPenerbit();
	void tambahBuku(buku*);
	void cetakBuku();
};

class penerbit {
public:
	string nama;
	vector<pengarang*> daftar_pengarang;
	penerbit(string pNama) :nama(pNama) {
		cout << " ";
	}

	~penerbit() {
		cout << " ";
	}

	void tambahPengarang(pengarang*);
	void cetakPengarang();
};

class buku {
public:
	string nama;
	buku(string pNama) :nama(pNama) {
		cout << " ";
	}

	~buku() {
		cout << " ";
	}
};

void pengarang::tambahPenerbit(penerbit* pPenerbit) {
	daftar_penerbit.push_back(pPenerbit);
}

void pengarang::cetakPenerbit() {
	cout << "Daftar Penerbit Yang Diikuti \"" << this->nama << "\":\n";
	for (auto& a : daftar_penerbit) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void pengarang::tambahBuku(buku* pBuku) {
	daftar_buku.push_back(pBuku);
}

void pengarang::cetakBuku() {
	cout << "Daftar Buku Yang Dikarang \"" << this->nama << "\":\n";
	for (auto& a : daftar_buku) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

void penerbit::tambahPengarang(pengarang* pPengarang) {
	daftar_pengarang.push_back(pPengarang);
}

void penerbit::cetakPengarang() {
	cout << "Daftar Pengarang Pada Penerbit \"" << this->nama << "\":\n";
	for (auto& a : daftar_pengarang) {
		cout << a->nama << "\n";
	}
	cout << endl;
}

#endif