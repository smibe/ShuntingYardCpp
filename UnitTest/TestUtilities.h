/*****************************************************************************
* Copyright (c) 2012 Avira Operations GmbH & Co KG. All rights reserved.
*****************************************************************************/
#pragma once

namespace Microsoft
{
    namespace VisualStudio
    {
        namespace CppUnitTestFramework
        {
            inline std::wstring ToString(const StringList& data)
            {
                std::wstring result;
                for (auto it : data)
                {
                    result += it;
                    result += ';';
                }
                return result;
            }

            inline std::wstring ToString(const void* data)
            {
                return std::to_wstring((uint64_t)data);
            }

            template <class T>
            std::wstring ToString(const std::vector<T>& data)
            {
                std::wstring result;
                for (auto it : data)
                {
                    result += std::to_wstring(it);
                    result += ';';
                }
                return result;
            }

        }
    }
}

