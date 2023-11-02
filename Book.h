#pragma once
#include<iostream>
#include<string>

using namespace std;

class Book
{
private:
	string nameBook;
	string nameAuthor;
	int numberBook;
public:
	Book();
	Book(string nameBook, string nameAuthor, int numberBook);
	string getNameBook();
	string getNameAuthor();
	int getNumberBook();
	void display();
};
Book::Book()
{
}
Book::Book(string nameBook, string nameAuthor, int numberBook) {
	this->nameBook = nameBook;
	this->nameAuthor = nameAuthor;
	this->numberBook = numberBook;
}
string Book::getNameBook() {
	return this->nameBook;
}
string Book::getNameAuthor() {
	return this->nameAuthor;
}
int Book::getNumberBook() {
	return this->numberBook;
}
void Book::display() {
	cout << "Name Book: " << this->nameBook << endl;
	cout << "Name Author: " << this->nameAuthor << endl;
	cout << "Number Book: " << this->numberBook << endl;
}