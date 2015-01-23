/*****************************************************************************
* Copyright (c) 2012 Avira Operations GmbH & Co KG. All rights reserved.
*****************************************************************************/
#include "stdafx.h"
#include "CppUnitTest.h"
#include "..\Source\InfixToPostfix.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace InfixToPostfix_UnitTest
{
    TEST_CLASS(InfoxToPostfix_UnitTest)
    {
    public:

        TEST_METHOD(TransformTest)
        {
            InfixToPostfix infixToPostfix;

            Assert::AreEqual(std::wstring(L""), infixToPostfix.Transform(L""));
        }
    };
}