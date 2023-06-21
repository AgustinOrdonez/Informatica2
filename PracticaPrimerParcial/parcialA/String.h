#ifndef EJERCICIOSINFORMATICA2_STRING_H
#define EJERCICIOSINFORMATICA2_STRING_H


class String {
private:
    char *p;
    short tam;
public;

    String();

    String(const char *);

    String(const String &);

    ~String();

    String operator=(const String &);

    /**Copies content, not mem direction*/
    String operator=(const char *);

    String operator+=(const char *);

    String operator+(const String &);

    String operator+=(const String &);

    friend String operator+(const char *, const String &);

    friend ostream &operator<<(const ostream &, const String &);

    friend istream &operator>>(const istream &, const String &);
};


#endif //EJERCICIOSINFORMATICA2_STRING_H
