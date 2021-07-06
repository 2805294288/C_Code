class Solution {
public:
    static bool com(vector<int>& a, vector<int>& b)
    {
        return a[0] < b[0];
    }
    int findMinArrowShots(vector<vector<int>>& points) {
        if(points.size() < 1)
        {
            return 0;
        }
        sort(points.begin(),points.end(),com);
        int count = 1;
        for(int i = 1; i < points.size(); i++)
        {
            if(points[i][0] > points[i-1][1])
            {
                count++;
            }
            else
            {
                points[i][1] = min(points[i][1],points[i-1][1]);
            }
        }
        return count;
    }
};