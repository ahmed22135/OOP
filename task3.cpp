#include <bits/stdc++.h>

using namespace std;

class Invoice{
private:
    string name;
    int item_num;
    int price;
    int quantity;
public:
    Invoice(string name, int item_num, int price, int quantity);
    void SetName();
    void SetItemNum();
    void SetPrice();
    void SetQuantity();
    void print();
    string GetName();
    string to_string();
    int GetItemNum();
    int GetTotalPrice();
    int GetQuantity();
};

Invoice :: 

int main(){

    return 0;
}