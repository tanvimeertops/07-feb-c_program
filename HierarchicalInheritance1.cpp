#include <iostream> // stdio :standard input output
using namespace std;
class Payment{
    public:
    int amount;
    void setAmount(int a){
        amount=a;
    }
};
class UPI :public Payment{
    public:
    double fees;
    double total_pay(){
        fees=amount*2;
        return amount+fees;
    }
};
class Netbanking:public Payment{
public:
    double fees;
    double total_pay(){
        fees=amount*0.5;
        return amount+fees;
    }
};
class CreditCard:public Payment{
public:
    double fees;
    double total_pay(){
        fees=amount*3;
        return amount+fees;
    }
};
int main() {
  UPI upi;
  Netbanking nb;
  CreditCard cc;

    upi.setAmount(1000);
    nb.setAmount(1000);
    cc.setAmount(1000);
   cout<<"UPI bill :" <<upi.total_pay();
   cout<<"Net banking bill :"<<nb.total_pay();
   cout<<"Credit card bill :"<<cc.total_pay();
}