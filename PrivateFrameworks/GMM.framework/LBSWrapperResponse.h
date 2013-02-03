/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/GMM.framework/GMM
 */

@class LBSGLocResponse;

@interface LBSWrapperResponse : PBCodable {
    BOOL _hasStatus;
    LBSGLocResponse *_reply;
    NSInteger _status;
}

@property(retain) LBSGLocResponse *reply;
@property(readonly) BOOL hasReply;
@property(readonly) BOOL hasStatus;
@property NSInteger status;

- (void)dealloc;
- (id)description;
- (BOOL)hasReply;
- (BOOL)hasStatus;
- (id)init;
- (BOOL)readFrom:(id)arg1;
- (id)reply;
- (void)setReply:(id)arg1;
- (void)setStatus:(NSInteger)arg1;
- (NSInteger)status;
- (void)writeTo:(id)arg1;

@end