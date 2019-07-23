#include "Hashtable.hpp"

<<<<<<< HEAD
HashTable::HashTable(){
    table = new List[8];
}

HashTable::~HashTable(){
    delete[] table;
}

HashTable::HashTable(int indices){
    table = new List[indices];
    size = indices;
}

unsigned int HashTable::Size(){
    return 1;
}

/** insert(String key, int data)
 * Insert the value of data into the chain at index hash(key) 
 */
void HashTable::insert(const String &key, int data)
{
    return;
}

/** remove(String key)
 * Removes the first instance of the given key from the chain located at hash(key) 
 */
void HashTable::remove(String &key)
{
    return;
}

/** search(String key)
 * Returns true if it found an instance of the key at index hash(key) false otherwise
 */
bool HashTable::search(String &key)
{
    return true;
}

/** get(String key)
 * Returns the integer value associated with the given key from the key/value pair
 */
int HashTable::get(String &key)
{
    return 1;
}

/** is_empty()
         * Returns true if all chains are of length 0 indicating them being empty, returns false otherwise
         */
bool HashTable::is_empty()
{
    return true;
}

/** print()
         * Calls the Linked List print() method on each of its chains
         */
void HashTable::print()
{
    return;
=======
int HashTable::hash(const String& key) {
  int hash = 0;
  for (unsigned int i = 0; i < key.size(); ++i) {
    hash = (hash * 7) + key.at(i);
  }
  return hash % m;
}

unsigned int HashTable::elements() const {
  return n;
}

void HashTable::grow() {
  List* newtable = new List[m * 2];
  for (unsigned int i = 0; i < m; ++i) {
    Node* n = table[i].top();
    newtable[hash(*(n->key))].push(*(n->key), n->val);
    table[i].pop();
  }
  delete[] table;
  table = newtable;
  m *= 2;
}

void HashTable::insert(const String& key, int data) {
  int h = hash(key);
  if (table[h].index(key) == -1) {
    table[h].push(key, data);
    n++;
    if ((n / m) >= 8) {
      grow();
    }
  } else {
    table[h].update(key, data);
  }
}

void HashTable::remove(String& key) {
  table[hash(key)].remove(key);
}

bool HashTable::search(String& key) {
  if (table[hash(key)].index(key) >= 0)
    return true;
  else
    return false;
}

int HashTable::get(String& key) {
  return table[hash(key)].at(table[hash(key)].index(key));
}

bool HashTable::is_empty() {
  for (unsigned int i = 0; i < m; ++i) {
    if (table[i].length() != 0)
      return false;
  }
  return true;
}

void HashTable::print(std::ostream& oss) {
  for (unsigned int i = 0; i < m; ++i) {
    oss << "Row: " << i << " => ";
    table[i].print(oss);
    oss << std::endl;
  }
>>>>>>> upstream/master
}