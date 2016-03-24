/* Generated by RuntimeBrowser
   Image: /System/Library/Frameworks/AVFoundation.framework/libAVFAudio.dylib
 */

@interface AVAudioPlayerNode : AVAudioNode <AVAudioMixing>

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (getter=isPlaying, nonatomic, readonly) BOOL playing;
@property (readonly) Class superclass;
@property (nonatomic) float volume;

- (void)didAttachToEngine:(id)arg1;
- (id)init;
- (BOOL)isPlaying;
- (id)nodeTimeForPlayerTime:(id)arg1;
- (void)pause;
- (void)play;
- (void)playAtTime:(id)arg1;
- (id)playerTimeForNodeTime:(id)arg1;
- (void)prepareWithFrameCount:(unsigned int)arg1;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)scheduleBuffer:(id)arg1 atTime:(id)arg2 options:(unsigned int)arg3 completionHandler:(id /* block */)arg4;
- (void)scheduleBuffer:(id)arg1 completionHandler:(id /* block */)arg2;
- (void)scheduleFile:(id)arg1 atTime:(id)arg2 completionHandler:(id /* block */)arg3;
- (void)scheduleSegment:(id)arg1 startingFrame:(long long)arg2 frameCount:(unsigned int)arg3 atTime:(id)arg4 completionHandler:(id /* block */)arg5;
- (void)stop;

@end