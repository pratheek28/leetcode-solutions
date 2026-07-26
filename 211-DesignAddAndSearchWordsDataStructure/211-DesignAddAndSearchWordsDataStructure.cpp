// Last updated: 7/25/2026, 7:28:03 PM
class WordDictionary {
private:
    string* arr;
    int capacity;
    int size;

public:
    WordDictionary() {
        arr = new string[10];
        capacity = 10;
        size = 0;
    }

    void resize() {
        string* copy = new string[capacity * 2];

        for (int i = 0; i < capacity; i++) {
            copy[i] = arr[i];
        }

        delete[] arr;
        arr = copy;
        capacity *= 2;
    }
    
    void addWord(string word) {
        if (size == capacity) resize();

        arr[size] = word;
        size++;
    }
    
    bool search(string word) {
        for (int i = 0; i < size; i++) {
            if (compare(arr[i], word)) return true;
        }
        return false;
    }

    bool compare(const string& w, const string& word) {
        if (w.size() != word.size()) return false;

        for (int i = 0; i < w.size(); i++) {
            if (w[i] != word[i] && (w[i] != '.' && word[i] != '.')) return false;
        }
        return true;
    }
};

/**
 * Your WordDictionary object will be instantiated and called as such:
 * WordDictionary* obj = new WordDictionary();
 * obj->addWord(word);
 * bool param_2 = obj->search(word);
 */