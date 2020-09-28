int main() {
    
    // Add a comment
    
    int factorial;
    cin >> factorial;
    int product = 1;
    //changed greater than to less than
    if (factorial < 10){
        //changed i to = 1
        //changed i to be <= to factorial from > factorial
        //changed to ++ from --
        for (int i = 1; i <= factorial; i++) {
            //you already have something adding to i so just multiply
            product = product * i;
        }
        
    } else {
        cout << "Your input is too large. Try again.";
        return 0;
    }
    //output the prduct not input
    cout << "The answer is";
    cout << product;
    return factorial;
    
}
