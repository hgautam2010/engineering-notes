# System Design Reading Map

Use this map to fill notes under [[System Design/Index]]. Start with the book chapters, then use web resources for interview-shaped examples and current terminology.

## Interview Method

| Skeleton notes | Read first | Then read |
|---|---|---|
| [[System Design/Concepts/Capacity Estimation]], [[Staff Engineering/Interview Prep/System Design Interview Rubric]] | Alex Xu V1: Back-of-the-envelope Estimation; A Framework for System Design Interviews | Hello Interview: Delivery Framework; Educative: System Design Interviews and Back-of-the-Envelope Calculations |
| [[System Design/Concepts/Scalability]], [[System Design/Concepts/Availability and Reliability]], [[System Design/Concepts/SLOs and Error Budgets]] | DDIA Ch 1; Fundamentals Ch 4-6 | Hello Interview: Numbers to Know; Grokking: Non-Functional System Characteristics |
| [[Staff Engineering/Interview Prep/Google L5 Staff Prep Map]] | Hello Interview: Staff-Level System Design | Fundamentals Ch 2, Ch 19-23 |

## Core Concepts

| Skeleton notes | Read first | Then read |
|---|---|---|
| [[System Design/Concepts/API Design]] | Hello Interview: API Design | DDIA Ch 4; Building Microservices Ch 4-5 |
| [[System Design/Concepts/Data Modeling]], [[System Design/Tradeoffs/SQL vs NoSQL]], [[System Design/Tradeoffs/Normalization vs Denormalization]] | DDIA Ch 2-3 | Hello Interview: Data Modeling and Database Indexing |
| [[System Design/Concepts/Replication]], [[System Design/Tradeoffs/Single Leader vs Multi Leader]] | DDIA Ch 5 | Alex Xu V1: Key-value Store |
| [[System Design/Concepts/Partitioning]], [[System Design/Concepts/Hotspot Mitigation]] | DDIA Ch 6 | Hello Interview: Sharding; Alex Xu V1: Consistent Hashing |
| [[System Design/Concepts/Consistency]], [[System Design/Concepts/Distributed Transactions]], [[System Design/Tradeoffs/Strong vs Eventual Consistency]] | DDIA Ch 7-9 | Alex Xu V2: Payment System; Digital Wallet |
| [[System Design/Concepts/Consensus and Leader Election]] | DDIA Ch 8-9 | Grokking: preliminary distributed system concepts |
| [[System Design/Concepts/Queues and Streams]], [[System Design/Tradeoffs/Batch vs Stream Processing]] | DDIA Ch 10-11 | Alex Xu V2: Distributed Message Queue |
| [[System Design/Concepts/Schema Evolution]], [[System Design/Concepts/Data Migration and Backfills]] | DDIA Ch 4, Ch 11-12 | Building Microservices Ch 3, Ch 5 |
| [[System Design/Concepts/Security and Privacy]], [[System Design/Concepts/Tenant Isolation]] | Building Microservices Ch 11 | Fundamentals Ch 4-7 |
| [[System Design/Concepts/Observability]] | Building Microservices Ch 10 | Alex Xu V2: Metrics Monitoring and Alerting System |
| [[System Design/Concepts/Multi Region Architecture]], [[System Design/Concepts/Disaster Recovery]] | DDIA Ch 5-9 | Fundamentals Ch 4-6; Hello Interview: core concepts |

## Patterns And Tradeoffs

