#include <bits/stdc++.h>
using namespace std;
// Tạo hàm kiểm tra số nguyên tố
bool isPrime(int n) {
    if (n < 2) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main()
{
    freopen("bai2.inp","r",stdin);
    freopen("bai2.out","w",stdout);

    int n;
    cin >> n;
    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    long long sum = 0;
    int count = 0;

    for (int i = 0; i < n; i++) {
        if (isPrime(a[i])) {
            sum += a[i];
            count=count+1;
        }
    }

    if (count == 0) {
        cout << "Khong co so nguyen to";
    } else {
        cout << fixed << setprecision(3) << (double)sum / count;
    }

    return 0;
}
