#include <iostream>
#include <fstream>
#include <string>


string format_as_csv(Session session_obj) {
    string fmt = session_obj.datetime + "," +
        session_obj.duration + "," +
        session_obj.description + "\n";
    return fmt;
}


void write_to_file(string fmt_string) {

    // Open in append mode
    ofstream file("tracker.csv", ios_base::app);
    file << fmt_string;
    file.close();
}
