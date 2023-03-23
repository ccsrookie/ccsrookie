#include<iostream>
#include<string>
using namespace std;
struct hero {
	string name;
	int age;
	string gender;
};
void printhero(hero* p,int len) {
	for (int i = 0; i < len; i++) {
		cout << p[i].name << "\t" << p[i].age << "\t" << p[i].gender << endl;
	}
	cout << endl;
}
void bubble_sort(hero* p, int len) {
	int flag = 1;
	for (int i = 0; i < len - 1; i++) {
		flag = 1;
		for (int j = 0; j < len - 1 - i; j++) {
			if (p[j].age > p[j + 1].age) {
				hero temp = p[j];
				p[j] = p[j + 1];
				p[j + 1] = temp;
				flag = 0;
			}
		}
		if (flag == 1) {
			break;
		}
	}
}
int main() {
	hero h[] = { {"ÕÔÔÆ",21,"ÄĞ"},{"¹ØÓğ",22,"ÄĞ"},{"õõ²õ",19,"Å®"},{"Áõ±¸",23,"ÄĞ"}
				,{"ÕÅ·É",20,"ÄĞ"} };
	int len = sizeof(h) / sizeof(h[0]);
	printhero(h, len);
	bubble_sort(h, len);
	printhero(h, len);
	return 0;
}