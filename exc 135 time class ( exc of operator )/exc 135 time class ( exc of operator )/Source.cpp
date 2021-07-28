#include <iostream>
using namespace std;
class Time {
	int sec ,min ,hour , days;
public:
	Time():sec(0),min(0),hour(0),days(0){}
	Time(int s, int m, int h, int d) :sec(s), min(m), hour(h), days(d) {}
	Time operator +(Time t2) {
		long int total_sec = 0;
		int s, m, h, d;
		total_sec = sec + min * 60 + hour * 3600 + days * 3600 * 24;
		total_sec += t2.sec + t2.min * 60 + t2.hour * 3600 + t2.days * 86400;
		d = total_sec / 86400;
		total_sec %= 86400;
		h = total_sec / 3600;
		total_sec %= 3600;
		m = total_sec / 60;
		s = total_sec % 60;
		return (Time(s, m, h, d));
	}
	Time operator -(Time t2) {
		long int total_sec = 0;
		int s, m, h, d;
		total_sec = sec + min * 60 + hour * 3600 + days * 3600 * 24;
		total_sec -= (t2.sec + t2.min * 60 + t2.hour * 3600 + t2.days * 86400);
		d = total_sec / 86400;
		total_sec %= 86400;
		h = total_sec / 3600;
		total_sec %= 3600;
		m = total_sec / 60;
		s = total_sec % 60;
		return (Time(s, m, h, d));
	}
	Time operator /(int n) {
		long int total_sec = 0;
		int s, m, h, d;
		total_sec = sec + min * 60 + hour * 3600 + days * 3600 * 24;
		total_sec /= n;
		d = total_sec / 86400;
		total_sec %= 86400;
		h = total_sec / 3600;
		total_sec %= 3600;
		m = total_sec / 60;
		s = total_sec % 60;
		return (Time(s, m, h, d));
	}
	void printTime() {
		cout << sec << ":" << min << ":" << hour << " and " << days << " day \n";
	}
};
int main() {
	Time t1(40, 40, 4, 1);
	Time t2(10, 35, 2, 0);
	Time t3 = t1 + t2;
	Time t4 = t1 - t2;
	t1 = t1 / 3;
	cout << "Time 1 :";
	t1.printTime();
	cout << "Time 2 :";
	t2.printTime();
	cout << "Time 3 :";
	t3.printTime();
	cout << "Time 4 :";
	t4.printTime();
}