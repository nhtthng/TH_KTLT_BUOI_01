#include <iostream>
#include<string>
using namespace std;

int main() {
	string ten;
	int namSinh;
	int gioiTinh;

	cout << "Nhap ten: ";
	cin >> ten;
	cout << "Nhap nam sinh: ";
	cin >> namSinh;
	cout << "Nhap gioi tinh: 1 la nam, 2 la nu";
	cin >> gioiTinh;

	if (gioiTinh == 1) {
		if ((2024 - namSinh) >= 62) {
			cout << ten << "da du tuoi nghi huu";
		}
		else {
			cout << ten << "chua du tuoi nghi huu";
		}
	}
	else if (gioiTinh == 2) {
		if ((2024 - namSinh) >= 60) {
			cout << ten << "da du tuoi nghi huu";
		}
		else {
			cout << ten << "chua du tuoi nghi huu";
		}
	}
	return 0;
}