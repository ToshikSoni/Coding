#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main()
{
    // Open input and output files
    ifstream input_file("input.txt");
    ofstream output_file("output.txt");

    if (!input_file.is_open())
    {
        cout << "Error opening input file." << endl;
        return 1;
    }

    if (!output_file.is_open())
    {
        cout << "Error opening output file." << endl;
        return 1;
    }

    // Read input file line by line
    string line;
    while (getline(input_file, line))
    {
        // Parse line and extract name and age fields
        string name, age_str;
        input_file.getline(name, 256);
        // getline(line, age_str);
        int age = stoi(age_str);

        // Calculate birth year based on current year (2023)
        int birth_year = 2023 - age;

        // Write report to output file
        output_file << "Name: " << name << ", Age: " << age << ", Birth Year: " << birth_year << endl;
    }

    // Close files
    input_file.close();
    output_file.close();

    return 0;
}