#include <iostream> 
using namespace std;
int main() {
	int choice;
	cout << "\t1. Add Item\n\t2. View Items\n\t3. Exit\n\n";
	cout << "Choose an option: ";
	cin >> choice;

	if (choice == 1) cout << "Item added!\n";
	else if (choice == 2) cout << "Displaying items...\n";
	else if (choice == 3) cout << "Exiting...\n";
	else cout << "Invalid option. Try Again\n";
	return 0;
}
