// Now, How to create a Node?
// what parameters does it need? (No parameter needed)
// what should it return? (it should return address of a Node) (to return address of Node the pointer should also be of node type)
// therefore we need to return a node pointer i.e Node* 
// for that we will use struct Node*

struct Node* createNode(){
    struct Node *n; //temporary node which will be returned 
    n = (struct Node*)malloc(sizeof(struct Node)); // dynamically allocating memory of a node in n pointer
    // but malloc returns a void type pointer so we will have to typecast it using (struct Node*) in the beginning
    
    return n; // new node created successfully
}