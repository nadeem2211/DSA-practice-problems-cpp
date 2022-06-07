#include <iostream>
using namespace std;

struct employee
{
    int tot_sz;
    int used_sz;
    int* p;
};

void createEmployee(struct employee* ptr, int tsize, int usize){
    ptr->tot_sz = tsize;
    ptr->used_sz = usize;
    ptr->p = (int *)malloc((tsize* sizeof(int)));
}

void setValue(struct employee* a){
    cout << "please enter salary"<<endl;
    cin >> a->p[0];
}

void show(struct employee* b){
    cout << "salary entered is : " << b->p[0] << endl;
}
int main(){
    //char str[6] = "Nadeem";
    cout<< "this is my first program\n" ;
    struct employee nadeem;
    createEmployee(&nadeem, 10, 2);
    setValue(&nadeem);
    show(&nadeem);
    return 0;
};