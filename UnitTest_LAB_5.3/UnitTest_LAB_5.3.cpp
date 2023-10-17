#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_5.3/lab_5.3.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTestLAB53
{
	TEST_CLASS(UnitTestLAB53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double test;
			test = p(1);
			double z = abs(test - 0.403278);
			
			Assert::IsTrue(z < 1e-5);
		}
	};
}
