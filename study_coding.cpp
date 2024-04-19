//ABC199
//problem_A
/*
#include<iostream>
using namespace std;
int main(void) {
	int a, b, c;
	cin >> a >> b >> c;
	if ((a * a + b * b) < (c * c)) cout << "Yes";
	else cout << "No";

	return 0;
}
*/

//ABC197
//problem_A
/*
#include<iostream>
#include<string>
using namespace std;
int main(void) {
	string s;
	char x;
	cin >> s;
	x = s[0];
	s.erase(s.begin());
	s.push_back(x);
	cout << s;
	return 0;
}
*/

//ABC188
//problem_B
/*
#include<iostream>
#include<vector>
using namespace std;
int main(void) {
	int n,sum=0;
	cin >> n;
	vector<int> A(n);
	vector<int> B(n);
	for (size_t i = 0; i < 2; i++)
	{
		if (i == 0) {
			for (size_t j = 0; j < n; j++)
			{
				cin >> A[j];
			}
		}
		else
		{
			for (size_t j = 0; j < n; j++)
			{
				cin >> B[j];
			}
		}
	}

	for (size_t i = 0; i < n; i++)
	{
		sum += A[i] * B[i];
	}
	
	if (sum == 0)
	{
		cout << "Yes";
	}
	else cout << "No";

}
*/

//ABC191
//problem_B
/*
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) {
	int n, x;
	cin >> n >> x;
	vector<int> A(n);

	for (size_t i = 0; i < n; i++)
	{
		cin >> A[i];
	}

	auto it = remove(A.begin(), A.end(), x);
	A.erase(it, A.end());
	for (auto a : A) {
		cout << a << " ";
	}

	return 0;
}
*/

//ABC190
//problem_B
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(void) {
	int n, s, d;
	cin >> n >> s >> d;
	vector<pair<int,int>> xy(n);
	for (size_t i = 0; i < n; i++)
	{
		cin >> xy[i].first >> xy[i].second;
	}

	for (size_t i = 0; i < n; i++)
	{
		if (xy[i].first >= s||xy[i].second<=d) {
			continue;
		}
		else
		{
			cout << "Yes";
			return 0;
		}
		
	}

	cout << "No";
	
}
