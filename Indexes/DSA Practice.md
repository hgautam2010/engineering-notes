# DSA Practice

This index points at the Preptin-fed submissions in `dsa-algo-practice/`. Use these files as raw evidence of attempts and accepted solutions. Put the polished explanation, pattern, and mistakes in curated notes under [[DSA/Index]] and [[Algorithms/Index]].

## Platform Areas

- `dsa-algo-practice/leetcode/`
- `dsa-algo-practice/codeforces/`
- `dsa-algo-practice/codechef/`
- `dsa-algo-practice/geeksforgeeks/`

## Problem READMEs

```dataview
TABLE file.folder AS Folder, file.mtime AS Updated
FROM "dsa-algo-practice"
WHERE file.name = "README"
SORT file.folder ASC
```

## Recent Solution Files

```dataview
TABLE file.ext AS Language, file.folder AS Folder, file.mtime AS Updated
FROM "dsa-algo-practice"
WHERE file.ext = "cpp" OR file.ext = "c" OR file.ext = "py" OR file.ext = "js"
SORT file.mtime DESC
LIMIT 30
```
