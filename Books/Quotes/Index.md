# Quotes

Use this folder for selected quotes and excerpts worth revisiting.

## Quote Notes

```dataview
TABLE source AS Source, topic AS Topic, file.mtime AS Updated
FROM "Books/Quotes"
WHERE file.name != "Index"
SORT file.mtime DESC
```
