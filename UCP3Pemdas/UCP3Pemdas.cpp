#include <iostream> using namespace std; 

class MasukUniversitas {
private:
	int uangPendaftaran;
	int uangSemesterPertama;
	int uangBangunan;
public:
	int totalbiaya;
	void setXYZ(int uangPendaftaran, int uangSemesterPertama, int uangBangunan) {
		uangPendaftaran = uangPendaftaran;
		uangSemesterPertama = uangSemesterPertama;
		uangBangunan = uangBangunan;
	}
	MasukUniversitas() {
		uangPendaftaran = 0;
		uangSemesterPertama = 0;
		uangBangunan = 0;
		// isi nilai default variable yang dibutuhkan di bawah ini 
	}
	virtual void namaJalurMasuk() { return; }
	
	void setUangPendaftaran(int nilai) {
		this->uangPendaftaran = nilai;
	}      float getUangPendaftaran() {
		return uangPendaftaran;
	}

	void setUangSemesterPertama(int nilai) {
		this->uangSemesterPertama = nilai;
	}

	void setUangBangunan(int nilai) {
		this->uangBangunan = nilai;
	}
	void hitungluas() {
		return uangPendaftaran + uangSemesterPertama + uangBangunan = totalbiaya;
	}
};
    class SNBT : public MasukUniversitas {
		virtual void namaJalurMasuk() {
			cout << "Masukkan Uang Pendaftaran";
			cin >> uangPendaftaran;
			cout << "Masukkan Uang Semester Pertama";
			cin >> uangSemesterPertama;
			cout << "Masukkan Uang P";
			cin >> uangBangunan;

			hitungluas();

			if (nBilA > nBilB) {
				status = "Bilangan A lebih besar dari Bilangan B";
			}

			else if (nBilA == nBilB) {
				status = "Bilangan A sama dengan Bilangan B";
			}

			else {
				status = " Bilangan A lebih kecil dari Bilangan B";
			}
		} // isi disini untuk melengkapi class SNBT 
    };
    class SNBP : public MasukUniversitas {
		virtual void namaJalurMasuk() {
}
    };
    int main() {
		while (true)
		{
			cout << "\nMenu" << endl;
			cout << " 1. SNBT" << endl;
			cout << " 2. SNBP" << endl;
			cout << " 5. Exit" << endl;
			cout << "\nEnter your choice (1-3) : ";

			char ch;
			cin >> ch;
			cout << endl;

			switch (ch)
			{
			case '1':
			{
				x.SNBT(w);
				break;
			}
			case'2':
			{
				x.SNBP();
				break;
			}
			case'3':
				return 0;
			default:
			{
				cout << "Wrong Number!" << endl;
				break;
			}
			}
		}
	}