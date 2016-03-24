/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/VoiceTrigger.framework/VoiceTrigger
 */

@interface _VTBatteryPolicy : _VTStatePolicy {
    BOOL _allowOnBattery;
    BOOL _allowOnCharger;
    unsigned char _batteryState;
    BOOL _locked;
    int _notificationToken;
    int _powerSourceNotificationToken;
}

- (void)_registerForBatteryStatusChanges;
- (void)_registerForSettingsChange;
- (void)_unregisterForBatteryStatusChanges;
- (void)_unregisterForSettingsChange;
- (void)dealloc;
- (id)initWithCallback:(id /* block */)arg1 queue:(id)arg2;
- (BOOL)isEnabled;
- (void)reload;

@end