// Lab08_1_it.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

using namespace std;

int Count(char* str)
{
    int k = 0;
    for (int i = 0; i< strlen(str); i++)
        if (str[i] == '+' || str[i] == '-' || str[i] == '=')
            k++;
    return k;
}

char* Change(char* str)
{
    size_t len = strlen(str);

    char* tmp = new char[len];
    char* t = tmp;

    tmp[0] = '\0';

    size_t i = 0;

    while (i < len)
    {
        if (str[i] == '+' || str[i] == '-' || str[i] == '=')
        {
            strcat_s(t,101, "**");

            t += 2;

            i++;
        }

        else
        {
            *t++ = str[i++];
            *t = '\0';
        }
    }

    *t++ = str[i++];
    *t++ = str[i++];

    *t = '\0';

    strcpy_s(str,101, tmp);

    return tmp;
}

int main()
{
    char str[101];

    cout << "Enter string:" << endl;
    cin.getline(str, 100);
    cout <<"String contained "<< Count(str) <<" symbols of '+ - ='"<< endl;

    char* dest = new char[151];
    dest = Change(str);

    cout << "Modified string (param) : " << str << endl;
    cout << "Modified string (result): " << dest << endl;

    return 0;
}

