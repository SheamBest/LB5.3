#include "pch.h"
#include "CppUnitTest.h"
#include "..\LB5.3\LB5.3.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLB53
{
	TEST_CLASS(UnitTestLB53)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			double t = z(0);
			Assert::AreEqual(1., t);

		}
	};
}
