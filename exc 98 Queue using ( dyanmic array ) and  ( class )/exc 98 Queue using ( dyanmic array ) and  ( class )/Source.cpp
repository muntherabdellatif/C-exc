#include"Queue.h"
using namespace std;
void print(int x);
int main() {
	int e = 0 , size;
	cout << "enter Queue size : ";
	cin >> size;
	Queue<int> q(size);
	while (1) {
		cout << "enter -1 to pop from Queue and -2 to stop and any number to push it" << endl;
		cin >> e;
		if (e == -1) {
			if (!q.PupQueue(&e)) {
				cout << " Queue is empty\n";
			}
		}
		else if (e == -2) {
			q.ClearQueue();
			cout << " Queue is empty\n";
		}
		else if (e > 0) {
			if (!q.PushQueue(e)){
				cout << " Queue is Full\n";
			}
		}
		cout << " your Queue element is :";
		q.passQueue(print);
		cout << endl;
		cout << " your Queue Size is : " << q.SizeQueue() << endl;
	}
}
void print(int x) {
	cout << x << "\t";
}