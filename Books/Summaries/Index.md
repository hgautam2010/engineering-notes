# Book Summaries

Use this folder for finished book summaries and durable takeaways.

## Summaries

```dataview
TABLE author AS Author, rating AS Rating, file.mtime AS Updated
FROM "Books/Summaries"
WHERE file.name != "Index"
SORT file.mtime DESC
```
