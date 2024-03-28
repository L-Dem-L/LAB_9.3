#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_9.3/Main.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
	TEST_CLASS(UnitTest)
	{
	public:
		
		TEST_METHOD(TestSort)
		{
			Zodiac S[3];
			int B[3][3];

			S[0].surname = "Doe";
			S[0].name = "John";
			S[0].zodiac_sign = "Aries";
			B[0][0] = 1;
			B[0][1] = 2;
			B[0][2] = 2000;

			S[1].surname = "Smith";
			S[1].name = "Jane";
			S[1].zodiac_sign = "Leo";
			B[1][0] = 3;
			B[1][1] = 4;
			B[1][2] = 1999;

			S[2].surname = "Johnson";
			S[2].name = "Robert";
			S[2].zodiac_sign = "Taurus";
			B[2][0] = 5;
			B[2][1] = 6;
			B[2][2] = 2001;

			sort(S, B, 3);

			Assert::AreEqual(std::string("Smith"), S[0].surname);
			Assert::AreEqual(std::string("Jane"), S[0].name);
			Assert::AreEqual(std::string("Leo"), S[0].zodiac_sign);
			Assert::AreEqual(3, B[0][0]);
			Assert::AreEqual(4, B[0][1]);
			Assert::AreEqual(1999, B[0][2]);

			Assert::AreEqual(std::string("Doe"), S[1].surname);
			Assert::AreEqual(std::string("John"), S[1].name);
			Assert::AreEqual(std::string("Aries"), S[1].zodiac_sign);
			Assert::AreEqual(1, B[1][0]);
			Assert::AreEqual(2, B[1][1]);
			Assert::AreEqual(2000, B[1][2]);

			Assert::AreEqual(std::string("Johnson"), S[2].surname);
			Assert::AreEqual(std::string("Robert"), S[2].name);
			Assert::AreEqual(std::string("Taurus"), S[2].zodiac_sign);
			Assert::AreEqual(5, B[2][0]);
			Assert::AreEqual(6, B[2][1]);
			Assert::AreEqual(2001, B[2][2]);
		}

		TEST_METHOD(TestSearch)
		{
			Zodiac S[3];
			int B[3][3];

			S[0].surname = "Doe";
			S[0].name = "John";
			S[0].zodiac_sign = "Aries";
			B[0][0] = 1;
			B[0][1] = 2;
			B[0][2] = 2000;

			S[1].surname = "Smith";
			S[1].name = "Jane";
			S[1].zodiac_sign = "Leo";
			B[1][0] = 3;
			B[1][1] = 4;
			B[1][2] = 1999;

			S[2].surname = "Johnson";
			S[2].name = "Robert";
			S[2].zodiac_sign = "Taurus";
			B[2][0] = 5;
			B[2][1] = 6;
			B[2][2] = 2001;

			string searchName = "Smith";
			search(S, B, 3, searchName);

		}

	};
}
