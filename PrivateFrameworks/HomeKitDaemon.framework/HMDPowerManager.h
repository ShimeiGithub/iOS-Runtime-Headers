/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HomeKitDaemon.framework/HomeKitDaemon
 */

@interface HMDPowerManager : NSObject {
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    BOOL _networkAccessRequired;
    BOOL _networkInterfaceActive;
    unsigned int _powerAssertion;
    void *_scContext;
    struct __SCDynamicStore { } *_scStore;
    BOOL _started;
}

@property (getter=isNetworkAccessRequired, nonatomic) BOOL networkAccessRequired;

- (void).cxx_destruct;
- (long)_ensureNetworkInterfaceMonitorStarted;
- (void)_ensureNetworkInterfaceMonitorStopped;
- (void)_update;
- (void)dealloc;
- (id)init;
- (BOOL)isNetworkAccessRequired;
- (void)setNetworkAccessRequired:(BOOL)arg1;
- (void)start;
- (void)stop;

@end