class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
         int g=0, c=0;

        // ----------------------
        for (int i = 0; i < gas.size(); i++)
        {
            g = g + gas[i];
            c = c + cost[i];
        }
        if (c > g)
        {
            return -1;
        }
        //-------------------------

        int start = 0;
        int cg = 0;

        for (int i = 0; i < gas.size(); i++)
        {
             cg = cg + (gas[i] - cost[i]);

            if (cg < 0)
            {
                cg = 0;
                start = i+1;
            }

        }
        return start;

        
    }
};
