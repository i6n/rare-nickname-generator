#include <iostream>
#include <Windows.h>

CONST std::string gen_random(const int len) {
    static const char alphanum[] =
        "0123456789"
        "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
        "abcdefghijklmnopqrstuvwxyz";
    std::string tmp_s;
    tmp_s.reserve(len);

    for (int i = 0; i < len; ++i) {
        tmp_s += alphanum[rand() % (sizeof(alphanum) - 1)];
    }

    return tmp_s;
}

INT main()
{
    long count;
    short usernameLength;
    std::cout << "hi\n";
    printf("enter how much usernames you would like to gen > ");
    std::cin >> count;
    printf("\nenter how long usernames should be > ");
    std::cin >> usernameLength;

    for(int i = 0; i < count; ++i)
    {
        printf(gen_random(usernameLength).c_str());
        printf("\n");
    }
    std::cin;
}
