#include "pch.h"
#include "CppUnitTest.h"
#include "../laba6.2(1)/laba6.2(1).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest61
{
	TEST_CLASS(UnitTest61)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
				int const size = 25;
				int a[size];
				in(a, size);
				rand(size, a);
				arr(size, a);
		}
	};
}