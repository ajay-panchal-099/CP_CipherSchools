class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        
        stack<int> s;
        
        for( auto st : tokens) { 
            
            
             if(st =="+"){  
                int x = s.top();
                s.pop();
                int y = s.top(); 
                s.pop();
                s.push(x+y);
                
            }
            else if(st =="-"){  
                int x = s.top();
                s.pop();
                int y = s.top(); 
                s.pop();
                s.push(y-x);
            }
            else if(st  == "*"){ 
                int x = s.top();
                s.pop();
                int y = s.top(); 
                s.pop();
                s.push(x*y);
            }
            else if(st == "/"){ 
            int x = s.top();
                s.pop();
                int y = s.top(); 
                s.pop();
                s.push(y/x);
            }
            else{ 
               int x = stoi(st);
                s.push(x);
            }
        }
        
        return s.top();
    }
};