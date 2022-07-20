#include <iostream>
using namespace std;

struct Queue {
	int depan, belakang, data[5]; 
}queue;

void enqueue();
void dequeue();
void printQueue();

int main() {
	int pilih;
	do
	{
		cout<< "\n\t WARNING\nSementara hanya menerima 5 angka\nMenu Pilihan\n\t(1) Enqueue \n\t(2) Dequeue\n\t(3) Keluar \n\nMasukkan pilihan : ";
        cin >> pilih;
		switch (pilih)
		{
		case 1:
			enqueue();
			break;
		case 2:
			dequeue();
			break;
		default:
			cout << "Terima kasih telah menggunakan program queue saya 😊";
			break;
		}
	} while (pilih !=3);
	return 0;
}

void enqueue() {
		int data;
		cout << "Masukkan Data : ";cin >> data;
		queue.data[queue.belakang] = data;
		queue.belakang++;
		cout << "Data ditambahkan\n";
		printQueue();
}

void dequeue() {
		cout << "Mengambil data \"" << queue.data[queue.depan] << "\"..." << endl;
		for (int i = queue.depan; i < queue.belakang; i++)
			queue.data[i] = queue.data[i + 1];
		queue.belakang--;
		printQueue();
}

void printQueue() {
		cout << "\nQUEUE : ";
		for (int i = queue.depan; i < queue.belakang; i++) 
			cout << queue.data[i] << ((queue.belakang-1 == i) ? "" : ",");
			cout << endl;
}