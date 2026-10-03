
#include <bits/stdc++.h>
using namespace std;

vector<string> reformatDate(vector<string> dates) {
    vector<string> result;

    unordered_map<string, string> month = {
        {"Jan", "01"}, {"Feb", "02"}, {"Mar", "03"},
        {"Apr", "04"}, {"May", "05"}, {"Jun", "06"},
        {"Jul", "07"}, {"Aug", "08"}, {"Sep", "09"},
        {"Oct", "10"}, {"Nov", "11"}, {"Dec", "12"}
    };

    for (string date : dates) {
        stringstream ss(date);

        string day, mon, year;
        ss >> day >> mon >> year;

        // Remove the last two characters: "st", "nd", "rd", or "th"
        day = day.substr(0, day.size() - 2);

        // Add leading zero if day is a single digit
        if (day.size() == 1)
            day = "0" + day;

        result.push_back(year + "-" + month[mon] + "-" + day);
    }

    return result;
}

int main() {
    vector<string> dates = {
        "1st Mar 1974",
        "22nd Jan 2013",
        "4th Dec 2020"
    };

    vector<string> result = reformatDate(dates);

    for (const string& date : result) {
        cout << date << '\n';
    }

    return 0;
}

