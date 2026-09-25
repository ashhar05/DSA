vector<string> fizzBuzz(int n) {
        vector<string> yoyo;
        for(int i=1; i<=n; i++)
        {
            if(i%3==0 && i%5==0)
            {
                yoyo.push_back("FizzBuzz");
            }
            else if(i%3==0)
            {
                yoyo.push_back("Fizz");
            }
            else if(i%5==0)
            {
                yoyo.push_back("Buzz");
            }
            else
            {
                yoyo.push_back(to_string(i));
            }
        }
        return yoyo;
        
    }