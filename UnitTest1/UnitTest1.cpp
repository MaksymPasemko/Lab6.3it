#include "pch.h"
#include "CppUnitTest.h"
#include <vector>
#include "../Lab6.3.іт/pr6.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			vector<int> arr = { 2, -3, 4, -5, 6, 7, -8, 9 };
			int t = CountPositive(arr);
			Assert::AreEqual(t, 5);
		}
	};
}
