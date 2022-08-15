#pragma once

template <typename T> class Vector
{
private:
	T *Vec;
	int size;
	int current;
public:
//  _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____ 
// |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____|
// |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____|
	Vector();
	Vector(int CapacityInI);
	Vector(const Vector &obj);
	~Vector();
	
	Vector<T> operator +(const Vector&obj);
	Vector<T> operator - (const Vector &obj);
	Vector<T> operator * (const Vector &obj);
	Vector<T>& operator = (const Vector &obj);
	bool Is_empty();
	bool contains(T info);
	bool remove_same(T info);
	bool Same(const Vector &obj);
	bool operator ==(const Vector &obj);
	T element_last();
	T element_first();
	T element_at(int position);
	int size_of();
	int Return_current();
	int remove(int position);     //returns the value of the removed item + it removes it from the array.
	int index_of(const T&obj);
	int lastindex_of(T info);
	void clear();
	void Print();
	void Re_size();
	void remove_all();            //it will clear the array and sets the size to 0.
	void add_last(T info);
	void add_element(T info);
	void add_pos(T info, int position);
	void set_pos(T info, int position);

//  _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____   _____ 
// |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____|
// |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____| |_____|
};