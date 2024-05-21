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
    void SetName(string name);
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

void Invoice :: SetName(string name){
    this->name = name;
}

void Invoice :: SetItemNum(int item_num){
    this->item_num = item_num;
}

void Invoice :: SetPrice(int price){
    this->price = price;
}

void Invoice :: SetQuantity(int quantity){
    this->quantity = quantity;
}

string Invoice :: GetName(){
    return name;
}

int Invoice :: GetItemNum(){
    return item_num;
}

int Invoice :: GetPrice(){
    return price;
}

int Invoice :: GetQuantity(){
    return quantity;
}

string Invoice :: to_string(){
    string ret = "";
    ret += name;
    ret += ',';
    ret += to_string(item_num);
    ret += ',';
    ret += to_string(price);
    ret += ',';
    ret += to_string(quantity);
    return ret;
}

int Invoice :: GetTotalPrice(){
    return quantity * price;
}

Invoice :: Invoice(string name, int item_num, int price, int quantity){
    this->name = name;
    this->item_num = item_num;
    this->price = price;
    this->quantity = quantity;
}
int main(){

    return 0;
}