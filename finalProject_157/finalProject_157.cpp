#include <iostream>
using namespace std;

class bidangDatar {
private:
	int x, y;
public:
	bidangDatar() {
		x = 0;
		y = 0;
	}
	virtual void input() {}

	virtual float Luas(float a) 
	{ 
		return 0; 
	} 

	virtual float Keliling(float a) 
	{ 
		return 0; 
	}

	virtual void cekUkuran() 
	{ 
		return; 
	} 
	
	void setX(float a) 
	{
		this->x = a;
	}

	void setY(float a)
	{
		this->y = a;
	}

	int getX()
	{
		return x;
	}
	int getY() 
	{
		return y;
	}
};

class Lingkaran : public bidangDatar {							
public:	

	float r;

	void input() {
		cout << "Lingkaran telah dibuat" << endl;
		cout << "\nMasukkan Jejari Lingkaran  : ";
		cin >> r;
		setX(r);
	}

	float Luas()
	{
		float r = getX();
		return r * r * 3.14;
	}
	
	float Keliling() 
	{
		float r = getX();
		return 2 * 3.14 * r;
	}

	void cekUkuran()
	{
		float cul = Keliling();
		if (cul > 40)
		{
			cout << "\nUkuran lingkaran adalah Besar" << endl;
		}
		else if (cul < 20)
		{
			cout << "\nUkuran lingkaran adalah Sedang" << endl;
		}
		else if (Keliling() < 10)
		{
			cout << "\nUkuran lingkaran adalah Kecil" << endl;
		}
	}
};

class PersegiPanjang : public bidangDatar {
public:

	float x;
	float y;

	void input() {
		cout << "Persegi Panjang telah dibuat" << endl;

		cout << "\nMasukkan sisi panjang : ";
		cin >> x;
		setX(x);
		cout << "\nMasukkan sisi lebar : ";
		cin >> y;
		setY(y);
	}

	float Luas()
	{
		float x = getX();
		float y = getY();
		return x * y;
	}

	float Keliling() {
		float x = getX();
		float y = getY();
		return (2* x) + (2 * y);
	}

	void cekUkuran()
	{
		float cupp = Keliling();
		if (Keliling() > 40)
		{
			cout << "\nUkuran Persegi Panjang adalah Besar" << endl;
		}
		else if (Keliling() < 20)
		{
			cout << "\nUkuran Persegi Panjang adalah Sedang" << endl;
		}
		else if (Keliling() < 10)
		{
			cout << "\nUkuran Persegi Panjang adalah Kecil" << endl;
		}
	}
};

int main()
{
	char pilihan;
	do {

	Lingkaran lingkaran;
	lingkaran.input();
	cout << "\nLuas lingkaran = " << lingkaran.Luas() << endl;
	cout << "\nKeliling lingkaran = " << lingkaran.Keliling() << endl;
	lingkaran.cekUkuran();

	PersegiPanjang persegipanjang;
	persegipanjang.input();
	cout << "\nLuas Persegi Panjang = " << persegipanjang.Luas() << endl;
	cout << "\nKeliling Persegi Panjang = " << persegipanjang.Keliling() << endl; 
	persegipanjang.cekUkuran();


	cout << "\nApakah Anda ingin mengulang (Y/N)? ";
	cin >> pilihan;

	} while (pilihan == 'Y' || pilihan == 'y');

	return 0;
}

	

