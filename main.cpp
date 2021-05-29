#include <iostream>
#include "Data.h"
using namespace std;
using namespace ns;

int menu();

int main()
{
	FloatList list;
	float num;
	int ch;

	do
	{
		ch = menu();
		//system("clear");
		if (ch == 1)
		{
			cout << " Insert a New Movie " << endl << endl;
			cout << "Enter a title ";
			cin >> num;
			list.appendNode(num);
		}
		else if (ch == 2)
		{
			cout << " << Rent a Movie >> " << endl << endl;
			cout << "Enter a float number to INSERT: ";
			cin >> num;
			list.insertNode(num);
		}
		else if (ch == 3)
		{
			cout << " << Return a Movie >> " << endl << endl;
			cout << "Enter a float number to DELETE: ";
			cin >> num;
			list.deleteNode(num);
		}

		else if (ch == 4)
		{
			cout << " << Show Movie Details  >> " << endl << endl;
			list.displayList();
      system("sleep 3s");
		}
		else if (ch == 5)
		{
			cout << "Print Movie List" << endl; 
			list.~FloatList();
			exit(0);
		}
    else if (ch == 5)
		{
        // quit the program
      cout << "Thank you for using the program!" << endl; 
			list.~FloatList();
			exit(0);
		}
		else
		{
			cout << "Invalid Input!" << endl << endl;
			break;
		}
		cout << endl;
	} while (ch >= 1 && ch <= 5);
}


int menu()
{
	int ch;
	system("clear");
	cout << " << Linked List Demonstration >> " << endl << endl;
	cout << "[1] Append a Node" << endl;
	cout << "[2] Inserting a Node" << endl;
	cout << "[3] Deleting a Node" << endl;
	cout << "[4] Traversing the List" << endl;
	cout << "[5] Quit the Program" << endl << endl;
	cout << "Enter Choice: ";
	cin >> ch;
	return(ch);
}
