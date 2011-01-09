/* Generated by RuntimeBrowser on iPhone OS 4.2.1
   Image: /System/Library/Frameworks/CoreFoundation.framework/CoreFoundation
 */



@interface NSCache : NSObject 
{
    id _delegate;
    void *_private[5];
    void *_reserved;
}


- (void)setObject:(id)arg1 forKey:(id)arg2 cost:(NSUInteger)arg3;
- (void)setTotalCostLimit:(NSUInteger)arg1;
- (NSUInteger)totalCostLimit;
- (void)setCountLimit:(NSUInteger)arg1;
- (NSUInteger)countLimit;
- (BOOL)evictsObjectsWithDiscardedContent;
- (void)setEvictsObjectsWithDiscardedContent:(BOOL)arg1;
- (void)finalize;
- (void)setName:(id)arg1;
- (id)name;
- (void)removeObjectForKey:(id)arg1;
- (id)objectForKey:(id)arg1;
- (void)setObject:(id)arg1 forKey:(id)arg2;
- (id)init;
- (void)removeAllObjects;
- (void)dealloc;
- (void)setDelegate:(id)arg1;
- (id)delegate;

@end