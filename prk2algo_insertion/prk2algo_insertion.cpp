// prk2algo_insertion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int arr[10]; // jumlah kapasitas array
int n; // jumlah data

void input() {
	while (true) {
		cout << "Masukkan jumlah data: "; //output ke layar
		cin >> n; //input dari user
		if (n <= 10) { //jika n kurang dari sama dengan 10
			break; //keluar dari loop
		}
		else {
			cout << "Jumlah data tidak boleh lebih dari 10" << endl; //output ke layar
		}
	}

	cout << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar
	cout << "Masukkan data: " << endl; //output ke layar
	cout << "=============================" << endl; //output ke layar

	for (int i = 0; i < n; i++) { //looping dengan i dimulai dari 0 hingga n-1
		cout << "Data ke-" << i + 1 << ": "; //output ke layar
		cin >> arr[i]; //input dari user
	}
}

void insertionSort() {
	int i, temp, j; //deklarasi variabel
	for (i = 1; i <= n - 1; i++) { // step1
		temp = arr[i]; // step2
		j = i - 1; // step3

		while (j >= 0 && arr[j] > temp) { //step4

			arr[j + 1] = arr[j]; //step4a nilai di kanan berarti akan diisi oleh nilai di kiri
			j--; //step4b }

			arr[j + 1] = temp; //step5
		}
	}

}

int main() {

}

