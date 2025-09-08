#include "includes.h"
#include "Human.h"
int main()
{
	Human obj1;
	obj1.Init("Yehor", "Holotov", 18);
	obj1.Print();

	obj1.SetName("Asd");
	obj1.SetSurname("Lasd");
	obj1.SetAge(111);

	obj1.Print();
}
