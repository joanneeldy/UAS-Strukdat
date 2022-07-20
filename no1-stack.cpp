#include <iostream>
using namespace std;

struct Stack {
    int top, data[5];
}stack;

void dorong();
void push();
void pop();
void printStack();

int main() {
    int pilih;
    dorong();
    do {
        cout << "----------------------------------------------------------------------------------------" << endl;
        cout << "\t WARNING\nSementara hanya menerima 5 angka\nMenu pilih\n\t(1) push \n\t(2) pop\n\t(3) Keluar \n\nMasukkan pilih : ";
        cin >> pilih;
        switch (pilih)
        {
            case 1:
            push();
            break;
            case 2:
            pop();
            break;
            default:
            cout << "Terima kasih telah menggunakan program stack saya 😊" << endl;
            break;
        }
    } while (pilih!=3);
    return 0;
}

void dorong(){
      stack.top = -1;
}

void push() {
    stack.top++;
    cout << "\nMasukkan data = "; cin >> stack.data[stack.top];
    cout << "Data " << stack.data[stack.top] << " masuk ke stack"<<endl;
    printStack();
}

void pop() {
    cout << "\nData "<<stack.data[stack.top]<<" sudah terambil"<<endl;
    stack.top--;
    printStack();
}

void printStack() {
    cout << "\nStack : ";
    for (int i = stack.top; i >= 0; i--)
    cout << stack.data[i] << ((i == 0) ? "" : ",");
    cout << endl;
}