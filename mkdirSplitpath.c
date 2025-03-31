#include "types.h"

extern struct NODE* root;
extern struct NODE* cwd;


// see if node is any of the sibling nodes
struct NODE* nodeExist(struct NODE* node, char* name) { 
    struct NODE* child = node->childPtr;
    
    while (child != NULL) {
        if (strcmp(child->name, name) == 0) {
            return child;
        }
        child = child->siblingPtr;
    }
    return NULL;
}

//make directory
void mkdir(char pathName[]){

    if (strcmp(pathName, "/") == 0) { // if no path is passed
        printf("MKDIR ERROR: no path provided\n");
        return;
    }
    char baseName[64];
    char dirName[64];
    struct NODE* parentDir = splitPath(pathName, baseName, dirName);
    
    if (parentDir == NULL) {
        //printf("MKDIR ERROR: directory %s does not exist\n", parentDir->name);
        return;
    }
    
    if (nodeExist(parentDir, baseName) != NULL) { // if directory was already created
        printf("MKDIR ERROR: directory %s already exists\n", pathName);
        return;
    }

    struct NODE* newNode = (struct NODE*)malloc(sizeof(struct NODE));
    strcpy(newNode->name, baseName);
    newNode->fileType = 'D';
    newNode->childPtr = NULL;
    newNode->siblingPtr = NULL;
    newNode->parentPtr = parentDir;
    if (parentDir->childPtr == NULL) {
        parentDir->childPtr = newNode;
    } else {
        struct NODE* sibling = parentDir->childPtr;
        while (sibling->siblingPtr != NULL) {
            sibling = sibling->siblingPtr;
        }
        sibling->siblingPtr = newNode;
    }
    printf("MKDIR SUCCESS: node %s successfully created\n", pathName);

    return;
}

//handles tokenizing and absolute/relative pathing options
struct NODE* splitPath(char* pathName, char* baseName, char* dirName) {
    //idk its fucked
    dirName[0] = '\0';
    baseName[0] = '\0';

    char* rightSlash = strrchr(pathName, '/');

    // edge cases
    if (rightSlash == NULL) { 
        strcpy(baseName, pathName);
        return cwd;
    }
    if (rightSlash == pathName) { // is root directory
        strcpy(dirName, pathName);
        return root;
    }

    // get directory
    strncpy(dirName, pathName, rightSlash - pathName); 
    dirName[rightSlash - pathName] = '\0'; // add the termination character back
    
    // get baseName
    strcpy(baseName, rightSlash + 1); 

    // determine if it is absolute or not
    struct NODE* node;
    if (dirName[0] == '/') {
        node = root;
    } else {
        node = cwd;
    }

    //tokenize directory
    char* token = strtok(dirName, "/");
    while (token != NULL) {
        node = nodeExist(node, token);
        if (node == NULL) {
            printf("ERROR: directory %s does not exist\n", token);
            return NULL;
        }
        token = strtok(NULL, "/");
    }

    return node;
}

