#include <iostream>
#include <vector>
using namespace std;

// Define Node before using it
struct Node {
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};

// Now use Node in these functions
Node* buildTreeHelper(const vector<int>& preorder, int& index) {
    if (index >= preorder.size() || preorder[index] == -1) {
        index++;
        return nullptr;
    }

    Node* root = new Node(preorder[index++]);
    root->left = buildTreeHelper(preorder, index);
    root->right = buildTreeHelper(preorder, index);
    return root;
}

Node* buildTree(const vector<int>& preorder) {
    int index = 0;
    return buildTreeHelper(preorder, index);
}

int height(Node* root) {
    if (root == nullptr) return 0;
    return max(height(root->left), height(root->right)) + 1;
}

int main() {
    vector<int> preorder = {1, 2, -1, -1, 3, 4, -1, -1, 5, -1, -1};
    Node* root = buildTree(preorder);

    cout << "height : " << height(root)  << endl; // -1 if height is defined by edges
    return 0;
}
