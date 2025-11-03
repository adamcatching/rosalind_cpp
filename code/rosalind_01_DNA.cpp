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

    cout << "DNA string input:" << endl;
    cin >> s;

    chrono::steady_clock sc;   // create an object of `steady_clock` class
    auto start = sc.now();     // start timer
    
    for (int i = 0; i < s.length(); i++) {
        cout << i << ' ' << s[i] << endl;
    }

    auto end = sc.now();       // end timer (starting & ending is done by measuring the time at the moment the process started & ended respectively)
    auto time_span = static_cast<chrono::duration<double>>(end - start);   // measure time span between start & end
    cout<<"Operation took: "<<time_span.count()<<" seconds !!!";
    return 0;
}