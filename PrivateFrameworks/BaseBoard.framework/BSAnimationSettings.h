/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/BaseBoard.framework/BaseBoard
 */

@interface BSAnimationSettings : NSObject <BSXPCCoding, NSCopying, NSMutableCopying, NSSecureCoding> {
    double _delay;
    double _duration;
    double _frameInterval;
    CAMediaTimingFunction *_timingFunction;
}

@property (readonly, copy) NSString *debugDescription;
@property (nonatomic, readonly) double delay;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly) double duration;
@property (nonatomic, readonly) double frameInterval;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;
@property (nonatomic, readonly, retain) CAMediaTimingFunction *timingFunction;

+ (id)settingsWithDuration:(double)arg1;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2;
+ (id)settingsWithDuration:(double)arg1 delay:(double)arg2 timingFunction:(id)arg3;
+ (id)settingsWithDuration:(double)arg1 timingFunction:(id)arg2;
+ (BOOL)supportsSecureCoding;

- (id)_initWithDuration:(double)arg1 delay:(double)arg2 frameInterval:(double)arg3 timingFunction:(id)arg4;
- (void)_setDelay:(double)arg1;
- (void)_setDuration:(double)arg1;
- (void)_setFrameInterval:(double)arg1;
- (void)_setTimingFunction:(id)arg1;
- (void)applyToCAAnimation:(id)arg1;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (double)delay;
- (id)description;
- (double)duration;
- (void)encodeWithCoder:(id)arg1;
- (void)encodeWithXPCDictionary:(id)arg1;
- (double)frameInterval;
- (unsigned int)hash;
- (id)init;
- (id)initWithCoder:(id)arg1;
- (id)initWithXPCDictionary:(id)arg1;
- (BOOL)isEqual:(id)arg1;
- (BOOL)isSpringAnimation;
- (id)mutableCopyWithZone:(struct _NSZone { }*)arg1;
- (id)timingFunction;

@end