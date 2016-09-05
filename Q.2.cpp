
Q2>                  Storage Algorithm

1.Start
2.Maintain a singular linked list (or queue) and a integer variable count which keeps count of the nodes in linked list.
3.Maintain a pointer to the first element(head) and a pointer to the last element (end).
4.In the buffer(queue of 64 elements) if a new node is inserted:
	4.1 Create anode and link it to the node pointer by head.
	4.2 Update the head to point to the new node.
	4.3 Now delete the lasst node nd point the end to the last element of the new buffer.
	
	This operation takes 0(constant) time.
5.Stop.
