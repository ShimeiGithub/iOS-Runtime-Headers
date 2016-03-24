/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/HealthDaemon.framework/HealthDaemon
 */

@interface HDNanoSyncManager : NSObject <HDDataObserver, HDDatabaseProtectedDataObserver, HDDiagnosticObject, HDHealthDaemonReadyObserver, HDIDSMessageCenterDelegate, HDNanoSyncSessionDelegate, HDNanoSyncStoreDelegate, HDProcessStateObserver> {
    HDNanoSyncStore *_activeSyncStore;
    HDDaemon *_daemon;
    BOOL _enablePeriodicSyncTimer;
    BOOL _isMaster;
    BOOL _isPairingActivated;
    NSDate *_lastPeriodicSyncDate;
    HDIDSMessageCenter *_legacyMessageCenter;
    HDIDSMessageCenter *_messageCenter;
    HDKeyValueDomain *_nanoSyncDomain;
    NSHashTable *_observers;
    NSArray *_pairedDevices;
    HDPairedSyncManager *_pairedSyncManager;
    NSSet *_pairedWatchSourceBundleIdentifiers;
    NSObject<OS_dispatch_source> *_periodicSyncTimer;
    NSObject<OS_dispatch_queue> *_queue;
    double _restoreTimeout;
    NSObject<OS_dispatch_queue> *_syncQueue;
    NSMutableDictionary *_syncStoresByDeviceIdentifier;
    BOOL _waitingForFirstUnlock;
}

@property (nonatomic, retain) HDNanoSyncStore *activeSyncStore;
@property (nonatomic) HDDaemon *daemon;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property BOOL enablePeriodicSyncTimer;
@property (readonly) unsigned int hash;
@property (readonly) BOOL isMaster;
@property BOOL isPairingActivated;
@property (nonatomic, retain) NSDate *lastPeriodicSyncDate;
@property (nonatomic, retain) HDIDSMessageCenter *legacyMessageCenter;
@property (nonatomic, retain) HDIDSMessageCenter *messageCenter;
@property (nonatomic, retain) HDKeyValueDomain *nanoSyncDomain;
@property (nonatomic, retain) NSHashTable *observers;
@property (nonatomic, retain) NSArray *pairedDevices;
@property (nonatomic, readonly) HDPairedSyncManager *pairedSyncManager;
@property (copy) NSSet *pairedWatchSourceBundleIdentifiers;
@property (nonatomic, retain) NSObject<OS_dispatch_source> *periodicSyncTimer;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *queue;
@property double restoreTimeout;
@property (readonly) Class superclass;
@property (nonatomic, retain) NSObject<OS_dispatch_queue> *syncQueue;
@property (nonatomic, retain) NSMutableDictionary *syncStoresByDeviceIdentifier;
@property (nonatomic) BOOL waitingForFirstUnlock;

