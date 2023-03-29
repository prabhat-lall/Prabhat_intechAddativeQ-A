#include<bits/stdc++.h>
using namespace std;
int trap(vector<int>& height) {
    int n = height.size();
    int l=0,r=n-1,water=0;
    int leftmax=0,rightmax=0;
    while(l<=r)
    {
        if(height[l]<=height[r])
        {
            if(height[l]>leftmax)
                leftmax = height[l];
            else
                water+=leftmax-height[l];
                l++;
            }
            else
            {
                if(height[r]>rightmax)
                   rightmax = height[r];
                else
                   water+=rightmax-height[r];
                r--;
            }
        }
        return water;
    }

    int main(){
        vector<int> a={2,1,3,0,1,2,3};
        cout<<trap(a);
    }


/**
 * if i have given bounded function let say f(x) 
 * first i calculate array of value of f(x) at each interval in x axis in the given range
 * then we pass the same array in trap function as in previous question
 * 
 * for more accuracy x axis interval must be as minimum as possible
 * 
 */