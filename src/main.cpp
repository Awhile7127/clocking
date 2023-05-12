// I/O, string
#include <iostream>
#include <string>

// Header files found in /src
#include "classes.h"
#include "time.h"
#include "fileio.h"

using namespace std;


int main() {

    // Declare a new session
    Session session_obj;

    // Fetch the current time, used later to calculate how long
    // the program has been running, ergo how long the user has
    // been working
    int now = get_current_time();

    // Assigned here to account for overnight working
    string date = get_current_date();

    // Get the summary of what the user has done
    cout << "Describe what you've done today\n";
    string description;
    getline(cin, description);

    // Declare class values
    session_obj.duration = calculate_time(now);
    session_obj.datetime = date;
    session_obj.description = description;

    // Format as CSV and write to file
    string fmt = format_as_csv(session_obj);
    write_to_file(fmt);
}
