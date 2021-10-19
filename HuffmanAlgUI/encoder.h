#ifndef ENCODER_H
#define ENCODER_H

#include <QString>
#include <bits/stdc++.h>

using namespace std;

class encoder {
private:
    string encodedText;
    string decodedText;

public:
    const string getEncodedText(){
        return encodedText;
    }

    void setEncodedText(const string &encodedString) {
        encoder::encodedText = encodedString;
    }

    const string getDecodedText(){
        return decodedText;
    }

    void setDecodedText(const string &decodedString) {
        encoder::decodedText = decodedString;
    }

    map<char, string> codes;
    map<char, int> freq;

    struct MinHeapNode {
        char data;
        int frequency;
        MinHeapNode *left, *right;

        MinHeapNode(char data, int frequency) {
            left = right = nullptr;
            this->data = data;
            this->frequency = frequency;
        }
    };

    struct Comparator {
        bool operator()(MinHeapNode *left, MinHeapNode *right) {
            return (left->frequency > right->frequency);
        }
    };

    void printCodes(struct MinHeapNode *root, string code) {
        if (!root)
            return;
        if (root->data != '$')
            cout << root->data << ": " << code << "\n";
        printCodes(root->left, code + "0");
        printCodes(root->right, code + "1");
    }

    void storeCodes(struct MinHeapNode *root, string code) {
        if (root == nullptr) {
            return;
        }
        if (root->data != '$') {
            codes[root->data] = code;
        }
        storeCodes(root->left, code + "0");
        storeCodes(root->right, code + "1");
    }

    priority_queue<MinHeapNode *, vector<MinHeapNode *>, Comparator> minHeap;

    void huffmanCodes(int size) {
        struct MinHeapNode *left, *right, *top;
        for (auto v = freq.begin(); v != freq.end(); v++)
            minHeap.push(new MinHeapNode(v->first, v->second));
        while (size != 1) {
            left = minHeap.top();
            minHeap.pop();
            right = minHeap.top();
            minHeap.pop();
            top = new MinHeapNode('$', left->frequency + right->frequency);
            top->left = left;
            top->right = right;
            minHeap.push(top);
        }
        storeCodes(minHeap.top(), "");
    }

    void calcFreq(string str, int n) {
        for (int i = 0; i < n; i++){
            char in = str[i];
            freq[in]++;
        }
    }

    string decodeText(struct MinHeapNode *root, string s) {
        string ans = "";
        struct MinHeapNode *curr = root;
        for (int i = 0; i < (int)s.length(); i++) {
            if (s[i] == '0')
                curr = curr->left;
            else
                curr = curr->right;

            if (curr->left == nullptr and curr->right == nullptr) {
                ans += curr->data;
                curr = root;
            }
        }
        return ans;
    }

    void Compress(string userData) {
        string encodedString;
        calcFreq(userData, userData.length());
        huffmanCodes(userData.length());

        for (auto i: userData) {
            encodedString += codes[i];
        }
        this->setEncodedText(encodedString);
    }

    void Decompress(string userData) {
        string decodedString;
        calcFreq(userData, userData.length());

        decodedString = decodeText(minHeap.top(), userData);

        this->setDecodedText(decodedString);
    }
};

#endif // ENCODER_H
