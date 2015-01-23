/*****************************************************************************
* Copyright (c) 2012 Avira Operations GmbH & Co KG. All rights reserved.
*****************************************************************************/
#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Source\InfixToPostfix.h"
#include "..\Source\StringUtil.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace InfixToPostfix_UnitTest
{
    TEST_CLASS(InfoxToPostfix_UnitTest)
    {
    public:

        TEST_METHOD(Transform_EmptyString_ReturnsEmpty)
        {
            Given(L"");
            Expect(L"");
        }

        TEST_METHOD(Transform_HandleOneBinaryOperator)
        {
            Given(L"1 + 2");
            Expect(L"1 2 +");
        }

        TEST_METHOD(Transform_HandleOneBinaryOperatorWithMultiCharacterOperands)
        {
            Given(L"aa + ab");
            Expect(L"aa ab +");
        }

    protected:
        void Given(String input)
        {
            this->input = input;
        }

        void Expect(String result)
        {
            Assert::AreEqual(result, infixToPostfix.Transform(this->input));
        }

    protected:
        String input;
        InfixToPostfix infixToPostfix;
    };
}