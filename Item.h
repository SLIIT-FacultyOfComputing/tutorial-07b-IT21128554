// Item.h

class Item {
   private:
      int itemCode;
      float unitPrice;
      float discount; // out of 100 e.g. discount = 15
   public:
      Item();// 1. Write the Default Constructor
      Item(int code , float price , float dis);// 2. Write the Overloaded Constructor
      ~Item();// 3.Destructor

      void setDiscount(float punitPrice);
      float getDiscount();
      float discountedPrice();
      void display();
};
