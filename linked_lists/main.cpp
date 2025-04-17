#include "linked_list.cpp"

int main(){
    std::string str1 = "ex";
    std::string str2 = "lame";
    std::string str3 = "sauce";
    std::string str4 = "boss";

    Node* node1 = new Node(nullptr,str1);
    Node* node2 = new Node(nullptr,str2);
    Node* node3 = new Node(nullptr,str3);
    Node* node4 = new Node(nullptr,str4);


    linked_list list1(node1);
    list1.insert(node2, list1.getSize() + 1);
    list1.insert(node3, list1.getSize() + 1);
    list1.insert(node4, list1.getSize() + 1);
    
    list1.print();
    list1.remove("sauce");
    cout << endl;
    list1.print();
    std::cout << std::endl;
    std::cout << list1.getSize();
    return 0;


}