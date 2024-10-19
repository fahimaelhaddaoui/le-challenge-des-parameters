#include <iostream>
#include <stdexcept>
#include <vector>

using namespace std;

void testFunction(const vector<int>& params) {
    cout<< "function called with "<< params.size() << "parameters." << endl;

}

int main(){
try {
     for(size_t i=1; ;i*=2){
        vector<int> params (i, 1);
        testFunction(params);
     }

}catch (const bad_alloc& e){
    cout << " Memory allocation error:"<< e.what() << endl;
}

return 0;
}




