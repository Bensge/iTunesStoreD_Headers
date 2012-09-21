/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface SignInResponse : NSObject {
	NSString* _password;
	int _responseType;
	NSString* _userName;
}
@property(readonly, assign, nonatomic) NSString* userName;
@property(readonly, assign, nonatomic) int signInResponseType;
@property(readonly, assign, nonatomic) NSString* password;
-(void)_setUserName:(id)name;
-(void)_setSignInResponseType:(int)responseType;
-(void)_setPassword:(id)password;
-(void)dealloc;
-(id)initWithResponseType:(int)responseType;
@end
