#include "Human.h"
#include "includes.h"

Human::Human()
{
	name = nullptr;
	surname = nullptr;
	age = 0;
}

Human::Human(const char* name, const char* surname, int age)
{
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);

	this->surname = new char[strlen(surname) + 1];
	strcpy_s(this->surname, strlen(surname) + 1, surname);

	this->age = age;
}

Human::~Human()
{
	if (name != nullptr)
	{
		delete[] name;
	}

	if (surname != nullptr)
	{
		delete[] surname;
	}
	std::cout << "Destructor" << std::endl;
}

char* Human::GetName()
{
	return name;
}

char* Human::GetSurname()
{
	return surname;
}

int Human::GetAge()
{
	return age;
}

void Human::SetName(const char* name)
{
	if (this->name != nullptr)
	{
		delete this->name;
	}
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);
}

void Human::SetSurname(const char* surname)
{
	if (this->surname != nullptr)
	{
		delete this->surname;
	}

	this->surname = new char[strlen(surname) + 1];
	strcpy_s(this->surname, strlen(surname) + 1, surname);
}

void Human::SetAge(int age)
{
	this->age = age;
}

void Human::Print()
{
	std::cout << "Name: " << name << std::endl;
	std::cout << "Surname: " << surname << std::endl;
	std::cout << "Age: " << age << std::endl;
}

void Human::Init(const char* name, const char* surname, int age)
{
	if (this->name != nullptr)
	{
		delete this->name;
	}
	this->name = new char[strlen(name) + 1];
	strcpy_s(this->name, strlen(name) + 1, name);

	if (this->surname != nullptr)
	{
		delete this->surname;
	}

	this->surname = new char[strlen(surname) + 1];
	strcpy_s(this->surname, strlen(surname) + 1, surname);

	this->age = age;
}
