
#ifndef __NODE_H__

#define __NODE_H__

#ifdef USE_PRAGMA_INTERFACE
#pragma interface			/* gcc class implementation */
#endif

/* Node Types */
typedef enum {NODE_TYPE_SINGLE, NODE_TYPE_MULTI} NodeType;

/* Temporary */
typedef char* MYSQL_RESULT;

/* Absstract class describing node structure */
class Node
{
public:
	Node();
	Node(char*);
	~Node();
	
	/* mysql process command routine */
	virtual MYSQL_RESULT	ProcessCommand(char *command);	
	
	
	/* Getting type of node */
	virtual NodeType	GetType();
	/* Getting string representation of node */
	virtual char 		*ToString();
	/* Parsing node info from string */
	virtual int 		FromString(char *source);
	
	
private:
	
};



#endif