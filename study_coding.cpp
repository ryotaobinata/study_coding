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
/*
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
*/


/*
//ABC201
//problemB
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int n;
	cin >> n;
	vector<pair<string, int>> m_rank(n);

	for (size_t i = 0; i < n; i++)
	{
		cin >> m_rank[i].first >> m_rank[i].second;
	}

	sort(m_rank.begin(), m_rank.end(), [](pair<string,int> a, pair<string, int>b) {
		return a.second > b.second;
		});

	cout << m_rank[1].first << endl;

	return 0;

}
*/


/*
//ABC201
//problemB
#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main() {
	int h, w,x,y;
	int sx, sy;
	int count = 0;
	cin >> h >> w>>x>>y;
	x = x - 1;
	y = y - 1;
	vector<string> map(h);
	for (size_t i = 0; i < h; i++)
	{
		cin >> map[i];
	}
	
	sx = x;
	sy = y;

	//¶
	while (1)
	{
		if (sy-1>=0)
			sy--;
		else
			break;

		if (map[sx][sy]=='.')
			count++;
		else
			break;
	}

	sx = x;
	sy = y;
	//ã
	while (1)
	{
		if (sx - 1 >= 0)
			sx--;
		else
			break;

		if (map[sx][sy] == '.')
			count++;
		else
			break;
	}

	sx = x;
	sy = y;
	//‰E
	while (1)
	{
		if (sy + 1 < w)
			sy++;
		else
			break;

		if (map[sx][sy] == '.')
			count++;
		else
			break;
	}

	sx = x;
	sy = y;
	//‰º
	while (1)
	{
		if (sx + 1 < h)
			sx++;
		else
			break;

		if (map[sx][sy] == '.')
			count++;
		else
			break;
	}

	if (map[x][y]=='.')
	{
		count++;
	}

	cout << count<<endl;
	return 0;
}*/

/*
//ABC192
//problemC
#include<iostream>
#include<vector>
#include<string>
#include<algorithm>

using namespace std;

int g1(string s);
int g2(string s);
int f(string s);

int main() {
	int n,k;
	string s;
	cin >> n >> k;
	s = to_string(n);
	for (size_t i = 0; i < k; i++)
	{
		s=to_string(f(s));
	}

	cout << stoi(s);

	return 0;
}
int g1(string s) {
	sort(s.begin(), s.end(), [](char a,char b) {
		return a > b;
	});
	return stoi(s);
}
int g2(string s) {
	sort(s.begin(), s.end(), [](char a, char b) {
		return a < b;
		});
	return stoi(s);
}
int f(string s) {
	return g1(s) - g2(s);
}
*/


