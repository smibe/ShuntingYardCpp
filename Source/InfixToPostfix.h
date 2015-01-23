/*****************************************************************************
* Copyright (c) 2012 Avira Operations GmbH & Co KG. All rights reserved.
*****************************************************************************/
#pragma once

class InfixToPostfix
{
public:
    InfixToPostfix() { }
    ~InfixToPostfix() { }

    std::wstring Transform(const std::wstring& input);
    std::vector<std::wstring> SplitString(const std::wstring& input);
    std::wstring CatStrings(const std::vector<std::wstring>& strings);
};

