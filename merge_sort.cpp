#
include < iostream >
  using namespace std;
int main() {
  int n(5), count(1), l1, l2, k, h1, h2, i, j;
  int numArr[] = {
    10,
    30,
    20,
    50,
    40
  };
  int temp[5];
  for (int size = 1; size < n; size = size * 2) {
    l1 = 0;
    k = 0;
    while (l1 + size < n) {
      h1 = l1 + size - 1;
      l2 = h1 + 1;
      h2 = l2 + size - 1;
      if (h2 >= j)
        h2 = n - 1;
      i = l1;
      j = l2;
      while (i <= h1 && j <= h2) {
        if (numArr[i] <= numArr[j])
          temp[k++] = numArr[i++];
        else
          temp[k++] = numArr[j++];
      }
      while (i <= h1)
        temp[k++] = numArr[i++];
      while (j <= h2)
        temp[k++] = numArr[j++];
      l1 = h2 + 1;
    }
    for (i = l1; k < n; i++)
      temp[k++] = numArr[i];
    for (i = 0; i < n; i++)
      numArr[i] = temp[i];
    cout << "Pass " << count++ << ": ";
    for (int k = 0; k < 5; k++) {
      cout << numArr[k] << " ";
    }
    cout << endl;
  }
}
