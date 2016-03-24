/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CloudKitDaemon.framework/CloudKitDaemon
 */

@interface CKDZoneGatekeeper : NSObject {
    NSMutableArray *_waiterWrappers;
    NSMutableDictionary *_zoneIDsToGateHolders;
}

@property (nonatomic, retain) NSMutableArray *waiterWrappers;
@property (nonatomic, retain) NSMutableDictionary *zoneIDsToGateHolders;

- (void).cxx_destruct;
- (BOOL)hasStatusToReport;
- (id)init;
- (void)registerWaiter:(id)arg1 forZoneIDs:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)relinquishLocksForWaiter:(id)arg1;
- (void)setWaiterWrappers:(id)arg1;
- (void)setZoneIDsToGateHolders:(id)arg1;
- (id)statusReport;
- (id)waiterWrappers;
- (id)zoneIDsToGateHolders;

@end