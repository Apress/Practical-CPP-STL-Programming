//-----------------------------------------------------------------------------
// Ch10_04.cpp
//-----------------------------------------------------------------------------

#include <iostream>
#include <stdexcept>
#include "Ch10_04.h"

int main(int, char** argv)
{
    int rc {};

    try
    {
        std::println("\n----- Results for example Ch10_04 -----");
        Ch10_04_ex();
    }

    catch (const std::exception& ex)
    {
        rc = 1;
        std::println("Exception occurred in program {:s}", argv[0]);
        std::println("{:s}", ex.what());
    }

    return rc;
}
