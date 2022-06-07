#include <iostream>
#include <vector>
using namespace std;
int ctr = 0;
void display(vector<int> exp){
     cout<<"display sorted vector"<<endl;
     for(int i=0;i < exp.size();i++){
         cout<< exp[i]<< " "<<endl;
     }
 }
int calculateMedian(vector<int> arr, int num_days_of_trx, vector<int>::iterator iter)
{
    int median;
    int midIndex;
    //for (int i = *iter;i<(num_days_of_trx+(*iter));i++){
        if(num_days_of_trx %2 != 0){
            midIndex =  ctr + ((num_days_of_trx - 1)/2);
            median = arr[midIndex];
        }
        else if(num_days_of_trx%2 == 0){
            midIndex = ctr + (num_days_of_trx/2);
            median = (arr[midIndex] + arr[midIndex+1])/2;
        }
   // }
    //median = int(median/num_days_of_trx);
        cout << "median: " << median << endl;
        cout << "midIndex: " << midIndex << endl;
        return median;
}
int activityNotifications(vector<int> expenditure, int d) {
    int countNotif = 0;
    vector<int> :: iterator itr = expenditure.begin();
    //sort(expenditure.begin(),expenditure.end());
    //display(expenditure);
    for(int i=d;i<expenditure.size();i++){
        sort(expenditure.begin()+ctr,expenditure.begin()+i);
        display(expenditure);
        if (expenditure.at(i) >= (2*calculateMedian(expenditure,d,itr))){
            countNotif++;
        }
        itr++;
        ctr++;
    }
        return countNotif;
}

int main(){
    vector<int> expend;
    int result, element;
    for (int i = 0; i < 9;i++){
        cout << "enter value for vector element" << endl;
        cin >> element;
        expend.push_back(element);
    }
        result = activityNotifications(expend, 5);
        cout << "number of notification sent : " << result << endl;
        return result;
}