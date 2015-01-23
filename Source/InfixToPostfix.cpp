/*****************************************************************************
* Copyright (c) 2012 Avira Operations GmbH & Co KG. All rights reserved.
*****************************************************************************/
#include "stdafx.h"
#include "InfixToPostfix.h"
#include "StringUtil.h"

std::wstring InfixToPostfix::Transform(const std::wstring& input)
{
    if (input.empty())
    {
        return input;
    }

    std::vector<std::wstring> tokens = StringUtil::SplitString(input);
    std::vector<std::wstring> result = { tokens[0], tokens[2], tokens[1] };
    return StringUtil::CatStrings(result);
;
}
