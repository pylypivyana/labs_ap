#include "pch.h"
#include "CppUnitTest.h"
#include "../lan_05.1/lan_05.1.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double a = 1.0;
			double b = 2.0;
			double c = 3.0;

			double expected = a * sin(b) + b * sin(a) + pow(c, 2);

			Assert::AreEqual(expected, f(a, b, c), 0.001);
		}
	};
}
