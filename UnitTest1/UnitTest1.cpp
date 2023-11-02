#include "pch.h"
#include "CppUnitTest.h"
#include "../FileName.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			const int n = 5;
			int a[n] = { -4, -3, 2, 2, 4 };
			int sum = Sum(a, n, 0, 0);
			Assert::AreEqual(sum, 4);
		}
	};
}
