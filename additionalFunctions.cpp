#include "header.h"

int stringLength(char* str){

    int length=0;
    while(*str){
        length++;
        str++;
    }
    return length;
}


bool isNumber(char ch){
    if(ch >= '0' && ch <= '9')
        return true;
    else
        return false;
}

char* numToString(int num)
{
    char *str = new char[1];

    int i=0;
    if(num>0)
    {

        while(num)
        {
            str[i++] = '0' + num%10;
            num = num/10;
        }

    }
    else
    {
        str[i] = '0';
    }
    str[i] = '\0';

    strrev(str);

    return str;
}

