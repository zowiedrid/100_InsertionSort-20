// prk2algo_insertion.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void insertionSort() {
    int i, n, temp, j; //deklarasi variabel
    int arr[9]; //deklarasi array

    for (i = 1; i <= n - 1; i++) { // step1
        temp = arr[i]; // step2
        j = i - 1; // step3

        while (j >= 0 && arr[j] > temp) { //step4
        
        arr[j + 1] = arr[j]; //step4a nilai di kanan berarti akan diisi oleh nilai di kiri
        j--; //step4b }

        arr[j + 1] = temp; //step5
    }
}

int main()
{
    std::cout << "Hello World!\n";
}

