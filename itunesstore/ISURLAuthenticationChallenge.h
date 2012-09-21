/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISAuthenticationChallenge.h"

@class NSURLAuthenticationChallenge;

@interface ISURLAuthenticationChallenge : ISAuthenticationChallenge {
	NSURLAuthenticationChallenge* _challenge;
}
-(void)dealloc;
-(void)cancelAuthentication;
-(int)failureCount;
-(void)useCredential:(id)credential;
-(id)initWithAuthenticationChallenge:(id)authenticationChallenge;
-(id)user;
-(id)password;
-(id)sender;
-(BOOL)hasPassword;
@end

