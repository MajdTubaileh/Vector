#include <iostream>
#include "Header.h"
#include <windows.h> // WinApi header
using namespace std;



template <typename S>
Vector<S>::Vector() 
{
	current = 0; 
	size = 10;
	Vec = new S[size];
}
template <typename S>
Vector<S>&Vector<S>::operator=(const Vector<S>&obj)
{
	if (Vec != NULL) {
		Vec = new S[obj.size];
		for (int i = 0; i < obj.current; i++)
		{
			Vec[i] = obj.Vec[i];
		}
		size = obj.size;
		current = obj.current;
		return *this;
	}
}
template <typename S>
bool Vector<S>::Same(const Vector&obj)
{
		int count = 0;
		if (size == obj.size)
		{
			for (int i = 0; i < size; i++)
			{
				if (Vec[i] == obj.Vec[i])
					count++;
			}
		}
		if (count == size )return 1;
		else return 0;
}
template <typename S>                                                                                         //   ____                         _                    _                  
Vector<S>::Vector(int CapacityInI)                                                                            //  / ___|   ___    _ __    ___  | |_   _   _    ___  | |_    ___    _ __ 
{                                                                                                             // | |      / _ \  | '_ \  / __| | __| | | | |  / __| | __|  / _ \  | '__|
	size = CapacityInI;                                                                                       // | |___  | (_) | | | | | \__ \ | |_  | |_| | | (__  | |_  | (_) | | |                          
	Vec = new S[size];                                                                                        //  \____|  \___/  |_| |_| |___/  \__|  \__,_|  \___|  \__|  \___/  |_|   
	current = 0;                                                                                        
}
template <typename S>
Vector<S>::Vector(const Vector &obj)
{
	*this = obj;
}
template <typename S>
Vector<S>::~Vector()
{
	/*delete[]Vec;
	size = 0;
	current = 0;
	*/
}                                                                        
//  _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____ 
// |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____|
// |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____|                                                                 
template <typename S>
Vector<S> Vector<S>::operator+(const Vector<S> &obj)
{
	Vector <S> Wee(size);

	if(current==obj.current)
	{ 
	for (int i = 0; i < current; i++)
	{
		Wee.Vec[i] = Vec[i] + obj.Vec[i];
	}
	Wee.current = current;
	return Wee;
	}
	else
	{
		cout << "error size not equal"; return 0;
	}


}
template <typename S>
void Vector<S>::Print()
{
	HANDLE hConsole = GetStdHandle(STD_OUTPUT_HANDLE);

	SetConsoleTextAttribute(hConsole, 12);

	cout <<   "The array now ----->";

	SetConsoleTextAttribute(hConsole,9 );

	for (int i = 0; i < current; i++)
	{

	    	
		cout<<i <<"-[" <<Vec[i]<< "]"<< "     ";
	}
	cout << endl;
	SetConsoleTextAttribute(hConsole, 7);

}

template <typename S>
Vector<S> Vector<S>::operator-(const Vector<S> &obj)
{
	Vector <S> Wee(size);
	if (current == obj.current) {
		for (int i = 0; i < current; i++)
		{
			Wee.Vec[i] = Vec[i] - obj.Vec[i];
		}
		Wee.current = current;
		return Wee;
	}
	else cout << "Error size not equal"; return 0;
}
template <typename S>                                                                                         // ___    ____    _____   ____       _      _____    ___    ____    ____
Vector <S> Vector <S>::operator*(const Vector<S> &obj)                                                      //  / _ \  |  _ \  | ____| |  _ \     / \    |_   _|  / _ \  |  _ \  / ___| 
{                                                                                                           // | | | | | |_) | |  _|   | |_) |   / _ \     | |   | | | | | |_) | \___ \ 
																	                              			// | |_| | |  __/  | |___  |  _ <   / ___ \    | |   | |_| | |  _ <   ___) |
	if (current = obj.current)                                                                               // \___/  |_|     |_____| |_| \_\ /_/   \_\   |_|    \___/  |_| \_\ |____/ 
	{
		Vector <S> Wee(size);                                                        
		Vector<S> Wee1;
		for (int i = 0; i < current; i++)
		{
				Wee.current = Wee.current + 1;
				Wee.Vec[i] = Vec[i] * obj.Vec[i];
		}
		Wee1.Vec[0] = Wee.Vec[0];
		for (int i = 1; i < Wee.current; i++)
		{
			Wee1.Vec[0] = Wee1.Vec[0] + Wee.Vec[i];
		}
		Wee1.current = 1;
		return Wee1;
	}
	return *this;
}
template <typename S>
bool Vector<S>:: operator == (const Vector<S> &obj)
{
	return(Same(obj));
}
template <typename S>
//  _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____ 
// |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____|
// |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____|
int Vector<S>::Return_current()
{
	return current;
}
template <typename S>
void Vector<S>::Re_size ()
{
	size = (size * 2);
	S *arra = new S[size];
	for(int i = 0 ;i<size;i++)
	{
		arra[i] = Vec[i];
	}
	Vec = new S[size];
	for (int i = 0; i < size; i++)
	{
		Vec[i] = arra[i];
	}
}
template <typename S>
void Vector<S>::add_last(S info)
	{
	Vec[current] = info;
	current++;
	
	Print();
		cout << endl;
	}
