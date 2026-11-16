#include "pch.h"
#include "CppUnitTest.h"
#include "../ЛР 9.2.1/macro.h"                      

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace test
{
	TEST_CLASS(test921)
	{
	public:

		TEST_METHOD(testSQR)
		{
			Assert::AreEqual(25, SQR(2 + 3));       
		}

		TEST_METHOD(testMAX)
		{
			Assert::AreEqual(5, MAX(2, 5));
		}

		TEST_METHOD(testMIN)
		{
			Assert::AreEqual(2, MIN(2, 5));
		}

		TEST_METHOD(testW1)                         
		{
			int x = 4, y = 6, z = 3;
			int w = MIN(SQR(x) + y + z, x * y * z);
			Assert::AreEqual(25, w);
		}

		TEST_METHOD(testW2)                         
		{
			int x = 4, y = 6, z = 7;
			int w = MAX(SQR(x) + SQR(y + z), x * y);
			Assert::AreEqual(185, w);
		}
	};
}