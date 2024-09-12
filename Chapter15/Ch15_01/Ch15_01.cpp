//-----------------------------------------------------------------------------
// Ch15_01.cpp
//-----------------------------------------------------------------------------

#include <stdexcept>
#include "Ch15_01.h"

int main(int, char** argv)
{
    int rc {};

    try
    {
        std::println("\n----- Results for example Ch15_01 -----");
        Ch15_01_ex();
    }

    catch (const std::exception& ex)
    {
        rc = 1;
        std::println("Exception occurred in program {:s}", argv[0]);
        std::println("{:s}", ex.what());
    }

    return rc;
}