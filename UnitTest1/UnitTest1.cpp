#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\vladt\source\repos\PR4.1\PR4.1\Element.h"
#include "C:\Users\vladt\source\repos\PR4.1\PR4.1\ARprog.cpp"
#include "C:\Users\vladt\source\repos\PR4.1\PR4.1\GEOprog.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Element* a = new GEOprog(1, 2);
			Assert::AreEqual((int)a->element(1), 2);
		}
	};
}
