#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Source\StringUtil.h"
#include "TestUtilities.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace InfixToPostfix_UnitTest
{
    TEST_CLASS(StringUtil_UnitTest)
    {
    public:

        TEST_METHOD(SplitString_Test)
        {
            Assert::AreEqual(StringList(), StringUtil::SplitString(L""));
            Assert::AreEqual(StringList({ L"1", L"+", L"2" }), StringUtil::SplitString(L"1 + 2"));
            Assert::AreEqual(StringList({ L"1", L"+", L"2" }), StringUtil::SplitString(L"1 + 2 "));
        }

        TEST_METHOD(CatString_Test)
        {
            Assert::AreEqual(String(), StringUtil::CatStrings(StringList()));
            Assert::AreEqual(String(L"1 2 +"), StringUtil::CatStrings(StringList({ L"1", L"2", L"+" })));
        }
    };
}