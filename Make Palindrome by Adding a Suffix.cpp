int solve(string s) {   
    string s2 = "?" + s ;
    reverse(begin(s) , end(s)) ;
    s+=s2 ;
    int n = s.size();
    vector<int> pi(n , 0) ;
    for(int i=1; i<n; i++){
        int j = pi[i-1] ;
        while(j > 0 && s[i]!= s[j])
          j = pi[j-1] ;
        if(s[i] == s[j]) j++ ;
        pi[i] = j ;
    }
    return n/2 - pi[n-1] ;
}
