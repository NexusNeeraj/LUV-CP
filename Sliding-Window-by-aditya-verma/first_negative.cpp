// Given an array and a positive integer k, find the first negative integer for each and every window(contiguous subarray) of size k.
// brute force
vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) 
{
      long long int i = 0;
      long long int j = 0;
      vector<long long int> ans(N - K + 1, 0);
      while(j < N){
            if(A[i] < 0) ans.push_back(A[i]);
            if(j - i + 1 < K) j++;
            else if(j - i + 1 == K){
                  for(int  k = i; k < K + i; k++){
                        if(A[k] < 0) {
                        ans[i] = A[k];
                        break;
                        }
                  }
                  i++;
                  j++;
            }
      }
      return ans;
}

// optimal code

vector<long long> printFirstNegativeInteger(long long int A[],long long int N, long long int K) 
{
      long long int i = 0;
      long long int j = 0;
      vector<long long int> ans;
      deque<long long int> dq;

      while(j < N){
            if(A[j] < 0) dq.push_back(A[j]);
            
            if(j - i + 1 < K) j++;
            else if(j - i + 1 == K){
                  if(dq.size() == 0){
                        ans.push_back(0);
                  }
                  else{
                        ans.push_back(dq.front());
                        if(A[i] < 0) dq.pop_front();
                  }
                  i++;
                  j++;
            }
      }
      return ans;
}
