bool good(int num,int digit,int sum){
	if(num == 0) return true;
	int lastdgt = num%10;
	if(lastdgt == digit || lastdgt <= sum){
		return false;
	}
	return good(num/10, digit, sum + lastdgt);
}



vector<int> goodNumbers(int a, int b, int digit) {
	// Write your code here.
	int sum = 0;
	vector<int> ans;
	for(int i = a; i <= b; i++){
		if(i%10 == digit) continue;
		if(good(i/10, digit, i%10)) ans.push_back(i);
	}
	
	return ans;
}
//https://www.codingninjas.com/studio/problems/good-numbers_625508?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTab=0