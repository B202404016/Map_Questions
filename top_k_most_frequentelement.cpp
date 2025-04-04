class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) 
    {
        unordered_map<int, int> freqTable;  
        for (int num : nums) 
        {
            freqTable[num]++;
        }
        unordered_map<int, ListNode*> reversedTable;
        
        for (auto& it : freqTable) 
        {
            int element = it.first;
            int frequency = it.second;
            if (reversedTable.find(frequency) == reversedTable.end()) 
            {
                reversedTable[frequency] = new ListNode(element);
            } else 
            {
                ListNode* newNode = new ListNode(element);
                newNode->next = reversedTable[frequency]; 
                reversedTable[frequency] = newNode;
            }
        }
        vector<int> result;
        for (int i = nums.size(); i > 0 && k > 0; i--)
         { 
            if (reversedTable.find(i) != reversedTable.end()) 
            {
                ListNode* head = reversedTable[i];
                while (head && k > 0) {
                    result.push_back(head->val);
                    head = head->next;
                    k--;
                }
            }
        }

        return result;
    }
};
