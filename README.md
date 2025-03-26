# LINKED-LIST-IMPLEMENTATION

 **COMPANY**: CODTECH SOLUTIONS

 **NAME** : ARANGI ABHISHEK

 **INTERN ID**  : CT08WCM

 **DOMAIN** : C PROGRAMMING

 **DURATION** : 4 WEEKS 

 **MENTOR** : NEELA SANTHOSH KUMAR

 **DESCRIPTION**

 A singly linked list is a data structure composed of nodes, where each node contains two parts: data and a pointer to the next node in the list. Unlike arrays, linked lists allow dynamic memory allocation, enabling efficient insertion and deletion of elements without the need for shifting.
 
**Understanding Singly Linked List**
In a singly linked list:
Each node has two fields: one to store data and another to store a pointer to the next node.
The list is linked sequentially through pointers.
The last node points to `NULL`, indicating the end of the list.
  
**Key Operations**
1. **Insertion**
Insertion in a singly linked list can be performed at three locations:
 **At the beginning**: A new node becomes the head of the list.
 **At the end**: The node is appended after the last node.
 **At a specific position**: A node is inserted in the middle of the list.

 2. **Deletion**
Deletion can also happen at three locations:
**At the beginning**: Remove the head node and update the head pointer.
**At the end**: Traverse to the second-last node, set its `next` to `NULL`, and free the last node.
**At a specific position**: Remove the node at a particular position by updating the pointers of the previous node.

3. **Traversal**
Traversal is the process of visiting each node in the list, starting from the head, and performing operations such as printing data.

1. **Dynamic Allocation:** Memory for each node is dynamically allocated using `malloc`.
2. **Pointers:** The `head` pointer keeps track of the first node, and `next` pointers link nodes sequentially.
3. **Functions:** Separate functions are written for each operation to enhance modularity.

### **Advantages and Applications**
 **Advantages:**
 a)  Flexible memory management.
 b)Efficient insertion and deletion.
**Applications:**
 a) Implementing stacks and queues.
 b) Managing dynamic datasets in real-time systems.


**OUTPUT**

![Image](https://github.com/user-attachments/assets/e26f83c8-79bd-4ff7-ad2d-3184fee553b5)