- (void).cxx_destruct;
- (void)_achievementsWereAdded:(id)arg1;
- (void)_addBondiVersionMessageHandlersToMessageCenter:(id)arg1;
- (void)_addCoralVersionMessageHandlersToMessageCenter:(id)arg1;
- (void)_deviceDidBecomeActive:(id)arg1;
- (void)_deviceDidPair:(id)arg1;
- (void)_deviceDidUnpair:(id)arg1;
- (void)_didReceiveChangeRequest;
- (void)_foregroundStatusForClientChanged:(id)arg1;
- (void)_handleIncomingRequest:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_handleIncomingResponse:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_handleOutgoingMessageError:(id)arg1 usingBlock:(id /* block */)arg2;
- (void)_logIncomingRequest:(id)arg1;
- (void)_logIncomingResponse:(id)arg1;
- (void)_logOutgoingMessageError:(id)arg1;
- (void)_queue_authorizationRequestDidFailToSendWithError:(id)arg1 syncStore:(id)arg2;
- (void)_queue_beginProactiveSyncWithCompletion:(id /* block */)arg1;
- (void)_queue_beginRestoreWithStore:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_cancelPeriodicSyncTimer;
- (void)_queue_changeRequestDidFailToSendWithError:(id)arg1 syncStore:(id)arg2;
- (void)_queue_changeResponseDidFailToSendWithError:(id)arg1 syncStore:(id)arg2;
- (id)_queue_eligibleInactiveSyncStores;
- (BOOL)_queue_finishInitializationAfterFirstUnlockIfNecessaryWithError:(id*)arg1;
- (void)_queue_generateWatchActivationSamples;
- (void)_queue_handleRestoreRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_handleRestoreResponse:(id)arg1 syncStore:(id)arg2;
- (BOOL)_queue_isReadyForSyncWithSyncStore:(id)arg1 error:(id*)arg2;
- (id)_queue_messageCenterForSyncStore:(id)arg1;
- (id)_queue_nanoSyncKeyValueDomain;
- (void)_queue_notifyObserversStateChanged;
- (void)_queue_pairedSyncDidBeginForDevice:(id)arg1 messagesSentHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)_queue_performNextProactiveSyncWithRemainingDevices:(id)arg1 completion:(id /* block */)arg2;
- (void)_queue_periodicSyncTimerFired;
- (BOOL)_queue_permitSyncWithError:(id*)arg1;
- (void)_queue_receiveAuthorizationCompleteRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveAuthorizationRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveAuthorizationResponse:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveChangeRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveChangeResponse:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveRoutineRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_receiveRoutineResponse:(id)arg1 syncStore:(id)arg2;
- (void)_queue_requestAuthorizationForRequestRecord:(id)arg1 syncStore:(id)arg2 requestSentHandler:(id /* block */)arg3 completion:(id /* block */)arg4;
- (void)_queue_resetPairingWithCompletion:(id /* block */)arg1;
- (void)_queue_routineRequestDidFailToSendWithError:(id)arg1 syncStore:(id)arg2;
- (void)_queue_sendChangeSet:(id)arg1 status:(id)arg2 session:(id)arg3 completion:(id /* block */)arg4;
- (void)_queue_sendRequest:(id)arg1 syncStore:(id)arg2;
- (void)_queue_sendResponse:(id)arg1 syncStore:(id)arg2;
- (void)_queue_sendRestoreMessageWithStore:(id)arg1 restoreUUID:(id)arg2 restores:(id)arg3 sequenceNumber:(long long)arg4 statusCode:(int)arg5;
- (void)_queue_sendRoutineRequest:(id)arg1 syncStore:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_sendSpeculativeChangeSet:(id)arg1 syncStore:(id)arg2 completion:(id /* block */)arg3;
- (void)_queue_setUpMessageCentersIfNecessary;
- (void)_queue_startPeriodicSyncTimerIfNecessary;
- (void)_queue_syncImmediatelyWithReason:(id)arg1 options:(unsigned int)arg2 completion:(id /* block */)arg3;
- (id)_queue_syncStoreForIDSDevice:(id)arg1 updateIfNecessary:(BOOL)arg2;
- (id)_queue_syncStoreForMessageCenterError:(id)arg1;
- (void)_queue_synchronizeWithOptions:(unsigned int)arg1 restoreMessagesSentHandler:(id /* block */)arg2 targetSyncStore:(id)arg3 reason:(id)arg4 completion:(id /* block */)arg5;
- (void)_queue_transitionToRestoreCompleteWithSyncStore:(id)arg1;
- (void)_queue_transitionToRestoreInProgressWithSyncStore:(id)arg1;
- (void)_queue_transitionToRestoreIncompleteWithSyncStore:(id)arg1 error:(id)arg2;
- (void)_queue_updateDeviceNameIfNecessaryWithSyncStore:(id)arg1;
- (void)_queue_updatePairingActivated;
- (void)_queue_updateSyncStores;
- (void)_queue_updateSyncStoresWithCompletion:(id /* block */)arg1;
- (void)_queue_waitForLastChanceSyncWithPairingID:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (void)_registerForSyncTriggers;
- (void)_resetSyncAnchorsForStore:(id)arg1;
- (void)_sendFinalMessageForSyncSession:(id)arg1 status:(id)arg2 success:(BOOL)arg3 error:(id)arg4;
- (void)_sendFinalStatusMessageForSyncSession:(id)arg1 didFinishSuccessfully:(BOOL)arg2 error:(id)arg3;
- (void)_setPairingActivated:(BOOL)arg1;
- (void)_showFitnessAppIfNeeded;
- (void)_syncImmediatelyWithReason:(id)arg1;
- (void)_syncImmediatelyWithReason:(id)arg1 options:(unsigned int)arg2;
- (BOOL)_syncQueue_applyActivationRestore:(id)arg1 request:(id)arg2 syncStore:(id)arg3 error:(id*)arg4;
- (void)_syncQueue_forwardSpeculativeChangeSetIfNecessaryForChanges:(id)arg1 destinationSyncStores:(id)arg2 originSyncStore:(id)arg3;
- (void)_unregisterForSyncTriggers;
- (void)_userCharacteristicsDidChange:(id)arg1;
- (void)_userPreferencesDidChange:(id)arg1;
- (void)_watchOffWristNotification:(id)arg1;
- (void)_workoutSamplesWereAssociated:(id)arg1;
- (id)activeSyncStore;
- (void)addObserver:(id)arg1;
- (id)daemon;
- (void)daemonReady:(id)arg1;
- (void)database:(id)arg1 protectedDataDidBecomeAvailable:(BOOL)arg2;
- (void)dealloc;
- (id)diagnosticDescription;
- (BOOL)enablePeriodicSyncTimer;
- (id)initWithDaemon:(id)arg1 isMaster:(BOOL)arg2;
- (BOOL)isMaster;
- (BOOL)isPairingActivated;
- (id)lastPeriodicSyncDate;
- (id)legacyMessageCenter;
- (id)messageCenter;
- (void)messageCenter:(id)arg1 activeDeviceDidChange:(id)arg2 acknowledgementHandler:(id /* block */)arg3;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForRequest:(id)arg2;
- (void)messageCenter:(id)arg1 didResolveIDSIdentifierForResponse:(id)arg2;
- (void)messageCenterChangesError:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationCompleteRequest:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationError:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationRequest:(id)arg1;
- (void)messageCenterDidReceiveAuthorizationResponse:(id)arg1;
- (void)messageCenterDidReceiveChangesRequest:(id)arg1;
- (void)messageCenterDidReceiveChangesResponse:(id)arg1;
- (void)messageCenterDidReceiveRestoreRequest:(id)arg1;
- (void)messageCenterDidReceiveRestoreResponse:(id)arg1;
- (void)messageCenterDidReceiveRoutineError:(id)arg1;
- (void)messageCenterDidReceiveRoutineRequest:(id)arg1;
- (void)messageCenterDidReceiveRoutineResponse:(id)arg1;
- (void)messageCenterRestoreError:(id)arg1;
- (id)nanoSyncDomain;
- (void)nanoSyncSession:(id)arg1 didFinishSuccessfully:(BOOL)arg2 error:(id)arg3;
- (void)nanoSyncSession:(id)arg1 sendChanges:(id)arg2 completion:(id /* block */)arg3;
- (void)nanoSyncStore:(id)arg1 deviceNameDidChange:(id)arg2;
- (void)nanoSyncStore:(id)arg1 remoteSystemBuildVersionDidChange:(id)arg2;
- (void)nanoSyncStore:(id)arg1 restoreStateDidChange:(int)arg2;
- (id)observers;
- (id)pairedDevices;
- (void)pairedSyncDidBeginForDevice:(id)arg1 messagesSentHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (id)pairedSyncManager;
- (id)pairedWatchSourceBundleIdentifiers;
- (id)periodicSyncTimer;
- (void)processDidEnterBackground:(id)arg1;
- (void)processDidEnterForeground:(id)arg1;
- (void)processResumed:(id)arg1;
- (void)processSuspended:(id)arg1;
- (id)queue;
- (void)removeObserver:(id)arg1;
- (void)requestAuthorizationForRequestRecord:(id)arg1 requestSentHandler:(id /* block */)arg2 completion:(id /* block */)arg3;
- (void)resetPairingWithCompletion:(id /* block */)arg1;
- (void)restoreTimedOutWithSyncStore:(id)arg1;
- (double)restoreTimeout;
- (void)samplesAdded:(id)arg1 anchor:(id)arg2;
- (void)sendRoutineRequest:(id)arg1 completion:(id /* block */)arg2;
- (void)setActiveSyncStore:(id)arg1;
- (void)setDaemon:(id)arg1;
- (void)setEnablePeriodicSyncTimer:(BOOL)arg1;
- (void)setLastPeriodicSyncDate:(id)arg1;
- (void)setLegacyMessageCenter:(id)arg1;
- (void)setMessageCenter:(id)arg1;
- (void)setNanoSyncDomain:(id)arg1;
- (void)setObservers:(id)arg1;
- (void)setPairedDevices:(id)arg1;
- (void)setPairedWatchSourceBundleIdentifiers:(id)arg1;
- (void)setPeriodicSyncTimer:(id)arg1;
- (void)setQueue:(id)arg1;
- (void)setRestoreTimeout:(double)arg1;
- (void)setSyncQueue:(id)arg1;
- (void)setSyncStoresByDeviceIdentifier:(id)arg1;
- (void)setWaitingForFirstUnlock:(BOOL)arg1;
- (void)syncHealthDataWithOptions:(unsigned int)arg1 completion:(id /* block */)arg2;
- (void)syncHealthDataWithOptions:(unsigned int)arg1 reason:(id)arg2 completion:(id /* block */)arg3;
- (id)syncQueue;
- (id)syncStoresByDeviceIdentifier;
- (void)updatePairedDevicesWithCompletion:(id /* block */)arg1;
- (void)waitForLastChanceSyncWithDevicePairingID:(id)arg1 timeout:(double)arg2 completion:(id /* block */)arg3;
- (BOOL)waitingForFirstUnlock;

@end