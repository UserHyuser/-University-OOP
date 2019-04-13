#include "CppUnitTest.h"
#include "..//1.2 laba - oop/animal_atd.h"
#include "..//1.2 laba - oop/beast_atd.h"
#include "..//1.2 laba - oop/bird_atd.h"
#include "..//1.2 laba - oop/container_atd.h"
#include "..//1.2 laba - oop/fishes_MM.cpp"
#include "..//1.2 laba - oop/fishes_MMBeast.cpp"
#include "..//1.2 laba - oop/fishes_MMBird.cpp"
#include "..//1.2 laba - oop/fishes_MMFish.cpp"
#include "..//1.2 laba - oop/birdes_MM.cpp"
#include "..//1.2 laba - oop/beastes_MM.cpp"
#include "..//1.2 laba - oop/birdes_MMBeast.cpp"
#include "..//1.2 laba - oop/birdes_MMBird.cpp"
#include "..//1.2 laba - oop/birdes_MMFish.cpp"
#include "..//1.2 laba - oop/beastes_MMBeast.cpp"
#include "..//1.2 laba - oop/beastes_MMBirds.cpp"
#include "..//1.2 laba - oop/beastes_MMFish.cpp"
#include <string.h>
#include <fstream>

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace simple_animals;
using namespace std;

TEST_CLASS(In_lower)
{
public:

	TEST_METHOD(Test1_fish_name)
	{
		fish* testing_type = new fish;
		ifstream test_file("../UnitTest/TestFiles/In_low_fish.txt");
		testing_type->InData(test_file);
		string actual = testing_type->name;
		string expected = "Плотва";
		Assert::AreEqual(expected, actual);
	}

	TEST_METHOD(Test2_fish_age)
	{
		fish* testing_type = new fish;
		ifstream test_file("../UnitTest/TestFiles/In_low_fish.txt");
		testing_type->InData(test_file);
		int actual = testing_type->age;
		int expected = 3;
		Assert::AreEqual(expected, actual);
	}

	TEST_METHOD(Test3_fish_place)
	{
		fish* testing_type = new fish;
		ifstream test_file("../UnitTest/TestFiles/In_low_fish.txt");
		testing_type->InData(test_file);
		int actual = testing_type->place;
		int expected = 2;
		Assert::AreEqual(expected, actual);
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
		string expected = "Р С‹Р±Р° Плотва Р¶РёРІРµС‚ РІ СЂРµРєРµ РІРѕР·СЂР°СЃС‚: 3";

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


