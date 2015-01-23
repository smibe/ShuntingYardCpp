/*****************************************************************************
* Copyright (c) 2012 Avira Operations GmbH & Co KG. All rights reserved.
*****************************************************************************/
#pragma once

typedef std::vector<std::wstring> StringList;
typedef std::wstring String;

class StringUtil
{
public:
    static StringList SplitString(const String& input);
    static String CatStrings(const StringList& strings);
};

