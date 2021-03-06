#ifndef NODE
#define NODE

#include <NodeCore.h>
#include <KMem.h>
#include <thread>
#include <string>
#include <vector>

using namespace std;

class Register;

class node : public nodeBase
{
	
public:
	node(node*);
	~node();
	void removeChild(node*);//upwards deletion
};


class Register
{
	vector < node* > table;
	//accepts parent, fails if return nullptr

public:
	node * registerNode(node*);
	void deregisterNode(node*);
	bool isEmpty();
};

//node loop
int nodeThread(node*,string);

#endif