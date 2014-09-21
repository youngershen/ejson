// author : younger.shen
// email  : younger.x.shen@gmail.com

#ifndef __EJSON_H__
#define __EJSON_H__

#define NODE_TYPE_STRING   0
#define NODE_TYPE_INT      1
#define NODE_TYPE_DOUBLE   2
#define NODE_TYPE_LIST     3
#define NODE_TYPE_META     4


typedef struct eJSON{
    struct eJSON *next;
    struct eJSON *prev;
    struct eJSON *child;
    struct eJSON *parent;

    int     node_key_type;
    int     node_key_int;
    double  node_key_double;
    char *  node_key_string;
    char *  node_key_list;


    int     node_value_type;
    int     node_value_int;
    double  node_value_double;
    char *  node_value_string;
    char *  node_value_list;
    struct eJSON * node_value_node;

} eJSON_NODE;


extern eJSON_NODE * ejson_parse_file(void); 

extern eJSON_NODE * ejson_parse_string(const char * json_string);


#endif

