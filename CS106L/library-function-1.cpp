#include <bits/stdc++.h>
using namespace std;

void printStateBits(const istream& iss);
int stringToInteger(const string& s);
void stringToIntegerTest();
void bufferedExperiment(ostream& oss);
int mindlessWork();


int main(){
    //stringToIntegerTest();
    //bufferedExperiment(cout);
    bufferedExperiment(cerr);
    return 0;
}

int stringToInteger(const string& s) {
    //fill me!
    istringstream iss(s);
    printStateBits(iss);

    int result;
    iss >> result;
    if (iss.fail()) throw std::domain_error("no value int at beginning!");

    char remain;
    iss >> remain;
    if (!iss.eof()) throw std::domain_error("more than a single valid int!");

    printStateBits(iss);
    return result;
}

void printStateBits(const istream& iss){
    cout << "Statebits: ";
    cout <<(iss.good() ? "G" : "-");
    cout <<(iss.eof() ? "E" : "-");
    cout <<(iss.fail() ? "F" : "-");
    cout <<(iss.bad() ? "B" : "-");
    cout << endl;
    //automatically flushed! why?
}
void stringToIntegerTest() {
    while (true) {
        cout << "Type in an integer: ";
        string s;
        if (!getline(cin, s)) throw std::domain_error("getline failed");
        cout << "You typed in: " << s << "\n";
        int result = stringToInteger(s);
        cout << "As an integer, this is: " << result << "\n";
        cout << "Half of that is: " << result/2 << "\n";
    }

}

void bufferedExperiment(ostream& oss) {
    oss << "CS";
    mindlessWork();
    oss << "106";
    mindlessWork();
    //oss << flush;
    //mindlessWork();
    oss << "L";
    mindlessWork();

    oss << endl;
    //mindlessWork();
}

// This is how I feel about my classes this quarter
// This function acts as a pause so you can more clearly see the interesting
// parts around this call, such as the buffering above.
// This is probably a life lesson about mindless work.
int mindlessWork() {
    double sum = 0;
    for (int i = 0; i < 400000000; ++i) {
        sum += i/999959;
        // large prime number so compiler can't optimize :)
    }
    return sum;
}