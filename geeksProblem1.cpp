/*Science teacher. They change places every time the teacher turns to look at the blackboard. 

Each of the N students in the class can be identified by a unique roll number X and each desk 
has a number i associated with it. Only one student can sit on one desk. 
Each time the teacher turns her back, a student with roll number X sitting on desk number i gets
up and takes the place of the student with roll number i.

If the current position of N students in the class is given to you in an array, such that i is the
desk number and a[i] is the roll number of the student sitting on the desk, can you modify a[ ] to
represent the next position of all the students ?
*/
#include <iostream>
using namespace std;

class Solution {
    public:
    void prank(long long a[], int n){
        int roll;
    	long long arr[n];
    	for(int i=0;i<n;i++)
    	{
    		roll= a[i];
    		arr[i]=a[roll];
    	}
    	for(int i=0;i<n;i++)
    	    a[i]=arr[i];
    }
};
int main()
{
    Solution s;
	int size = 6;
    long long arr[]={0, 5, 1, 2, 4, 3};
    cout<<"\nCurrent position of the students:"<<endl;
    for(int i=0;i<size;i++)
		cout<<*(arr+i)<<" ";
    s.prank(arr,size);
	cout<<"\nNext position of the students:"<<endl;
	for(int i=0;i<size;i++)
		cout<<*(arr+i)<<" ";
	
	return 0;
}