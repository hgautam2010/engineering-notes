---
type: algorithm
status: skeleton
tags:
  - algo
created: 2026-07-15
---

# KMP

Knuth-Morris-Pratt is a pattern matching algorithm that help us search a sub-string in a string in O(n + m) time with using O(m) extra space.

## Idea

The idea is to not to process already processed prefix again that has already checked, KMP do it by using longest prefix suffix mapping array.

## Prefix Function

Below is the main LPS function that creates longest prefix suffix array.

```cpp
vector<int> buildLps(string& s) {
	int n = s.size();

	vector<int> lps(n, 0);

	int len = 0, i = 1;

	while (i < n) {
		if (s[i] == s[len]) {
			lps[i] = ++len;
			i++;
		} else if (len > 0) {
			len = lps[len - 1];
		} else {
			lps[i] = 0;
			i++;
		}
	}

	return lps;
}
```

## Matching

```cpp
vector<int> search(string &txt, string& pattern) {
	int n = txt.size();
	int m = pattern.size();

	if (m == 0 || n == 0 || m > n) {
		return {};
	}

	vector<int> lps = buildLps(pattern);
	vector<int> idx;

	int i = 0, j = 0;

	while (i < n) {
		if (txt[i] == pattern[j]) {
			i++;
			j++;
		}

		if (j == pattern.size()) {
			idx.push_back(i - j);
			j = lps[j - 1];
		} else if (i < n && txt[i] != pattern[j]) {
			if (j > 0) {
				j = lps[j - 1];
			} else {
				i++;
			}
		}
	}

	return idx;
}
```

## Complexity

This is complexity of above implementation.

**Time -** O(m + n)
**Space -** O(m)

_m_ = pattern length
_n_ = text length
_k_ = total matches

## Edge Cases

- Very large text or pattern
- Very large number of matches
- Index overflow if using int for huge inputs.
- Byte-wise matching vs Unicode/case-normalized matching.

## Related
