/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/CoreRoutine.framework/CoreRoutine
 */

@interface RTSourceAudio : RTSource <NSCopying, NSSecureCoding> {
    int _audioSource;
    NSString *_deviceName;
}

@property (nonatomic, readonly) int audioSource;
@property (nonatomic, readonly) NSString *deviceName;

+ (id)stringFromAudioSource:(int)arg1;
+ (BOOL)supportsSecureCoding;

- (void).cxx_destruct;
- (int)audioSource;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (id)description;
- (id)deviceName;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDeviceName:(id)arg1 audioSource:(int)arg2;

@end