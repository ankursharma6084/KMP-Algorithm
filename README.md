# KMP-Algorithm
KMP Algo

KMP (imp) – To remember today

```

vector<int> prefix_function(string s) {
    int n = (int)s.length();
    vector<int> pi(n);
    for (int i = 1; i < n; i++) {
        int j = pi[i-1];
        while (j > 0 && s[i] != s[j])
            j = pi[j-1];
        if (s[i] == s[j])
            j++;
        pi[i] = j;
    }
    return pi;
}

```
Ques – 
405 – Make Pallindrome by adding Suffix
675 – Longest Prefix that is Suffix
Minimum characters to be added at front to make string palindrome (GFG)
Longest Prefix Suffix (GFG)
