# Technology Reading Map

Use this map to fill notes under [[Technologies/Index]]. The books give fundamentals and tradeoffs; the web resources help with interview-facing vocabulary and modern tech choices.

## Redis

| Skeleton notes | Read first | Then read |
|---|---|---|
| [[Technologies/Redis/Data Structures]], [[Technologies/Redis/Performance and Memory]] | Alex Xu V1: Key-value Store | Hello Interview: Redis key technology |
| [[Technologies/Redis/Caching Patterns]], [[Technologies/Redis/Expiration and Eviction]] | Alex Xu V1: Scale From Zero To Millions Of Users | Hello Interview: Caching |
| [[Technologies/Redis/Cluster and Sharding]], [[Technologies/Redis/Replication and Sentinel]] | DDIA Ch 5-6 | Alex Xu V1: Consistent Hashing |
| [[Technologies/Redis/Distributed Locks]], [[Technologies/Redis/Transactions and Lua]] | DDIA Ch 8-9 | [[System Design/Concepts/Consensus and Leader Election]] |
| [[Technologies/Redis/PubSub and Streams]] | DDIA Ch 11 | [[Technologies/Kafka/Index]] for contrast |

## Postgres

| Skeleton notes | Read first | Then read |
|---|---|---|
| [[Technologies/Postgres/Data Modeling]], [[Technologies/Postgres/Indexes]], [[Technologies/Postgres/Query Planning]] | DDIA Ch 2-3 | Hello Interview: Data Modeling; Database Indexing |
| [[Technologies/Postgres/Transactions and Isolation]], [[Technologies/Postgres/MVCC]], [[Technologies/Postgres/Locks]] | DDIA Ch 7 | [[System Design/Concepts/Consistency]] |
| [[Technologies/Postgres/Replication]], [[Technologies/Postgres/Partitioning]] | DDIA Ch 5-6 | [[System Design/Tradeoffs/SQL vs NoSQL]] |
| [[Technologies/Postgres/Migrations]], [[Technologies/Postgres/Backup and Restore]] | DDIA Ch 4; Building Microservices Ch 3 | [[System Design/Concepts/Data Migration and Backfills]] |

## Kafka

| Skeleton notes | Read first | Then read |
|---|---|---|
| [[Technologies/Kafka/Topics and Partitions]], [[Technologies/Kafka/Producers]], [[Technologies/Kafka/Consumers and Consumer Groups]] | DDIA Ch 11 | Hello Interview: Kafka key technology |
| [[Technologies/Kafka/Delivery Semantics]], [[Technologies/Kafka/Offsets]], [[Technologies/Kafka/Exactly Once Processing]] | DDIA Ch 11-12 | [[System Design/Concepts/Ordering and Deduplication]] |
| [[Technologies/Kafka/Retention and Compaction]], [[Technologies/Kafka/Schema Management]] | DDIA Ch 4, Ch 11 | [[System Design/Concepts/Schema Evolution]] |
| [[Technologies/Kafka/Kafka Streams]] | DDIA Ch 10-11 | [[System Design/Tradeoffs/Batch vs Stream Processing]] |

## Kubernetes

| Skeleton notes | Read first | Then read |
|---|---|---|
| [[Technologies/Kubernetes/Pods]], [[Technologies/Kubernetes/Deployments]], [[Technologies/Kubernetes/Services]], [[Technologies/Kubernetes/Ingress]] | Building Microservices Ch 8, Ch 13 | Fundamentals Ch 9, Ch 17 |
| [[Technologies/Kubernetes/Requests and Limits]], [[Technologies/Kubernetes/Autoscaling]] | Building Microservices Ch 13 | [[System Design/Concepts/Scalability]] |
| [[Technologies/Kubernetes/Probes and Health Checks]], [[Technologies/Kubernetes/Observability and Troubleshooting]] | Building Microservices Ch 10, Ch 12 | [[Staff Engineering/Execution/Operational Excellence]] |
| [[Technologies/Kubernetes/RBAC and Security]], [[Technologies/Kubernetes/ConfigMaps and Secrets]] | Building Microservices Ch 11 | [[System Design/Concepts/Security and Privacy]] |

## AWS

| Skeleton notes | Read first | Then read |
|---|---|---|
| [[Technologies/AWS/IAM]], [[Technologies/AWS/Secrets Manager and KMS]] | Building Microservices Ch 11 | [[System Design/Concepts/Security and Privacy]] |
| [[Technologies/AWS/VPC]], [[Technologies/AWS/Load Balancing]], [[Technologies/AWS/CloudFront and Route 53]] | Hello Interview: Networking Essentials; Caching | [[System Design/Concepts/Multi Region Architecture]] |
| [[Technologies/AWS/S3]], [[Technologies/AWS/RDS]], [[Technologies/AWS/DynamoDB]] | DDIA Ch 2-7 | Alex Xu V1/V2 file storage and key-value chapters |
| [[Technologies/AWS/SQS]], [[Technologies/AWS/SNS]], [[Technologies/AWS/EventBridge and Kinesis]] | DDIA Ch 11; Building Microservices Ch 4 | [[System Design/Concepts/Queues and Streams]] |
| [[Technologies/AWS/Lambda]], [[Technologies/AWS/ECS and EKS]] | Building Microservices Ch 8, Ch 13 | [[System Design/Tradeoffs/Stateful vs Stateless Services]] |
| [[Technologies/AWS/CloudWatch]], [[Technologies/AWS/Cost and Well Architected]] | Building Microservices Ch 10; Fundamentals Ch 4-6 | [[System Design/Concepts/Observability]], [[System Design/Concepts/Cost Efficiency]] |
