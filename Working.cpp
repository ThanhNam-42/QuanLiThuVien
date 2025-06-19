#include<iostream>
#include<string>
#include<io.h>
#include<fcntl.h>
#include<Windows.h>

using namespace std;
class Students {
	int code;
	wstring fullname;
	wstring phonenumber;
	wstring birthday;
public:
	void getData();
	void setData();
};
void Students::setData() {
	wcout << L"Nhap ma sinh vien: ";
	cin >> code;
	wcout << L"Nhap ten sinh vien: ";
	getline(wcin >> ws, fullname);
	wcout << L"Nhap so dt: ";
	getline(wcin>>ws, phonenumber);
	wcout << L"Nhap ng�y sinh: ";
	getline(wcin >> ws, birthday);
}
void Students::getData() {
	wcout << L"Ma sinh vien: "<< code << endl;
	wcout << L"Ho ten: " << fullname << endl;
	wcout << L"So dien thoai: " << phonenumber << endl;
	wcout << L"Ngay sinh: " << birthday << endl;
}

int main()
{	
	_setmode(_fileno(stdin), _O_U16TEXT);
	_setmode(_fileno(stdout), _O_U16TEXT);
	HANDLE hdlconsole = GetStdHandle(STD_OUTPUT_HANDLE);
	CONSOLE_FONT_INFOEX consoleFont;
	consoleFont.cbSize = sizeof(consoleFont);
	GetCurrentConsoleFontEx(hdlconsole, FALSE, &consoleFont);
	memcpy(consoleFont.FaceName, L"Consolas", sizeof(consoleFont.FaceName));
	Students *sv = new Students;
	int n;
	wcout << L"Nhap so luong sinh vien: "; cin >> n;
	for (int i = 0; i < n; i++) {
		wcout << L"Nhap thong tin sinh vien  " << i + 1 <<": "<< endl;
		sv->setData();
	}
	wcout << L"--------Danh sach sinh vien---------" << endl;
	for (int i = 0; i < n; i++) {
		sv->getData();
	}
	return 0;
}

