#include <iostream>

int main()
{
    using std::cout;
    using std::cin;

    const int SecondsPerDay {86400};
    const int SecondsPerHour {3600};
    const int SecondsPerMinute {60};

    cout << "Enter the number of seconds: ";
    long long second {0};
    cin >> second;
    long long day {second / SecondsPerDay};
    long long hour {(second - day * SecondsPerDay) / SecondsPerHour};
    long long minute {(second - day * SecondsPerDay - hour * SecondsPerHour) / SecondsPerMinute};
    cout << second << " seconds = " << day << " days, " << hour << " hours, " << minute << " minutes, "
        << second - day * SecondsPerDay - hour * SecondsPerHour - minute * SecondsPerMinute
        << " seconds\n\n";
    return 0;
}
