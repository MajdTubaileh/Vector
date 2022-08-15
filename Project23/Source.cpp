#include<iostream>
#include "Header.cpp"
HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);


using namespace std;
//========================
Vector<double>Wee;
Vector<double>Wee1;
Vector<double>Wee2;
Vector<double>Wee3;
Vector<double>Wee4;
Vector<double>Wee5;
Vector<double>Wee6;
Vector<double>Wee7;
Vector<double>Wee8;
Vector<double>Wee9;
Vector<double>WeeA;
Vector<double>WeeB;
//========================
void MethodMenu();
int main()
{
	
	
	cout << "---------------------------------------" << endl;
	cout << "Wee Addings " << endl;
	Wee.add_last(10);
	Wee.add_last(6);
	cout << "Wee endings" << endl;
	cout << "---------------------------------------" << endl;
	cout << "Wee4 Addings" << endl;
	Wee4.add_last(1);
	Wee4.add_last(2);
	Wee4.add_last(3);
	Wee4.add_last(4);
	Wee4.add_last(5);
	cout << "Wee4 Endings" << endl;
	cout << "---------------------------------------" << endl;
	cout << "Wee1 Addings " << endl;
	Wee1.add_last(15);
	Wee1.add_last(20);
	cout << "Wee1 endings" << endl;
	cout << "---------------------------------------" << endl;
	cout << "Wee3 addings" << endl;
	Wee3.add_last(5);
	cout << "Wee3 endings" << endl;
	cout << "---------------------------------------" << endl;
	cout << "Wee7 Addings" << endl;
	Wee7.add_last(1);
	Wee7.add_last(2);
	Wee7.add_last(3);
	Wee7.add_last(4);
	Wee7.add_last(5);
	cout << "Wee7 endings" << endl;
	cout << "---------------------------------------" << endl;
	cout << "Wee8 addings" << endl;
	Wee8.add_last(3);
	Wee8.add_last(5);
	Wee8.add_last(7);
	Wee8.add_last(9);
	Wee8.add_last(11);
	cout << "Wee8 endings" << endl;
	cout << "---------------------------------------" << endl;

	cout << "Wee9 addings" << endl;
	Wee9.add_last(2);
	Wee9.add_last(4);
	Wee9.add_last(6);
	Wee9.add_last(7);
	Wee9.add_last(10);
	cout << "Wee9 endings" << endl;
	cout << "---------------------------------------" << endl;

	cout << "Operator =" << endl;
	cout << "Wee5 -> "; 
	Wee5.Print();
	cout << endl;
	cout << "Wee3->";
	Wee3.Print();
	cout << endl;

	Wee5 = Wee3;
	Wee5.Print();
	cout << "---------------------------------------" << endl;
	cout << "WeeB addings" << endl;
	WeeB.add_last(2);
	WeeB.add_last(4);
	WeeB.add_last(6);
	WeeB.add_last(7);
	WeeB.add_last(10);
	cout << "WeeB endings" << endl;
	cout << "---------------------------------------" << endl;
	cout << "*********************" << " TESTING METHODS" << "*********************" << endl;
	int option;
	while (true)
	{
		MethodMenu();
		cin >> option;
		switch (option)
		{
		case 1:
		{
			cout << "---------------------------------------" << endl;
			cout << "adding at single position for Wee" << endl;
			cout << "Enter the position to add ";
			int poss;
			cin >> poss;
			cout << "Enter the number to add ";
			double poss1;
			cin >> poss1;
			Wee.add_pos(poss1, poss);
			cout << endl;
			cout << "---------------------------------------" << endl;
			break;
		}
		case 2:
		{
			cout << "---------------------------------------" << endl;
			cout << " the Size for Wee" << endl;
			cout << Wee.size_of();
			cout << endl;
			cout << "the new size" << endl;
			Wee.Re_size();
			cout << Wee.size_of() << endl;
			cout << "---------------------------------------" << endl;
			break;
		}

		case 3: 
		{
			cout << "---------------------------------------" << endl;
			cout << "The capacity for Wee" << endl;
			cout << Wee.Return_current();
			cout << endl;
			cout << "---------------------------------------" << endl;
			break;
		}
		case 4:
		{
			cout << "---------------------------------------" << endl;
			Wee.Print(); cout << endl;
			cout << "Enter element At for Wee" << endl;
			int elementpos;
			cin >> elementpos;
			cout << "*****" << Wee.element_at(elementpos) << "*****" << endl;
			cout << "---------------------------------------" << endl;
			break;
		}
		case 5:
		{
			cout << "---------------------------------------" << endl;
			cout << "Wee4 "; Wee4.Print();
			cout << "First Element of Wee4" << endl;
			cout << Wee4.element_first() << endl;
			cout << "---------------------------------------" << endl;
			break;
		}
		case 6:
		{
			cout << "---------------------------------------" << endl;
			cout << "Wee4 "; Wee4.Print();
			cout << "Choose the needed position to add";
			int pos; cin >> pos;
			cout << "enter the needed number to add ";
			double wanted; cin >> wanted;
			Wee4.add_pos(wanted, pos);
			cout << "adding at single position for Wee4" << endl;
			cout << "---------------------------------------" << endl;
			break;
		}
		case 7:
		{
			cout << "---------------------------------------" << endl;
			Wee.Print();
			Wee.add_last(6);
			Wee.add_last(88);
			cout << "Enter the value you want to check up from start ";
			double indevalue;
			cin >> indevalue;
			cout << "The index from start at pos " << endl;

			cout << Wee.index_of(indevalue) << endl;
			cout << "---------------------------------------" << endl;
			break;
		}
		case 8:
		{
			cout << "---------------------------------------" << endl;
			Wee.Print();
			Wee.add_last(55);
			Wee.add_last(6);
			Wee.add_last(600);
			cout << "Enter the value ou want to check up from end ";
			double indevaluee;
			cin >> indevaluee;
			cout << "The index from the end at pos " << endl;
			cout << Wee.lastindex_of(indevaluee) << endl;
			cout << "---------------------------------------" << endl;
			break;
		}
		case 9:
		{
			cout << "---------------------------------------" << endl;
			cout << "is Wee6 Empty?" << endl;
			Wee6.Print();
			cout << Wee6.Is_empty() << endl;
			Wee6.add_last(5);
			cout << Wee6.Is_empty() << endl;
			cout << "---------------------------------------" << endl;
			break;
		}
		case 10:
		{
			cout << "---------------------------------------" << endl;
			cout << "returning the last element of Wee" << endl;
			Wee.Print();
			cout << Wee.element_last() << endl;
			cout << "---------------------------------------" << endl;
			break;
		}
		case 11:
		{	
		cout << "---------------------------------------" << endl;
		Wee.Print();
		double RemoveX;
		int position;
		cout << "Removing from the array and putting it in a variable " << endl;
		cout << "enter the position to remove ";
		cin >> position;
		cout << endl;
		RemoveX = Wee.remove(position);
		cout << endl;
		cout << "---------------------------------------" << endl;
		break;
		}
		case 12:
		{
			cout << "---------------------------------------" << endl;
			cout << "Do you want to remove all elements?y/n   ";
			char x;
			cin >> x;
			if (x == 'y')
			{
				Wee.remove_all();
				Wee.Print();
			}
			cout << "---------------------------------------" << endl;
			break;
		}
		case 13:
		{
			cout << "---------------------------------------" << endl;
			Wee4.Print();
			cout << "Removing element at your own choice , enter the element ";
			double RemoveE;
			cin >> RemoveE;
			Wee4.remove_same(RemoveE);
			cout << endl;
			cout << "---------------------------------------" << endl;
			break;
		}
		case 14:
		{
			cout << "---------------------------------------" << endl;
			Wee4.Print();
			cout << "Enter the position to replace ";
			int addpos;
			cin >> addpos;
			cout << "Enter the number to replace ";
			double addpose;
			cin >> addpose;
			Wee4.set_pos(addpose, addpos);
			cout << "---------------------------------------" << endl;
			break;
		}
		case 15:
		{
			cout << "---------------------------------------" << endl;
			cout << "Testing the + operator" << endl;
			cout << "Wee4 -> ";
			Wee4.Print();
			cout << endl;
			cout << "Wee7 -> ";
			Wee7.Print();
			cout << endl;
			Wee8 = Wee4 + Wee7;
			cout << "Wee8 -> ";
			Wee8.Print();
			cout << endl;
			cout << "---------------------------------------" << endl;
			break;
		}
		case 16: 
		{
			cout << "---------------------------------------" << endl;
			cout << "Testing the - operator" << endl;
			cout << "Wee8 -> ";
			Wee8.Print();
			cout << endl;
			cout << "Wee9 -> ";
			Wee9.Print();
			cout << endl;
			Wee2 = Wee8 - Wee9;
			cout << "Wee2 -> ";
			Wee2.Print();
			cout << "---------------------------------------" << endl;
			break;
		}
		case 17:
		{
			cout << "---------------------------------------" << endl;

			cout << "Testing the * operator" << endl;
			cout << "Wee7 -> ";
			Wee7.Print();
			cout << endl;
			cout << "WeeB -> ";
			WeeB.Print();
			cout << endl;
			WeeA = Wee7 * WeeB;
			cout << "WeeA -> ";
			WeeA.Print();
			cout << endl;
			cout << "---------------------------------------" << endl;
			break;
		}
		case 18:
		{
			return 0;
		}

		default: break;
		}
	}
}

void MethodMenu()
{

	SetConsoleTextAttribute(hConsole, 10);

	cout << "Choose what ever you want :D" << endl;
	cout << "1- Adding at single position for Wee" << endl;
	cout << "2- The Size for Wee" << endl;
	cout << "3- The capacity for Wee" << endl;
	cout << "4- Element At for Wee" << endl;
	cout << "5- First Element of Wee4" << endl;
	cout << "6- Choose the needed position to add" << endl;
	cout << "7- The index from start at pos " << endl;
	cout << "8- The index from the end at pos " << endl;
	cout << "9- Is Wee6 Empty?" << endl;
	cout << "10- Returning the last element of Wee" << endl;
	cout << "11- Remove from array by a given position " << endl;
	cout << "12- Do you want to remove all elements?y/n   " << endl;
	cout << "13- Removing element at your own choice , enter the element " << endl;
	cout << "14- Set element on a position " << endl;
	cout << "15- Test the + operator " << endl;
	cout << "16- Test the - operator " << endl;
	cout << "17- Test the * operator " << endl;
	cout << "18- Exit" << endl;
	cout << "---------------------------------------" << endl;
	cout << "Enter the number to choose -> ";

	}
