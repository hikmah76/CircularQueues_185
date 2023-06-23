#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, n = 5;
	int queues_array[5];

public:
	Queues() {
		FRONT = -1;
		REAR = -1;
	}

	void insert() {
		int num;
		cout << "Enter a number: ";
		cin >> num;
		cout << endl;

		// cek apakah antrian penuh
		if ((FRONT == 0 && REAR == n - 1) || (FRONT == REAR + 1)) {
			cout << "\nQueues overflow\n";
			return;
		}
		//Cek apakah antrian kosong
		if (FRONT == n - 1)
			REAR = 0;
		else
			REAR = REAR + 1;
		queues_array[REAR] = num; 
	}

	void remove() {
		//cek apakah antrian kosong
		if (FRONT == -1) {
			cout << "Queue undeflow\n";
			return;
		}
		cout << "\nThe elemnet delete from the queue  is: " << queues_array[FRONT] << "\n";

		// cek jika antrian memiliki satu element
		if (FRONT == REAR) {
			FRONT = -1;
			REAR = -1;
		}
		else {
			// jika elemen yang dihapus berada di posisi terakhir array, kembali keawal array
			if (FRONT == n - 1)
				FRONT = 0;
			else
				FRONT = FRONT + 1;
		}
	}
	void display() {
		int  FRONT_position = FRONT;
		int  REAR_position = REAR;

		// CEK APAKAH ANTRIAN KOSONG
		if (FRONT == -1) {
			cout << "Queue are...\n";
			return;
		}
	}
}; 

