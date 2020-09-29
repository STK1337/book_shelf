
#include <iostream>
#include <vector>
#include "Book.h"
#include "Printbook.h"
#include "Shelf.h"
#include "BShelf.h"
using namespace std;
int main(int argc, char** argv)
{
	system("chcp 1251");
	int mode = -1;
	vector<BookShelf> bshelfs;
	BookShelf bshelf;
	while (mode != 0) {
		cout << "-=МЕНЮ=-" << endl;
		cout << "1. Добавить шкаф." << endl;
		cout << "2. добавить полку в шкаф" << endl;
		cout << "3. Добавить книгу" << endl;
		cout << "4. Вывод на экран" << endl;
		cout << "0. Выход" << endl;
		cout << "Введите номер и нажмите энтр" << endl;
		cin >> mode;
		switch (mode) {
		case 0: continue;
		case 1:
			bshelfs.push_back(bshelf);
			cout << "Шкаф добавлен!" << endl << endl;
			break;
		case 2:
			if (bshelfs.size() > 0) {
				cout << "Доступно" << bshelfs.size() << " шкафов" << endl;
				cout << "Введите номер шкафа (от 1 до " << bshelfs.size() << "): ";
				int n = 0;
				cin >> n;
				if (n > 0 && n <= bshelfs.size()) {
					bshelfs[n - 1].addShelf();
					cout << "Полка добавлена" << endl;

				}
				else {
					cout << "Ошибка в номере шкафаэ. Повторите." << endl << endl;
				}
			}
			else {
				cout << "Доступные шкафы отсутствуют!" << endl << endl;
			}
			break;
		case 3:
			if (bshelfs.size() > 0) {
				cout << "Досупно" << bshelfs.size() << " шкафов" << endl;
				cout << "ВВедите номер шкафа (от 1 до " << bshelfs.size() << ")";
				int n = 0;
				cin >> n;
				if (n > 0 && n <= bshelfs.size()) {
					cout << "ВВедите номер полки" << endl;
					int m = 0;
					cin >> m;
					PrintBook pb;
					cout << "ВВедите название книги";
					string name;
					cin >> name;
					cout << "ВВедите кол во страниц";
					int pages;
					cin >> pages;
					pb.setName(name);
					pb.setPages(pages);
					bshelfs[n - 1].addBook(pb, m - 1);

				}
				else {
					cout << "Ошибка в номере шкафа" << endl << endl;
				}
			}
			else {
				cout << "Доступные шкафы отсутствуют!" << endl << endl;
			}
			break;

		case 4:
			for (int i = 0; i < bshelfs.size(); i++) {
				cout << "===Шкаф №" << i + 1 << "===" << endl;
				bshelfs[i].Print();
			}
			break;
		}
	}
	cout << "Poka";
	return 0;

}