template<typename S>                                                                                          //  __  __   _____   _____   _   _    ___    ____    ____  
void Vector<S>::add_pos(S info, int position)                                                                 // |  \/  | | ____| |_   _| | | | |  / _ \  |  _ \  / ___| 
{                                                                                                             // | |\/| | |  _|     | |   | |_| | | | | | | | | | \___ \ 
	if (position <= this->size&&position >= 0)                                                                // | |  | | | |___    | |   |  _  | | |_| | | |_| |  ___) |
	{                                                                                                         // |_|  |_| |_____|   |_|   |_| |_|  \___/  |____/  |____/ 
     	if (position >= current)
		{
			add_element(info);
			return;
		}

		for (int i = current; i > 0; i--)
		{
			this->Vec[i] = Vec[i - 1];
			if (i == position)
			{
				Vec[i] = info;
				current++;
				break;
			}
		}
	}
	else 
	{
		cout << "Position not available "<<endl; return; 
    }
	Print();
}

template <typename S>
void Vector<S>::add_element(S info)
{
	size += 1;
	Vec[current] = info;
	current++;
	Print();
}
template <typename S>
void Vector<S>::clear()
{
	delete[]Vec;
	current = 0;
	Vec = new S[size];
}

template <typename S>
bool Vector<S>::contains(S info)
{

	for (int i = 0; i < size; i++)
	{
		if (Vec[i] == info)return true;

	}
	return false;
}
template <typename S>                                                                                         //  __  __   _____   _____   _   _    ___    ____    ____  
S Vector<S>::element_at(int position)                                                                         // |  \/  | | ____| |_   _| | | | |  / _ \  |  _ \  / ___| 
{                                                                                                             // | |\/| | |  _|     | |   | |_| | | | | | | | | | \___ \ 
	if (position > size)                                                                                      // | |  | | | |___    | |   |  _  | | |_| | | |_| |  ___) |
	{                                                                                                         // |_|  |_| |_____|   |_|   |_| |_|  \___/  |____/  |____/ 
		cout << "Position not available " << endl; return 0	;
	}
	else return Vec[position];
	
}
template <typename S>
S Vector<S>::element_first()
{
	return Vec[0];
}

template<typename S>
int Vector<S>::index_of(const S&obj)
{
	for (int i = 0; i < current; i++)
	{
		if (obj == Vec[i])return i;

	} cout << "no matchup"; return -1;
}
template <typename S>
bool Vector<S>::Is_empty()
{
	if (current == 0)return 1;
	else return 0;
}
template <typename S>                                                                                         //  __  __   _____   _____   _   _    ___    ____    ____  
S Vector<S>::element_last()                                                                                   // |  \/  | | ____| |_   _| | | | |  / _ \  |  _ \  / ___| 
{                                                                                                             // | |\/| | |  _|     | |   | |_| | | | | | | | | | \___ \ 
	return Vec[current-1];                                                                                    // | |  | | | |___    | |   |  _  | | |_| | | |_| |  ___) |
                                                                                                              // |_|  |_| |_____|   |_|   |_| |_|  \___/  |____/  |____/ 
}


template <typename S>
int Vector<S>::remove(int position) {
	S item;
	
	item = Vec[position];
	
	if (position >= size)
		cout <<  "Deletion not possible." << endl;
	else
	{
		for (int i = position; i < current ; i++)
			Vec[i] = Vec[i + 1];
		
	}
	current--;
	Print();
	return item;
}
template <typename S>
void Vector<S>::set_pos(S info, int position)
{
	cout << "The array before replacing ";
		Print(); 
	cout << endl;
	Vec[position] = info;
	cout << "The array after replacing ";
		Print(); 
	cout << endl;

}
template <typename S>
int Vector<S>::size_of()
{
	int counter = 0;
	for(int i = 0;i<size;i++)
	{
		if (Vec[i] != NULL)counter++;
	}
	return counter;

}
template <typename S>
int Vector<S>::lastindex_of(S info)
{
	for(int i =current ;i>=0;i--)
	{
		if (Vec[i] == info)return i;
	}
	return -1;
}
template <typename S>
bool Vector<S>::remove_same(S info)
{
	int counter= 0;
	for (int i = 0; i < current; i++)
	{
		if (Vec[i] == info)
		{
			remove(counter);
		}
		else counter++;
	}
	return 0;
}
template <typename S>
void Vector<S>::remove_all()
{
	clear();
	size = 0;
}