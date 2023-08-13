#include <iostream>
class Iphone{

protected:
    std::string model;
public:
        int price;
        int year;
        std::string color;
        void setName(std::string model){
            this->model=model;
        }
        std::string getName(){
            return this->model;
        }


        void phoneinfo(){
            std::cout<<"Phone price: "<<price<<std::endl;
            std::cout<<"make year : "<<year<<std::endl;
            std::cout<<"Phone color: "<<color<<std::endl;

        }
        double phoneprice(){
            return price*0.21+price;
        }
        Iphone( int price,int year,std::string color){
            this->price=price;
            this->year=year;
            this->color=color;

        }



};
class Android:public Iphone{
public:
    std::string os;
    Android(int price,int year,std::string color,std::string os): Iphone(price,year,color){
        os=os;
    }

};

int main(){
   Iphone iphone1=Iphone(5000,2023,"green");
   Android android=Android(7000,2023,"black","chrome");
   iphone1.setName("iphone 13");
   std::cout<<"Phone name : "<<iphone1.getName()<<std::endl;
   iphone1.phoneinfo();
   std::cout<<"price after tax "<<iphone1.phoneprice()<<std::endl;
   std::cout<<"---------------------------------------------------------------------------------------------"<<std::endl;
    android.setName("glaxy 23 ultra");
    std::cout<<"Phone name : "<<android.getName()<<std::endl;
    android.phoneinfo();
    std::cout<<"price after tax "<<android.phoneprice()<<std::endl;

}