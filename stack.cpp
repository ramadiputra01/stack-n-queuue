#include <iostream>
using namespace std;

int stack[5];
int top = -1;

// fungsi push (menambah data)
void push(int data){
    if(top == 4){
        cout << "Stack penuh!" << endl;
    } else {
        top++;
        stack[top] = data;
    }
}

// fungsi pop (menghapus data teratas)
void pop(){
    if(top == -1){
        cout << "Stack kosong!" << endl;
    } else {
        cout << "Data yang dihapus: " << stack[top] << endl;
        top--;
    }
}

// fungsi menampilkan isi stack
void display(){
    if(top == -1){
        cout << "Stack kosong" << endl;
    } else {
        cout << "Isi stack: ";
        for(int i = top; i >= 0; i--){
            cout << stack[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    push(10);
    push(20);
    push(30);

    display();

    pop();

    display();

    return 0;
}