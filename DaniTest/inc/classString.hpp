#ifndef _CLASS_STRING_HPP_
#define _CLASS_STRING_HPP_

#include "utils.hpp"

#define MAX_BUFFER_LENGTH 50

class String {
    private:
        char *m_pointer;
        size_t m_size;
    public:
        String();
        String(const char *str);
        // The content of pointers that are members of the class will not be altered by modifying the original content.
        String(const String& original);
        ~String();
        
        String& operator=(const String& str);
        String& operator=(const char *str);
        String& operator+=(const String& str);
        String& operator+=(const char *str);
        String operator+(const String& str);
        String operator+(const char *str);
        friend String operator+(const char *str_FST, const String& str_SND);
        friend ostream& operator<<(ostream& output, const String& str);
        friend istream& operator>>(istream& input, String& str);
};

#endif // _CLASS_STRING_HPP_