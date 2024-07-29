#include "T9.h"
#include <string>

TrieNode* getNewNode(void) {
	struct TrieNode* pNode = new TrieNode;
	pNode->isEndOfWord = false;
	for (int i = 0; i < ALPHABET_SIZE; i++) {
		pNode->children[i] = nullptr;
	}
	return pNode;
}

void insert(TrieNode* root, std::string key) {
	TrieNode* node = root;

	for (int i = 0; i < key.length(); i++) {
		int index = key[i] - 'a';
		if (node->children[index] == nullptr) {
			node->children[index] = getNewNode();
		}
		node = node->children[index];
		node->freq++;
	}
	node->isEndOfWord = true;
}

bool isEmpty(TrieNode* root) {
	for (int i = 0; i < ALPHABET_SIZE; i++) {
		if (root->children[i]) {
			return false;
		}
	}
	return true;
}

void getWords(TrieNode* root, std::string arr[], int& word, std::string& buf, int& height) {
	if (!root) {
		return;
	}

	TrieNode* node = root;

	for (int i = 0; i < ALPHABET_SIZE; i++) {
		if (node->children[i]) {
			if (arr[word] == "") {
				arr[word] = buf.erase(height);
			}
			buf += 'a' + i;
			if (!node->children[i]->isEndOfWord) {
				height++;
				getWords(node->children[i], arr, word, buf, height);
				height--;
			}
			else {
				arr[word] = buf;
				word++;
			}
		}
	}
}

void printArray(std::string arr[], int n) {
	for (int i = 0; i < n; i++) {
		std::cout << i + 1 << " - " << arr[i] << std::endl;
	}
}

int getCharIndex(const char text) {
	return text - 'a';
}

void tNine(TrieNode* lib, std::string& key, std::string& res) {
	TrieNode* node = lib;
	int n = key.length();
	int temp = -1;
	for (int i = 0; i < n; i++) {
		int index = getCharIndex(key[i]);
		if (!node->children[index]) {
			std::cout << "No words :3" << std::endl;
			return;
		}
		node = node->children[index];
	}

	if (isEmpty(node)) {
		std::cout << "Only one word for you :3 -> " << key << "Choose this(1) or nope(other)?" << std::endl;
		std::cin >> temp;
		if (temp == 1) {
			res.append(key.append(" "));
		}
		else {
			return;
		}
	}
	else {
		std::string words[10];
		int wordCount = 0;
		std::string buf = key;
		getWords(node, words, wordCount, buf, n);
		std::cout << "Choose one of these words (0 to exit)" << std::endl;
		printArray(words, wordCount);
		std::cin >> temp; 
		if (temp == 0) {
			return;
		}
		if(temp >= 1 && temp <=wordCount) {
			res.append(words[temp - 1].append(" "));
		}
	}
}

