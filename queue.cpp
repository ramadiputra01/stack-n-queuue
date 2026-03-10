#include <iostream>
using namespace std;

int queue[5];
int front = -1;
int rear = -1;

// menambah data ke queue
void enqueue(int data){
    if(rear == 4){
        cout << "Queue penuh!" << endl;
    } else {
        if(front == -1){
            front = 0;
        }
        rear++;
        queue[rear] = data;
    }
}

// menghapus data dari queue
void dequeue(){
    if(front == -1 || front > rear){
        cout << "Queue kosong!" << endl;
    } else {
        cout << "Data yang dihapus: " << queue[front] << endl;
        front++;
    }
}

// menampilkan isi queue
void display(){
    if(front == -1 || front > rear){
        cout << "Queue kosong" << endl;
    } else {
        cout << "Isi queue: ";
        for(int i = front; i <= rear; i++){
            cout << queue[i] << " ";
        }
        cout << endl;
    }
}

int main(){
    enqueue(10);
    enqueue(20);
    enqueue(30);

    display();

    dequeue();

    display();

    return 0;
}