#include <iostream> // stdio :standard input output
using namespace std;
/*oops
class : it is a collection data  and 
function
object :it gives permission to access functionality of 
class
inheritance
polymorphism
encapsulation
abstraction
*/
class InstagramUser{
public: //format specifier
    string username;
    int follower;

    void post(){
        cout<<username<< " has posted a photo"<<endl;
    }

    void show(){
        cout<<"Username is"<<username<<endl;
        cout<<"Followers :"<<follower<<endl;
    }
};

int main() {
  InstagramUser user1;
  user1.username="manish_007";
  user1.follower=12200;

  user1.post();
  user1.show();

}