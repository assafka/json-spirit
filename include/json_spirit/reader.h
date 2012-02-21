#ifndef JSON_SPIRIT_READER
#define JSON_SPIRIT_READER

//          Copyright John W. Wilkinson 2007 - 2011
// Distributed under the MIT License, see accompanying file LICENSE.txt

// json spirit version 4.05

#if defined(_MSC_VER) && (_MSC_VER >= 1020)
# pragma once
#endif

#include "value.h"
#include "error_position.h"
#include <iostream>

namespace json_spirit
{
    // functions to reads a JSON values

#ifdef JSON_SPIRIT_VALUE_ENABLED
    bool read( const std::string& s, Value& value );
    bool read( std::istream& is,     Value& value );
    bool read( std::string::const_iterator& begin, std::string::const_iterator end, Value& value );

    void read_or_throw( const std::string& s, Value& value );
    void read_or_throw( std::istream& is,     Value& value );
    void read_or_throw( std::string::const_iterator& begin, std::string::const_iterator end, Value& value );
#endif

#if defined( JSON_SPIRIT_WVALUE_ENABLED ) && !defined( BOOST_NO_STD_WSTRING )
    bool read( const std::wstring& s, wValue& value );
    bool read( std::wistream& is,     wValue& value );
    bool read( std::wstring::const_iterator& begin, std::wstring::const_iterator end, wValue& value );

    void read_or_throw( const std::wstring& s, wValue& value );
    void read_or_throw( std::wistream& is,     wValue& value );
    void read_or_throw( std::wstring::const_iterator& begin, std::wstring::const_iterator end, wValue& value );
#endif
}

#endif
