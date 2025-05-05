class Solution {
public:
    int canCompleteCircuit(vector<int>& gas, vector<int>& cost) {
        //first initial totalgas and totalcost as 0
        int totgas=0;
        int totcost=0;
        // Loop through each value in the gas array/vector
        // and add it to the total gas (totgas)
        for(int val:gas){
            totgas+=val;
        }
        // Loop through each value in the cost array/vector
        // and add it to the total cost (totcost)   
        for(int val:cost){
            totcost+=val;
        }
        if(totgas<totcost){
            return -1;
        }
        //unique solution always exist
        int start=0;   // Starting gas station index
        int currgas=0;  // Starting current gas index
        //loop through each gas station
        for(int i=0;i<gas.size();i++){
            currgas+=(gas[i]-cost[i]); // Add net gas (gas gained - cost to next)
              // If current gas is negative, can't start from 'start' station
            if(currgas<0){
                //reinitialize:set start to next station
                start=i+1;
                currgas=0;//reset current gas
            }     
        }
        return start;
    }
};