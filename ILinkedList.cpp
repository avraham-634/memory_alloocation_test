struct Node {
		int val;
		Node* next;
        Node(){
            next = NULL
        }
	};
	
class ILinkedList {
    Node *head;
	public:
		
		void Node* add(int val){
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
                }
                node->next = new_node;
            }
            return head
        }
        
		virtual void remove(Node* erase_node){
            Node *node = head;
            if (head == erase_node){
                // if there is just one node
                // reinitialize the head
                head->next = NULL
                head = NULL;
            }
            else{
                // then, loop over nodes,
                while(node->next = erase_node){
                    // link the before node to the next node
                    node->next = erase_node->next;
                    // reinitialize the node
                    erase_node->next = NULL;
                    erase_node = NULL;
                }
            }
        }

    void ~ILinkedList(){
            if (head == NULL)
                return
            Node *node = head;
            while (node->next){
                // loop over nodes,
                // reinitialize the curent node
                next_node = node->next
                node->next = NULL
                //step over to the next node
                node = next_node
            }
            node = NULL
            head = node
        };
	};