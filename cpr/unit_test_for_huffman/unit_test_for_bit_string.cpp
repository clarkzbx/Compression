#include "stdafx.h"
#include "CppUnitTest.h"
#include "../huffman/bit_string.hpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace unit_test_for_huffman
{
	TEST_CLASS(unit_test_for_bit_string)
	{
	public:
		
		TEST_METHOD(ctor)
		{
			cpr::huffman::BitString<char> bit_string;
		}

		TEST_METHOD(data)
		{
			cpr::huffman::BitString<char> bit_string;
			Assert::AreEqual(0u, bit_string.data().size());
		}

		TEST_METHOD(bit_length)
		{
			cpr::huffman::BitString<char> bit_string;

			Assert::AreEqual(1u, bit_string.bit_length(0));
			Assert::AreEqual(7u, bit_string.bit_length(127));
			Assert::AreEqual(8u, bit_string.bit_length(-1));
			Assert::AreEqual(8u, bit_string.bit_length(-127));
			Assert::AreEqual(8u, bit_string.bit_length(-128));
			Assert::AreNotEqual(8u, bit_string.bit_length(-129));
		}
	};
}