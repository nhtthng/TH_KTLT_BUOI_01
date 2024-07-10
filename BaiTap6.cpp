#include <iostream>
#include <string>
using namespace std;

int main() {
	string ten;
	int namSinh;
	int gioiTinh;

	cout << "Nhap ten: ";
	cin >> ten;
	cout << "Nhap nam sinh: ";
	cin >> namSinh;
	cout << "Nhap gioi tinh: nam la 1, nu la 2: ";
	cin >> gioiTinh;

	if (gioiTinh == 1) {
		if ((2024 - namSinh) >= 62) {
			cout << "Hien nay " << ten << " " << 2024 - namSinh << " tuoi va " << "da du tuoi nghi huu";
		}
		else {
			cout << "Hien nay " << ten << " " << 2024 -namSinh << " tuoi va " << "chua du tuoi nghi huu";
		}
	}
	else if (gioiTinh == 2) {
		if ((2024 - namSinh) >= 60) {
			cout << "Hien nay " << ten << " " << 2024 - namSinh << " tuoi va " << "da du tuoi nghi huu";
		}
		else {
			cout << "Hien nay " << ten << " " << 2024 -namSinh << " tuoi va " << "chua du tuoi nghi huu";
		}
	}
	return 0;
}