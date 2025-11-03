#include <iostream>
#include <chrono>

using namespace std;

//Rosalind problem 1: Counting DNA Nucleotides

 /*
 Given: A DNA string s of length at most 1000 nt.

Return: Four integers (separated by spaces) counting the respective number 
of times that the symbols 'A', 'C', 'G', and 'T' occur in s.
 */

int main() {

    // Define the string to hold DNA string
    string s;

    // Prompt for DNA input, store in s
    cout << "DNA string input:" << endl;
    cin >> s;

    // Create an object of `steady_clock` class and start timer
    chrono::steady_clock sc;   
    auto start = sc.now();
    
    // Loop through (iterative CPU command, GPU cuda soon)
    for (int i = 0; i < s.length(); i++) {
        // Print iterator and that position in string
        cout << i << ' ' << s[i] << endl;
    }

    // End timer and print time
    auto end = sc.now();      
    auto time_span = static_cast<chrono::duration<double>>(end - start);   
    cout<<"Operation took: "<<time_span.count()<<" seconds !!!";
    
    return 0;
}