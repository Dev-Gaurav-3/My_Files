#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;


// for floating numbers
// scatter and gather approach

void bucketsort(float arr[],int size){

    vector<vector<float>> bucket(size,vector<float>());

    float max_ele = arr[0];
    float min_ele = arr[0];
    for (int i = 0; i < size; i++)
    {
        max_ele = max(max_ele,arr[i]);
        min_ele = min(min_ele,arr[i]);
    }
    float range  = (max_ele - min_ele)/size;
    
    for (int i = 0; i < size; i++)
    {
        int idx = (arr[i]-min_ele)/range;
        float diff = (arr[i]-min_ele)/range -idx;
        if(diff==0&&arr[i]!= min_ele){
            bucket[idx-1].push_back(arr[i]);
        }
        else{
            bucket[idx].push_back(arr[i]);
        }
        
    }

    for (int i = 0; i < size; i++)
    {
        if (!bucket[i].empty())
        {
            sort(bucket[i].begin(),bucket[i].end());
        }
        
    }
    int k = 0;

    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < bucket[i].size(); j++)
        {
            arr[k++] = bucket[i][j];
        }
        
    }
    
    
    

}

int main(){
    float arr[] = {0.13,0.45,0.12,0.89,0.75,0.63,0.85,0.39};
    int size = sizeof(arr)/sizeof(arr[0]);

    bucketsort(arr,size);

    for (int i = 0; i < size; i++)
    {
        cout<<arr[i]<<" ";
    }
    


    return 0;
}