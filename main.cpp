#include <iostream>

using namespace std;

class keyboard{
public:
   float price;
    string name;
    string store;

    keyboard(float aPrice, string aName, string aStore){
             price=aPrice;
             name=aName;
             store=aStore;
    }
            };
            int main(){
            keyboard keyboard1={72.50, "Logitech", "Shopee"};
            keyboard keyboard2={35.65, "Intel", "Lazada"};
            cout<<keyboard2.name;
            return 0;}
