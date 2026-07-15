# Reading Notes

Use this folder for chapter-by-chapter or session-by-session notes.

## Notes

```dataview
TABLE author AS Author, status AS Status, file.mtime AS Updated
FROM "Books/Reading Notes"
WHERE file.name != "Index"
SORT file.mtime DESC
```
