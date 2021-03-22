//CWE-190: Integer overflow or wraparound
#include <bits/stdc++.h>
#include <unistd.h>
using namespace std;
int max_stud=100;
int main(int argc, char** argv) {
    assert(argc<=6*max_stud+1);
    int micro=5000000;
    int micro1=5;
    string s;
    cout<<"********Welcome to the Submission Portal********\n";
    cout<<"Please go through the following rules carefully:\n";
    cout<<"1.You can update your submission not more than 3 times.\n";
    cout<<"2.Every time you update your submission, you will not be able to update again before 5 seconds\n";
    cout<<"3.Every invalid submission will disable this script for 5 microseconds\n";
    cout<<"Continue?(Y/N)\n";cin>>s;
    if(s=="N"){
        cout<<"Come back when ready!\n";
        return 0;
    }
    else{
        map<string,short>mp;
        char cmd[12]="date";
        int pos=2;
        while(pos<argc){
            mp[argv[pos]]++;
            if(mp[argv[pos]]<=3&&mp[argv[pos]]>0){
                printf("Submission Successfully Updated for Roll Number: %s!\n",argv[pos]);
                system(cmd);
                usleep(micro);
            }
            else{
                usleep(micro1);
            }
            pos+=2;
        }
    }
    return 0;
}