| Skeleton notes | Read first | Then read |
|---|---|---|
| [[System Design/Patterns/Cache Aside]], [[System Design/Patterns/Read Through Cache]], [[System Design/Patterns/Write Through Cache]], [[System Design/Tradeoffs/Cache Aside vs Write Through]] | Alex Xu V1: Scale From Zero To Millions Of Users; Key-value Store | Hello Interview: Caching; [[Technologies/Redis/Index]] |
| [[System Design/Patterns/Consistent Hashing]] | Alex Xu V1: Design Consistent Hashing | DDIA Ch 6 |
| [[System Design/Patterns/Token Bucket]], [[System Design/Concepts/Rate Limiting]] | Alex Xu V1: Design a Rate Limiter | Hello Interview: Rate Limiter |
| [[System Design/Patterns/Outbox Pattern]], [[System Design/Patterns/Saga Pattern]], [[System Design/Patterns/Change Data Capture]] | DDIA Ch 11; Building Microservices Ch 4-6 | Alex Xu V2: Payment System; Digital Wallet |
| [[System Design/Patterns/Circuit Breaker]], [[System Design/Patterns/Bulkhead]], [[System Design/Patterns/Backpressure]], [[System Design/Patterns/Graceful Degradation]] | Building Microservices Ch 12-13 | Fundamentals Ch 4-6 |
| [[System Design/Patterns/Strangler Fig Migration]] | Building Microservices Ch 3 | [[Staff Engineering/Execution/Migration Strategy]] |
| [[System Design/Patterns/Canary Deployment]] | Building Microservices Ch 8 | [[Staff Engineering/Execution/Launch Readiness]] |

## Case Studies

| Skeleton note | Read first | Then read |
|---|---|---|
| [[System Design/Case Studies/URL Shortener]] | Alex Xu V1: Design a URL Shortener | Hello Interview: Bitly; Grokking: TinyURL |
| [[System Design/Case Studies/Web Crawler]] | Alex Xu V1: Design a Web Crawler | Hello Interview: Web Crawler |
| [[System Design/Case Studies/Notification System]] | Alex Xu V1: Design a Notification System | Hello Interview: Notification System practice |
| [[System Design/Case Studies/News Feed]] | Alex Xu V1: Design a News Feed System | Hello Interview: FB News Feed; Educative: Newsfeed |
| [[System Design/Case Studies/Chat System]] | Alex Xu V1: Design a Chat System | Hello Interview: WhatsApp |
| [[System Design/Case Studies/Search Autocomplete]] | Alex Xu V1: Design a Search Autocomplete System | Educative: Typeahead Suggestion |
| [[System Design/Case Studies/Video Streaming]] | Alex Xu V1: Design YouTube | Hello Interview: YouTube |
| [[System Design/Case Studies/File Storage Service]], [[System Design/Case Studies/S3 Object Storage]] | Alex Xu V1: Design Google Drive; Alex Xu V2: S3-like Object Storage | Hello Interview: Dropbox |
| [[System Design/Case Studies/Rate Limiter]] | Alex Xu V1: Design a Rate Limiter | Hello Interview: Rate Limiter |
| [[System Design/Case Studies/Distributed Cache]] | Alex Xu V1: Design a Key-value Store; Consistent Hashing | Hello Interview: Distributed Cache |
| [[System Design/Case Studies/Ride Sharing Service]] | Alex Xu V2: Nearby Friends; Google Maps | Hello Interview: Uber |
| [[System Design/Case Studies/Google Maps]], [[System Design/Case Studies/Nearby Friends]] | Alex Xu V2: Proximity Service; Nearby Friends; Google Maps | Hello Interview: Yelp; Uber |
| [[System Design/Case Studies/Metrics Platform]] | Alex Xu V2: Metrics Monitoring and Alerting System | Hello Interview: Metrics Monitoring |
| [[System Design/Case Studies/Ad Click Aggregation]] | Alex Xu V2: Ad Click Event Aggregation | Hello Interview: Ad Click Aggregator |
| [[System Design/Case Studies/Payment System]], [[System Design/Case Studies/Digital Wallet]] | Alex Xu V2: Payment System; Digital Wallet | Hello Interview: Payment System |
| [[System Design/Case Studies/Hotel Reservation System]], [[System Design/Case Studies/Inventory Reservation System]] | Alex Xu V2: Hotel Reservation System | DDIA Ch 7-9 |
| [[System Design/Case Studies/Distributed Email Service]] | Alex Xu V2: Distributed Email Service | Building Microservices Ch 4-5 |
| [[System Design/Case Studies/Real-Time Gaming Leaderboard]] | Alex Xu V2: Real-time Gaming Leaderboard | Hello Interview: Online Chess; YouTube Top K |
| [[System Design/Case Studies/Stock Exchange]] | Alex Xu V2: Stock Exchange | DDIA Ch 7-9 |
| [[System Design/Case Studies/Online Auction]] | Fundamentals Ch 15: Space-Based Architecture example | Hello Interview: Online Auction |
