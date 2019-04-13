#include "CppUnitTest.h"
#include "..//1.2 laba - oop/animal_atd.h"
#include "..//1.2 laba - oop/beast_atd.h"
#include "..//1.2 laba - oop/bird_atd.h"
#include "..//1.2 laba - oop/fish_atd.h"
#include "..//1.2 laba - oop/container_atd.h"
#include <string>
#include <fstream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace simple_animals;
using namespace std;

TEST_CLASS(In_lower)
{
public:

	TEST_METHOD(Test_fish)
	{
		fish* testing_type = new fish;
		ifstream test_file("../UnitTest/TestFiles/In_low_fish.txt");
		testing_type->InData(test_file);
		string actual_name = testing_type->name;
		string expected_name = "Плотва";
		Assert::AreEqual(expected_name, actual_name);

		int actual_age = testing_type->age;
		int expected_age = 3;
		Assert::AreEqual(expected_age, actual_age);

		int actual_place = testing_type->place;
		int expected_place = 2;
		Assert::AreEqual(expected_place, actual_place);
	}

	TEST_METHOD(Test_beast)
	{
		beast* testing_type = new beast;
		ifstream test_file("../UnitTest/TestFiles/In_low_beast.txt");
		testing_type->InData(test_file);
		int actual_eat = testing_type->eat;
		int expected_eat = 1;
		Assert::AreEqual(expected_eat, actual_eat);

		int actual_age = testing_type->age;
		int expected_age = 3;
		Assert::AreEqual(expected_age, actual_age);

		string actual_name = testing_type->name;
		string expected_name = "Кошка";
		Assert::AreEqual(expected_name, actual_name);
	}

	TEST_METHOD(Test_bird)
	{
		bird* testing_type = new bird;
		ifstream test_file("../UnitTest/TestFiles/In_low_bird.txt");
		testing_type->InData(test_file);
		int actual_fly = testing_type->fly;
		int expected_fly = 1;
		Assert::AreEqual(expected_fly, actual_fly);

		int actual_age = testing_type->age;
		int expected_age = 3;
		Assert::AreEqual(expected_age, actual_age);

		string actual_name = testing_type->name;
		string expected_name = "Соловей";
		Assert::AreEqual(expected_name, actual_name);
	}
};

TEST_CLASS(In_higher)
{
public:

	TEST_METHOD(Test_cont_IN_OUT)
	{
		ifstream test_file_in("../UnitTest/TestFiles/In_higher_1.txt");
		simple_animals::container* begin = new simple_animals::container;
		begin->In(test_file_in);
		ofstream test_file_out("../UnitTest/TestFiles/In_higher_2.txt");
		begin->Out(test_file_out);

		int expected = true;
		int actual = true;

		int i = 0;
		char ch_1[20], ch_2[20];
		FILE *file_1 = fopen("../UnitTest/TestFiles/In_higher_2.txt", "r");;
		FILE *file_2 = fopen("../UnitTest/TestFiles/In_higher_3.txt", "r");
		while (!feof(file_1) && !feof(file_2))
		{
			fgets(ch_1, 20, file_1);
			fgets(ch_2, 20, file_2);
			i++;
			if (strcmp(ch_1, ch_2))
				actual = false;
		}
		Assert::AreEqual(expected, actual);
	}
};

TEST_CLASS(Out_lower)
{
public:

	TEST_METHOD(Test1_fish)
	{
		fish testing_type;
		testing_type.age = 3;
		char tmp_name[20] = "Плотва";
		testing_type.place = 2;
		strcpy(testing_type.name, tmp_name);
		ofstream test_file_out("../UnitTest/TestFiles/Out_lower_fish.txt");
		testing_type.Out(test_file_out);
		test_file_out.close();

		ifstream test_file_in("../UnitTest/TestFiles/Out_lower_fish.txt");
		string actual;
		getline(test_file_in, actual);
		test_file_in.close();
		string expected = "Fish Плотва lives in river. Age: 3";

		Assert::AreEqual(expected, actual);
	}

	TEST_METHOD(Test2_bird)
	{
		bird testing_type;
		testing_type.age = 3;
		char tmp_name[20] = "Воробей";
		testing_type.fly = 1;
		strcpy(testing_type.name, tmp_name);
		ofstream test_file_out("../UnitTest/TestFiles/Out_lower_bird.txt");
		testing_type.Out(test_file_out);
		test_file_out.close();

		ifstream test_file_in("../UnitTest/TestFiles/Out_lower_bird.txt");
		string actual;
		getline(test_file_in, actual);
		test_file_in.close();
		string expected = "Bird Воробей is migratory. Age: 3";

		Assert::AreEqual(expected, actual);
	}

	TEST_METHOD(Test3_beast)
	{
		beast testing_type;
		testing_type.age = 3;
		char tmp_name[20] = "Кошка";
		testing_type.eat = 1;
		strcpy(testing_type.name, tmp_name);
		ofstream test_file_out("../UnitTest/TestFiles/Out_lower_beast.txt");
		testing_type.Out(test_file_out);
		test_file_out.close();

		ifstream test_file_in("../UnitTest/TestFiles/Out_lower_beast.txt");
		string actual;
		getline(test_file_in, actual);
		test_file_in.close();
		string expected = "Beast Кошка is herbivorous. Age: 3";

		Assert::AreEqual(expected, actual);
	}
};

