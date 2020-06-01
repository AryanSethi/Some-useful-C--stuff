#include <bits/stdc++.h>
using namespace std;

bool f(int x,int y){
    return x>y;      // this function is used to sort vector elements in decreasing order
}

void VECTORS(){
    int a;
    int arr[12]={10,5,78,5,100,45,6,7,8,4,45,6};
    vector<int> vec1(arr,arr+12); //initializing a vector using an array

    vector<int> vec2(40); //declaring a vector that can store 40 elements

    //passing addresses of first and last element to be sorted in asscending order
    sort(vec1.begin(),vec1.end()); // nlog(n) time

    bool present= binary_search(vec1.begin(),vec1.end(), 78); //checks if 78 is present in vec1 between addresses vec1.begin() and vec1.end()

    vec1.push_back(50); // adding one more element 50 in the vector (at the end)

    cout<<"first element is "<<vec1.front()<<" and the last element is "<<vec1.back()<<endl; // .front() and .back() functions  to find the first and last elements of vector

    //the vector vec1 currectly looks like this 4 5 5 6 6 7 8 10 45 45 78 100 50
    vector<int>::iterator it1 = lower_bound(vec1.begin(),vec1.end(),6); // it1 gives the address of first occurance of 6 using lower_bound()
    vector<int>::iterator it2 = upper_bound(vec1.begin(),vec1.end(),6); // it2 gives the address of the number after last occurance of 6 using upper_bound()
    cout<<*it1<<" "<<*it2<<endl; // prints the first 6 and the number after last 6 i.e 7
    cout<<it2-it1<<endl; // gives the number of 6s present
    // the functions upper_bound and lower_bound are only applied on sorted arrays

    sort(vec1.begin(),vec1.end(),f); // desreasing order

    for(int i=0;i<=12;i++) // elements of this vector that have not been initialized are random values like vec1[100] is a random number
        cout<<vec1[i]<<" ";
}

void SETS(){
    set<int> Set1;   // no matter what is the order of insertion of elements in a set
    Set1.insert(1);  // when they are iterated they will already always be sorted in
    Set1.insert(10); // asscending order,
    Set1.insert(-3);
    Set1.insert(10);
    Set1.insert(10);
    Set1.insert(-100);
    Set1.insert(50);  //  LIKE SHOWN BELOW

    for(int x: Set1){
        cout<<x<<endl;
    }
}

int main(){
        //VECTORS();
        int arrays[3]={1,2,3};
    
    //some usefu; things about strings
    string *p;
    p=new names[5]; // a new array 'names' of 5 string objects
    names[0]="aryan";
    names[1]="nakul";
    //and all other names
    cout<<names[0].substr(1,3);  // will return a string 'rya' from 'arayn'
    cout<<names[0].find('n');  //find the index of the first encountered 'n'
    //when we take a string input from user using cin>>
    //we can only take strings without spaces
    //to take strings with spaces ,use
    getline(cin,names[2]);
    
  

}
