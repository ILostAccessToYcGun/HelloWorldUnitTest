#include "pch.h"
#include "CppUnitTest.h"
#include "string"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:

		TEST_METHOD(SanityTest)
		{
			Assert::AreEqual(true, true);
		}

		TEST_METHOD(HelloWorldTest)
		{
			std::string expectedResult = "Hello World";
			std::string input = "";
			Assert::AreEqual(input, expectedResult);
		}
	};
}
