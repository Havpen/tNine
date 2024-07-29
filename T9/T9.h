#pragma once
#include <iostream>

#define ALPHABET_SIZE 26

struct TrieNode {
	struct TrieNode* children[ALPHABET_SIZE];
	bool isEndOfWord;
	int freq = 0;
};

TrieNode* getNewNode(void);
void insert(TrieNode*, std::string);
bool isEmpty(TrieNode*);
void getWords(TrieNode*, std::string arr[], int& word, std::string& buf, int& height);
void printArray(std::string arr[], int n);
void tNine(TrieNode* lib, std::string& key, std::string& res);
int getCharIndex(const char text);
