/* Generated by RuntimeBrowser.
 */

@protocol PBRequesterDelegate <NSObject>

@optional

- (void)requester:(PBRequester *)arg1 didFailWithError:(NSError *)arg2;
- (void)requester:(PBRequester *)arg1 didReceiveResponse:(PBCodable *)arg2 forRequest:(PBRequest *)arg3;
- (void)requesterDidCancel:(PBRequester *)arg1;
- (void)requesterDidFinish:(PBRequester *)arg1;
- (void)requesterWillSendRequestForEstablishedConnection:(PBRequester *)arg1;

@end
