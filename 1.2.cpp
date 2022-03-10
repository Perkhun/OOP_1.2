#include "pch.h"
#include "CppUnitTest.h"
#include "../lab_1.2/Vector.cpp"



using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace My12
{
	TEST_CLASS(My12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Vector obj;
			
			obj.Init();
			Assert::AreEqual(0.f, obj.getVecElem(1));

		}
	};
}