TEST_CLASS(IN_OUT_higher)
{
public:

	TEST_METHOD(Test_cont_IN_OUT)
	{
		ifstream test_file_in("../UnitTest/TestFiles/In_higher_1.txt");
		simple_animals::container* begin = new simple_animals::container;
		begin->In(test_file_in);
		ofstream test_file_out("../UnitTest/TestFiles/In_Out_higher_2.txt");
		begin->Out(test_file_out);

		int expected = true;
		int actual = true;

		int i = 0;
		char ch_1[20], ch_2[20];
		FILE *file_1 = fopen("../UnitTest/TestFiles/In_Out_higher_2.txt", "r");;
		FILE *file_2 = fopen("../UnitTest/TestFiles/In_Out_higher_3.txt", "r");
		while (!feof(file_1) && !feof(file_2))
		{
			fgets(ch_1, 20, file_1);
			fgets(ch_2, 20, file_2);
			i++;
			if (strcmp(ch_1, ch_2))
				actual = false;
		}
		Assert::AreEqual(expected, actual);
	}
};

TEST_CLASS(Sort)
{
public:

	TEST_METHOD(Test_sort_IN_OUT)
	{

		ifstream test_file_in("../UnitTest/TestFiles/In_higher_1.txt");
		simple_animals::container* begin = new simple_animals::container;
		begin->In(test_file_in);
		begin->Sort();
		ofstream test_file_out("../UnitTest/TestFiles/Sort_2.txt");
		begin->Out(test_file_out);

		int expected = true;
		int actual = true;

		int i = 0;
		char ch_1[20], ch_2[20];
		FILE *file_1 = fopen("../UnitTest/TestFiles/Sort_2.txt", "r");;
		FILE *file_2 = fopen("../UnitTest/TestFiles/Sort_3.txt", "r");
		while (!feof(file_1) && !feof(file_2))
		{
			fgets(ch_1, 20, file_1);
			fgets(ch_2, 20, file_2);
			i++;
			if (strcmp(ch_1, ch_2))
				actual = false;
		}
		Assert::AreEqual(expected, actual);
	}
};

TEST_CLASS(Filter)
{
public:

	TEST_METHOD(Test_filter_IN_OUT)
	{
		ifstream test_file_in("../UnitTest/TestFiles/In_higher_1.txt");
		simple_animals::container* begin = new simple_animals::container;
		begin->In(test_file_in);
		ofstream test_file_out("../UnitTest/TestFiles/Filter_2.txt");
		begin->OnlyFish(test_file_out);

		int expected = true;
		int actual = true;

		int i = 0;
		char ch_1[20], ch_2[20];
		FILE *file_1 = fopen("../UnitTest/TestFiles/Filter_2.txt", "r");;
		FILE *file_2 = fopen("../UnitTest/TestFiles/Filter_3.txt", "r");
		while (!feof(file_1) && !feof(file_2))
		{
			fgets(ch_1, 20, file_1);
			fgets(ch_2, 20, file_2);
			i++;
			if (strcmp(ch_1, ch_2))
				actual = false;
		}
		Assert::AreEqual(expected, actual);
	}
};

TEST_CLASS(LengthName_func)
{
public:
	TEST_METHOD(Test1)
	{
		beast s;
		char testName[20] = "Волк";
		for (int i = 0; i < 20; i++)
			s.name[i] = testName[i];
		int actual = s.LenghtName();

		Assert::AreEqual(4, actual);
	}

	TEST_METHOD(Test2)
	{
		beast s;
		char testName[20] = "";
		for (int i = 0; i < 20; i++)
			s.name[i] = testName[i];
		int actual = s.LenghtName();

		Assert::AreEqual(0, actual);
	}

	TEST_METHOD(Test3)
	{
		beast s;
		char testName[30] = "Волкиииииииииииииии";
		for (int i = 0; i < 20; i++)
			s.name[i] = testName[i];
		int actual = s.LenghtName();

		Assert::AreEqual(19, actual);
	}
};

TEST_CLASS(Multimethod)
{
public:

	TEST_METHOD(Test_MM)
	{

		ifstream test_file_in("../UnitTest/TestFiles/MM_1.txt");
		simple_animals::container* begin = new simple_animals::container;
		begin->In(test_file_in);
		ofstream test_file_out("../UnitTest/TestFiles/MM_2.txt");
		begin->MultiMethod(test_file_out);

		int expected = true;
		int actual = true;

		int i = 0;
		char ch_1[20], ch_2[20];
		FILE *file_1 = fopen("../UnitTest/TestFiles/MM_2.txt", "r");;
		FILE *file_2 = fopen("../UnitTest/TestFiles/MM_3.txt", "r");
		while (!feof(file_1) && !feof(file_2))
		{
			fgets(ch_1, 20, file_1);
			fgets(ch_2, 20, file_2);
			i++;
			if (strcmp(ch_1, ch_2))
				actual = false;
		}
		Assert::AreEqual(expected, actual);
	}
};


