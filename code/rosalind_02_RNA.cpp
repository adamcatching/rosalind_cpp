#include <iostream>
#include <fstream>
#include <string>

using namespace std;

//Rosalind problem 2: Counting DNA Nucleotides

 /*
An RNA string is a string formed from the alphabet containing 'A', 'C', 'G', 
and 'U'.

Given a DNA string t corresponding to a coding strand, its transcribed RNA 
string u is formed by replacing all occurrences of 'T' in t with 'U' in u. 
*/

int main() {
    // Read in the input file
    ifstream datafile("../input_files/rosalind_rna.txt");

    // Define the string to hold RNA
    string s;
    getline(datafile, s);

    // Test string was read in correctly
    // cout << "DNA string: " << s << endl;

    // Define new string
    string t;
    for (int i = 0; i < s.length(); i++) {
        string nuc = s.substr(i, 1);
        if (nuc == "T") {
            t += 'U';
        } else {
            t += nuc;
        }
    }
    cout << "RNA string: " << t << endl;
    return 0;
}