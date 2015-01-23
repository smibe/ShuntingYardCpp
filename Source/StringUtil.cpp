/*****************************************************************************
* Copyright (c) 2012 Avira Operations GmbH & Co KG. All rights reserved.
*****************************************************************************/
#include "stdafx.h"
#include "StringUtil.h"
#include <regex>


StringList StringUtil::SplitString(const String& input)
{
    if (input.empty())
    {
        return StringList();
    }

    std::wregex separator(L" ");
    std::wsregex_token_iterator endOfSequence;
    std::wsregex_token_iterator token(input.begin(), input.end(), separator, -1);
    StringList result;
    while (token != endOfSequence)
    {
        result.push_back(*token);
        token++;
    }
    return result;
}

String StringUtil::CatStrings(const StringList& input)
{
    String result;
    for (auto s : input)
    {
        if (!result.empty())
        {
            result += L' ';
        }

        result += s;
    }
    return result;
}
