// Various file-writing utilities

// datetime, string
#include <ctime>
#include <string>

using namespace std;


// Fetch the current time
int get_current_time() {
    time_t now = time(0);
    return now;
}


// Calculate the time since program execution,
// and format for length of time (seconds, minutes, hours)
string calculate_time(int execution_time) {
    int now = get_current_time();

    // Calculate the duration since program execution in seconds
    int duration = now - execution_time;
    string fmt_duration;

    if (duration < 60) {
        fmt_duration = to_string(duration) + "s";
    } else if ((duration > 60) && (duration < 1200)) {
        duration = duration / 60;
        fmt_duration = to_string(duration) + "m";
    } else if (duration > 1200) {
        duration = (duration / 60) / 60;
        fmt_duration = to_string(duration) + "h";
    }

    return fmt_duration;
}


// Fetch and format the current date
string get_current_date() {
    time_t now = get_current_time();
    tm *ltm = localtime(&now);

    int year = 1900 + ltm -> tm_year;
    int month = 1 + ltm -> tm_mon;
    int day = ltm -> tm_mday;

    string date = to_string(year) + "-"
        + to_string(month) + "-"
        + to_string(day);

    return date;
}
