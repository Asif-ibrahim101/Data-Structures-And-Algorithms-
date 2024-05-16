//using two pointer method for finding the common ele from arrays
#include <bits/stdc++.h> 
vector<int> findArrayIntersection(vector<int> &arr1, int n, vector<int> &arr2, int m)
{
	 int i = 0; int j = 0;
  vector<int> common; //vector to add the common elements

   while(i < n && j < m) {

     if(arr1[i] == arr2[j]) {
       common.push_back(arr1[i]);
       i++;
       j++;
     }
     else if (arr1[i] < arr2[j]) {
       i++;
     }
     else{
       j++;
     };

   };
     return common;
}