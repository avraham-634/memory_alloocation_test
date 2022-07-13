// Online C++ compiler to run C++ program online
#include <iostream>
struct Node {
		int val;
		Node* next;
        Node(){
            next = NULL;
        }
	};
	
class ILinkedList {
    Node *head;
	public:
		
		Node* add(int val){
            //init the node obj and asign the value
            Node *new_node = new Node();
            new_node->val = val;

            if (head == NULL){
                // if the list is empty
                // insert the first node at head
                new_node->next = NULL;
                head = new_node;
            }
            else{
                // then, got to the end
                // and link the last node to the new
                Node *node = head;
                while(node->next){
                    node = node->next;
                };
                node->next = new_node;
            }
            return head;
        }
        
		void remove(int erase_val){
            Node *node = head;
            if (head->next==NULL && head->val == erase_val){
                head = NULL;
            }
            else{
                // then, loop over nodes,
                while((node->next)->val != erase_val && node->next){
                    node = node->next;
                }
                if (node->next->val == erase_val){
                    Node *temp = node->next->next;
                    node->next = NULL;
                    node->next = temp;
                }
                
            }
        }

    ~ILinkedList(){
            if (head == NULL)
                return;
            Node *node = new Node();
            node = head;
            while (node->next){
                // loop over nodes,
                // reinitialize the curent node
                Node *next_node = node->next;
                node->next = NULL;
                //step over to the next node
                node = next_node;
            }
            node = NULL;
            head = node;
        }
        void print(){
			if (head == NULL){
				std::cout<<"List is empty"<<std::endl;
			}
			else{
				Node *temp = head;
				std::cout<<"Linked List: ";
				while (temp != NULL){
					std::cout<<temp->val<<"->";
					temp = temp->next;
				}
				std::cout<<"NULL"<<std::endl;
			}
		}	
	};
int main() {
    // Write C++ code here
    std::cout << "Hello world!";
    ILinkedList l1;
    std::cout << std::endl;
    l1.add(1);
    l1.add(2);
    l1.add(3);
    l1.add(0);
    l1.add(3);
    l1.print();
    l1.remove(3);
    l1.print();
    std::cout << std::endl;
    std::cout << "FINISH!";
    
    return 0;
}