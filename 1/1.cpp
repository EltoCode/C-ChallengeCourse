#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    
    int arrayLn;
    int queryLn;
    cin>>arrayLn>>queryLn;

    //creating a vector of lenght <arrayLn> of datatype vectors
    vector< vector<int> > arrays(arrayLn);  
    vector<int> *p = arrays.data();


    //loop thru arrays
    for(int i = 0; i<arrayLn; i++)
    {
        //get the length of this array
        int len;
        scanf("%d", &len);

        //create a new array
        vector<int> numVec;
        //loop thru it's elements
        for(int j = 0; j<len; j++)
        {
            int num;
            scanf("%d", &num);
            numVec.push_back(num);
        }
        //add this vector to main vector
        *p = numVec;
        p++;
    }
    
    //loop thru queries
    for(int i = 0; i<queryLn; i++) 
    {
        int arrIndex;
        int index;
        scanf("%d %d", &arrIndex, &index);

        //print queries
        cout<<arrays.at(arrIndex).at(index)<<endl;
    }

}