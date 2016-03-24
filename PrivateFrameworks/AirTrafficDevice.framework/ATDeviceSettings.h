/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/AirTrafficDevice.framework/AirTrafficDevice
 */

@interface ATDeviceSettings : NSObject {
    NSObject<OS_dispatch_queue> *_queue;
    NSUserDefaults *_userDefaults;
}

@property (nonatomic, readonly, copy) NSArray *dataClassesNeedingSync;
@property (nonatomic, readonly) BOOL fairPlayEnabled;
@property (nonatomic, readonly) BOOL grappaEnabled;
@property (nonatomic, readonly, copy) NSString *interfaceName;
@property (nonatomic, readonly) BOOL isDeviceLinkClient;
@property (nonatomic, readonly, copy) NSString *libraryIdentifier;
@property (nonatomic, readonly) double pairingSyncCompletionTime;
@property (nonatomic, readonly, copy) NSString *serviceDomain;
@property (nonatomic, readonly, copy) NSString *serviceName;
@property (nonatomic, readonly, copy) NSString *serviceType;
@property (nonatomic, readonly) BOOL useNetServicesConnection;

+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)_endpointInfoForLibrary:(id)arg1;
- (void)_setEndpointInfo:(id)arg1 forLibrary:(id)arg2;
- (int)activeRestoreType;
- (id)dataClassesNeedingSync;
- (id)endpointInfo;
- (BOOL)fairPlayEnabled;
- (BOOL)grappaEnabled;
- (BOOL)hasCompletedDataMigration;
- (id)hostInfoForLibrary:(id)arg1;
- (id)init;
- (id)interfaceName;
- (BOOL)isDeviceLinkClient;
- (BOOL)isSyncPendingForDataClass:(id)arg1;
- (id)lastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2;
- (id)libraryIdentifier;
- (double)pairingSyncCompletionTime;
- (void)removeEndpointInfoForLibrary:(id)arg1;
- (id)serviceDomain;
- (id)serviceName;
- (id)serviceType;
- (void)setActiveRestoreType:(int)arg1;
- (void)setEndpointInfo:(id)arg1;
- (void)setHasCompletedDataMigration:(BOOL)arg1;
- (void)setHostInfo:(id)arg1 forLibrary:(id)arg2;
- (void)setPairingSyncCompletionTime:(double)arg1;
- (void)setSyncPending:(BOOL)arg1 forDataClass:(id)arg2;
- (void)setSyncState:(id)arg1 forLibrary:(id)arg2 dataClass:(id)arg3;
- (id)syncStateForLibrary:(id)arg1 dataClass:(id)arg2;
- (void)synchronize;
- (void)updateLastSyncTimeForLibrary:(id)arg1 dataClass:(id)arg2;
- (BOOL)useNetServicesConnection;

@end