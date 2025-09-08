#pragma once
class Human
{
private:
	char* name;
	char* surname;
	int age;
public:
	Human();
	Human(const char* name, const char* surname, int age);
	~Human();

	char* GetName();
	char* GetSurname();
	int GetAge();


	void SetName(char* name);
	void SetSurname(char* surname);
	void SetAge(int age);

};
