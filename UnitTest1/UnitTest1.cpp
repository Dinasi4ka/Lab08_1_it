#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab08_1_it/Lab08_1_it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			char string[] = "'-','a','='";
			int count = 2;

			int t = Count(string);
			Assert::AreEqual(count, t);
		}
	};
}
