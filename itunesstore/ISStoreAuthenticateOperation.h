/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "SSAuthenticateRequestDelegate.h"
#import "ISOperation.h"

@class SSAuthenticateRequest, NSNumber, SSAuthenticationContext;

@interface ISStoreAuthenticateOperation : ISOperation <SSAuthenticateRequestDelegate> {
	NSNumber* _authenticatedDSID;
	SSAuthenticateRequest* _request;
}
@property(readonly, assign) SSAuthenticationContext* authenticationContext;
-(void)dealloc;
-(id)initWithAuthenticationContext:(id)authenticationContext;
-(id)authenticatedAccountDSID;
-(id)uniqueKey;
-(void)request:(id)request didFailWithError:(id)error;
-(void)authenticateRequest:(id)request didReceiveResponse:(id)response;
-(void)_setAuthenticatedDSID:(id)dsid;
-(id)_authenticatedDSID;
-(void)run;
@end
