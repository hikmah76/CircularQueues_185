

#include <iostream>
using namespace std;

class Queues {
	int FRONT, REAR, max = 5;
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
		if ((FRONT == 0 && REAR == max - 1) || (FRONT == REAR + 1)) {
			cout << "\nQueues overflow\n";
			return;
		}
		//Cek apakah antrian kosong
		if (FRONT == max - 1)
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
	}
}; 

