/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface _HDKeyValueJournalEntry : HDJournalEntry {
    int _category;
    NSString *_domain;
    NSString *_key;
    NSDate *_modificationDate;
    long long _provenance;
    int _updatePolicy;
    <NSSecureCoding> *_value;
}

@property (nonatomic, readonly) int category;
@property (nonatomic, readonly) NSString *domain;
@property (nonatomic, readonly) NSString *key;
@property (nonatomic, readonly) NSDate *modificationDate;
@property (nonatomic, readonly) long long provenance;
@property (nonatomic, readonly) int updatePolicy;
@property (nonatomic, readonly) <NSSecureCoding> *value;

+ (void)applyEntries:(id)arg1 withDaemon:(id)arg2;
+ (int)behavior;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)category;
- (id)domain;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithValue:(id)arg1 key:(id)arg2 domain:(id)arg3 category:(int)arg4 provenance:(long long)arg5 updatePolicy:(int)arg6 modificationDate:(id)arg7;
- (id)key;
- (id)modificationDate;
- (long long)provenance;
- (int)updatePolicy;
- (id)value;

@end