// #include <iostream>
// #include <vector>
// #include <algorithm>

// using namespace std;

// // Structure to store meeting details
// struct Meeting {
//     int start;
//     int end;
//     int id;
// };

// // Comparator function to sort meetings by end time.
// // If end times are equal, sort by original ID.
// bool compareMeetings(const Meeting& a, const Meeting& b) {
//     if (a.end != b.end) {
//         return a.end < b.end;
//     }
//     return a.id < b.id;
// }

// vector<int> maxMeetings(const vector<int>& start, const vector<int>& end, int n) {
//     vector<Meeting> meetings(n);
    
//     // Step 1: Populate the structure with 1-based index
//     for (int i = 0; i < n; i++) {
//         meetings[i].start = start[i];
//         meetings[i].end = end[i];
//         meetings[i].id = i + 1; 
//     }
    
//     // Step 2: Sort based on end times
//     sort(meetings.begin(), meetings.end(), compareMeetings);
    
//     // Step 3: Iterate and pick non-overlapping meetings
//     vector<int> selectedMeetings;
    
//     // Always select the first meeting after sorting
//     selectedMeetings.push_back(meetings[0].id);
//     int timeLimit = meetings[0].end;
    
//     for (int i = 1; i < n; i++) {
//         // Check if current meeting starts after the previous one ends
//         if (meetings[i].start > timeLimit) {
//             selectedMeetings.push_back(meetings[i].id);
//             timeLimit = meetings[i].end; // Update room availability time
//         }
//     }
    
//     return selectedMeetings;
// }

// int main() {
//     // Example Input
//     vector<int> start = {1, 3, 0, 5, 8, 5};
//     vector<int> end = {2, 4, 6, 7, 9, 9};
//     int n = start.size();
    
//     vector<int> result = maxMeetings(start, end, n);
    
//     cout << "Selected meeting indices: ";
//     for (int id : result) {
//         cout << id << " ";
//     }
//     cout << endl;
    
//     return 0;
// }

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Meeting {
    int start, end;
};

bool compare(Meeting a, Meeting b) {
    return a.end < b.end;
}

int maxMeetings(vector<int>& start, vector<int>& end) {
    int n = start.size();

    vector<Meeting> meetings;

    for (int i = 0; i < n; i++) {
        meetings.push_back({start[i], end[i]});
    }

    sort(meetings.begin(), meetings.end(), compare);

    int count = 1;
    int lastEnd = meetings[0].end;

    for (int i = 1; i < n; i++) {
        if (meetings[i].start > lastEnd) {
            count++;
            lastEnd = meetings[i].end;
        }
    }

    return count;
}

int main() {
    vector<int> start = {1, 3, 0, 5, 8, 5};
    vector<int> end   = {2, 4, 6, 7, 9, 9};

    cout << "Maximum meetings = " << maxMeetings(start, end);

    return 0;
}