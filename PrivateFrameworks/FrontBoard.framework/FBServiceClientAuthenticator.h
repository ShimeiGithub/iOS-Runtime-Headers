/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/FrontBoard.framework/FrontBoard
 */

@interface FBServiceClientAuthenticator : NSObject <BSDescriptionProviding> {
    unsigned int _credentials;
    NSString *_entitlement;
}

@property (nonatomic, readonly) unsigned int credentials;
@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (nonatomic, readonly, copy) NSString *entitlement;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

+ (id)sharedForegroundUIAppClientAuthenticator;
+ (id)sharedSystemClientAuthenticator;
+ (id)sharedUIAppClientAuthenticator;

- (int)_authenticateAuditToken:(struct { unsigned int x1[8]; }*)arg1 connection:(id)arg2 entitlement:(id)arg3 error:(out id*)arg4 withResult:(id /* block */)arg5;
- (int)_authenticateConnection:(id)arg1 forEntitlement:(id)arg2 error:(out id*)arg3 withResult:(id /* block */)arg4;
- (int)authenticateAuditToken:(struct { unsigned int x1[8]; }*)arg1 forEntitlement:(id)arg2 withResult:(id /* block */)arg3;
- (int)authenticateAuditToken:(struct { unsigned int x1[8]; }*)arg1 withResult:(id /* block */)arg2;
- (int)authenticateClient:(id)arg1 withResult:(id /* block */)arg2;
- (int)authenticateConnection:(id)arg1 forEntitlement:(id)arg2 withResult:(id /* block */)arg3;
- (int)authenticateConnection:(id)arg1 withResult:(id /* block */)arg2;
- (unsigned int)credentials;
- (void)dealloc;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)entitlement;
- (id)init;
- (id)initWithCredentials:(unsigned int)arg1;
- (id)initWithEntitlement:(id)arg1;
- (id)initWithEntitlement:(id)arg1 additionalCredentials:(unsigned int)arg2;
- (BOOL)isClientAuthenticated:(id)arg1;
- (BOOL)isClientAuthenticated:(id)arg1 error:(out id*)arg2;
- (BOOL)isConnectionAuthenticated:(id)arg1;
- (BOOL)isConnectionAuthenticated:(id)arg1 error:(out id*)arg2;
- (id)succinctDescription;
- (id)succinctDescriptionBuilder;

@end