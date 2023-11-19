int terminalDefence(int n, int m, vector<int> &a, vector<int> &h, vector<int> &b, int k) {
    // Write your code here.
    int i=0;
    int j=0;
    int l=0;
    int count=0;
    int required=0;
    int left=0;
    int right=0;
    vector<int> c(m+n, 0);

    while(i<m || j<n) {
        if(i!=m && (j==n || a[i]<b[j])) {
            c[l]=(h[i]+k-1)/k;
            i++;
        } else {
            c[l]=-1;
            j++;
        }
        l++;
    }

    for(int i=0; i<m+n; i++) {
        if(c[i]==-1) {
            count++;
            if(count+required>n) {
                right=n-count;
            } else {
                left++;
            }
        } else if(c[i]>left+right) {
            if(count+required>n || c[i]>n) {
                return 0;
            }
            required=max(required, c[i]-left);
        }
    }
    return 1;
}
