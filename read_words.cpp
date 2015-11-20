/*  
In 4 lines...
   1.  Read in a text file.
   2.  Store the words.
   3.  Sort the words.
   4.  Count duplicate word entries.
   5.  Remove duplicate word entries.
   6.  Print words and their count in alphanumeric order.
*/
#include <iostream>
#include <fstream>
#include <map>

using namespace std;


int main()
{
	// Map is just an associative array.
	// The word is the key, the count is the value.
	// The keys are stored in descending alphanumeric
	// order.
    map<string, int> wordRec;
    string word; 
    ifstream inf("input.txt");

    while (inf >> word)
	// I was surprised to find that += works even if there
    // is no previous key entry.  It creates the entry and 
	// sets its value to one.
	// If the key(word) already exists, it increments its value
        wordRec[word] += 1;
    
	// standard template iterators to print sorted list.
    for(map<string, int>::iterator it=wordRec.begin(); it!=wordRec.end(); it++)
        cout << it->first << ": " << it->second << '\n';
	
	return 0;
}
