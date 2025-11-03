#include <iostream>
#include <fstream>
#include <map>
#include <string>
#include <chrono>

using namespace std;

//Rosalind problem 1: Counting DNA Nucleotides

 /*
 Given: A DNA string s of length at most 1000 nt.

Return: Four integers (separated by spaces) counting the respective number 
of times that the symbols 'A', 'C', 'G', and 'T' occur in s.
 */

int main() {

    // Read in input file

    ifstream MyFile("../input_files/rosalind_dna.txt");

    // Define the string to hold DNA string
    string s;
    getline(MyFile,s);

    // Prompt for DNA input, store in s
    //cout << "DNA string input:" << endl;
    //cin >> s;

    // Nucleotide to number dictionary
    map<string, int> nuc2num;
    nuc2num["A"] = 1;
    nuc2num["C"] = 2;
    nuc2num["T"] = 3;
    nuc2num["G"] = 4;

    // Initialize counters
    int A_counter = 0, C_counter = 0, T_counter = 0, G_counter = 0;

    // Create an object of `steady_clock` class and start timer
    chrono::steady_clock sc;   
    auto start = sc.now();
    
    // Loop through (iterative CPU command, GPU cuda soon)
    for (int i = 0; i < s.length(); i++) {

        // Change nucleotide to number for switch
        string nuc = s.substr(i, 1);
        int num_from_nuc = nuc2num[nuc];
        
        // Count position
        switch (num_from_nuc) {
            case 1:
                ++A_counter;
                break;
            case 2:
                ++C_counter;
                break;
            case 3:
                ++T_counter;
                break;
            case 4:
                ++G_counter;
                break;
        }
    }
    cout << A_counter << " " << C_counter << " " << G_counter << " " << T_counter << endl;
    // End timer and print time
    auto end = sc.now();      
    auto time_span = static_cast<chrono::duration<double>>(end - start);   
    cout<<"Operation took: "<<time_span.count()<<" seconds !!!";

    return 0;
}