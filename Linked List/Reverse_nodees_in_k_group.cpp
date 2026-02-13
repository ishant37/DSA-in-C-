#include <iostream>

struct ListNode {
    int val;
    ListNode *next;
    ListNode(int x) : val(x), next(nullptr) {}
};

class Solution {
public:
    ListNode* reverseKGroup(ListNode* head, int k) {
        ListNode dummy(0);
        dummy.next = head;
        ListNode* prevGroupEnd = &dummy;

        while (true) {
            ListNode* kth = getKthNode(prevGroupEnd, k);
            if (!kth) break; // If there are less than k nodes left, we are done.

            ListNode* groupStart = prevGroupEnd->next;
            ListNode* groupEnd = kth;
            ListNode* nextGroupStart = kth->next;

            // Reverse the group
            reverseGroup(groupStart, groupEnd);

            // Connect the previous group with the reversed group
            prevGroupEnd->next = groupEnd;
            groupStart->next = nextGroupStart;

            // Move prevGroupEnd to the end of the reversed group
            prevGroupEnd = groupStart;
        }

        return dummy.next;
    }

private:
    ListNode* getKthNode(ListNode* start, int k) {
        ListNode* curr = start;
        for (int i = 0; i < k && curr; ++i) {
            curr = curr->next;
        }
        return curr; // Returns the k-th node or nullptr if there are less than k nodes
    }

    void reverseGroup(ListNode* start, ListNode* end) {
        ListNode* prev = end->next;
        ListNode* curr = start;
        while (prev != end) {
            ListNode* nextTemp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nextTemp;
        }
    }
};

// Helper function to create a linked list from a vector
ListNode* createLinkedList(const std::vector<int>& values) {
    ListNode dummy(0);
    ListNode* current = &dummy;
    for (int value : values) {
        current->next = new ListNode(value);
        current = current->next;
    }
    return dummy.next;
}

// Helper function to print the linked list
void printLinkedList(ListNode* head) {
    while (head) {
        std::cout << head->val << " -> ";
        head = head->next;
    }
    std::cout << "nullptr" << std::endl;
}

int main() {
    Solution solution;
    std::vector<int> values = {1, 2, 3, 4, 5};
    ListNode* head = createLinkedList(values);
    int k = 2;

    std::cout << "Original list: ";
    printLinkedList(head);

    ListNode* newHead = solution.reverseKGroup(head, k);
    
    std::cout << "Reversed in groups of " << k << ": ";
    printLinkedList(newHead);

    return 0;
}
