class Solution {
public:
    bool detectCapitalUse(string word) {
        int len = word.size();
        if(len == 0)
            return false;
        int count_Cap = 0,count_Cap_idx;
        if(isupper(word[0]))                            
        {                                                                   
            count_Cap++;                                        //Logic  is:-
            count_Cap_idx = 0;                              //either only first letter should be capital so check
        }                                              //if its capital and also store the index in a variable
        for(int i = 1; i< len ; i++)                  //Now check for other letters too and also store their 
        {                                       //indexes 
            if(isupper(word[i]))
            {
                count_Cap++;
                count_Cap_idx = i;
            }
        }//either only 1st letter should be capital or all the letters are capital then it shuld be equal to length of string or if all the letters are smaal//
        if((count_Cap_idx == 0 && count_Cap == 1) || count_Cap == len || count_Cap == 0)
            return true;
        else    //if anyother letter is cap and first letter is not cap so return false//
            return false;
        
        
    }
};
