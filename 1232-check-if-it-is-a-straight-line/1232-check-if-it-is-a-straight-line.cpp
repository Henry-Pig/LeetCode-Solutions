class Solution {
public:
    bool checkStraightLine(vector<vector<int>>& coordinates) {
        bool shu=true;
        for(int i=0;i<coordinates.size()-1;i++)
        {
            if(coordinates[i][0]!=coordinates[i+1][0])
            {
                shu=false;
                break;
            }
        }
        if(shu) return true;
        int delx=coordinates[1][0]-coordinates[0][0],dely=coordinates[1][1]-coordinates[0][1];
        for(int i=2;i<coordinates.size();i++)
        {
            if(delx*(coordinates[i][1]-coordinates[0][1])!=dely*(coordinates[i][0]-coordinates[0][0]))
            {
                return false;
            }
        }
        return true;
    }
};