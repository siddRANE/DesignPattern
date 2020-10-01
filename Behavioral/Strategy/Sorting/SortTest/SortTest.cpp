#include "pch.h"
#include "CppUnitTest.h"
#include "BubbleSort.hxx"
#include "SelectionSort.hxx"
#include "DataSorter.h"
#include <vector>
using namespace std;
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace SortTest
{
	TEST_CLASS(SortTest)
	{
	public:
		
		TEST_METHOD(Test1)
		{
			vector<int> v{ -2,-4,1,0 };
			SelectionSort ssort;
			BubbleSort bsort;
			DataSorter dst(v);
			dst.setStrategy(&bsort);
			dst.sort();
			Assert::AreEqual((size_t)4, v.size());
			Assert::AreEqual(-4, v[0]);
			Assert::AreEqual(-2, v[1]);
			Assert::AreEqual(0, v[2]);
			Assert::AreEqual(1, v[3]);
		}

		TEST_METHOD(Test2)
		{
			vector<int> v{ -1,4,-2,3 };
			SelectionSort ssort;
			BubbleSort bsort;
			DataSorter dst(v);
			dst.setStrategy(&bsort);
			dst.sort();
			Assert::AreEqual((size_t)4, v.size());
			Assert::AreEqual(-2, v[0]);
			Assert::AreEqual(-1, v[1]);
			Assert::AreEqual(3, v[2]);
			Assert::AreEqual(4, v[3]);
		}

		TEST_METHOD(Test3)
		{
			vector<int> v{ 4,3,-1,-2 };
			SelectionSort ssort;
			BubbleSort bsort;
			DataSorter dst(v);
			dst.setStrategy(&bsort);
			dst.sort();
			Assert::AreEqual((size_t)4, v.size());
			Assert::AreEqual(-2, v[0]);
			Assert::AreEqual(-1, v[1]);
			Assert::AreEqual(3, v[2]);
			Assert::AreEqual(4, v[3]);
		}

		TEST_METHOD(Test4)
		{
			vector<int> v{  2,8,4};
			SelectionSort s,ssort;
			BubbleSort bsort;
			DataSorter dst(v);
			dst.setStrategy(&bsort);
			dst.sort();
			Assert::AreEqual((size_t)3, v.size());
			Assert::AreEqual(2, v[0]);
			Assert::AreEqual(4, v[1]);
			Assert::AreEqual(8, v[2]);
		}

		TEST_METHOD(Test5)
		{
			vector<int> v{ 1,5,5 };
			SelectionSort s, ssort;
			BubbleSort bsort;
			DataSorter dst(v);
			dst.setStrategy(&bsort);
			dst.sort();
			Assert::AreEqual((size_t)3, v.size());
			Assert::AreEqual(1, v[0]);
			Assert::AreEqual(5, v[1]);
			Assert::AreEqual(5, v[2]);
		}

		TEST_METHOD(Test6)
		{
			vector<int> v{ 2,2,1 };
			SelectionSort s, ssort;
			BubbleSort bsort;
			DataSorter dst(v);
			dst.setStrategy(&bsort);
			dst.sort();
			Assert::AreEqual((size_t)3, v.size());
			Assert::AreEqual(1, v[0]);
			Assert::AreEqual(2, v[1]);
			Assert::AreEqual(2, v[2]);
		}

		TEST_METHOD(Test7)
		{
			vector<int> v{ 4,2 };
			SelectionSort s, ssort;
			BubbleSort bsort;
			DataSorter dst(v);
			dst.setStrategy(&bsort);
			dst.sort();
			Assert::AreEqual((size_t)2, v.size());
			Assert::AreEqual(2, v[0]);
			Assert::AreEqual(4, v[1]);
		}

		TEST_METHOD(Test8)
		{
			vector<int> v{ 3,4 };
			SelectionSort s, ssort;
			BubbleSort bsort;
			DataSorter dst(v);
			dst.setStrategy(&bsort);
			dst.sort();
			Assert::AreEqual((size_t)2, v.size());
			Assert::AreEqual(3, v[0]);
			Assert::AreEqual(4, v[1]);
		}

		TEST_METHOD(Test9)
		{
			vector<int> v{ 5,5 };
			SelectionSort s, ssort;
			BubbleSort bsort;
			DataSorter dst(v);
			dst.setStrategy(&bsort);
			dst.sort();
			Assert::AreEqual((size_t)2, v.size());
			Assert::AreEqual(5, v[0]);
			Assert::AreEqual(5, v[1]);
		}


		TEST_METHOD(Test10)
		{
			vector<int> v{ 5 };
			SelectionSort s, ssort;
			BubbleSort bsort;
			DataSorter dst(v);
			dst.setStrategy(&bsort);
			dst.sort();
			Assert::AreEqual((size_t)1, v.size());
			Assert::AreEqual(5, v[0]);
		}

		TEST_METHOD(Test11)
		{
			vector<int> v{  };
			SelectionSort s, ssort;
			BubbleSort bsort;
			DataSorter dst(v);
			dst.setStrategy(&bsort);
			dst.sort();
			Assert::AreEqual((size_t)0, v.size());
		}



	};
}
