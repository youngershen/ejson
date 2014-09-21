// author : younger.shen
// email  : younger.x.shen@gmail.com


#include <stdio.h>
#include "ejson.h"

int
main(int argc, char ** argv)
{
    ejson_parse_string("\"{\"name\" : \"jack \"}\"");
}

