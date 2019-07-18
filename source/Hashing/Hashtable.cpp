#include "Hashtable.hpp"

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
}