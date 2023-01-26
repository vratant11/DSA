class Solution {
public:
    int minMovesToSeat(vector<int>& seats, vector<int>& students) {
        sort(seats.begin(),seats.end());
        sort(students.begin(),students.end());
        int counts =0;
        for(int i=0;i<seats.size();i++){
            counts +=abs(seats[i]-students[i]);
        }
        return counts;
    }
};