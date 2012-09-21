/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "SSAccountStore.h"
#import "itunesstored-Structs.h"

@class NSLock, NSMutableArray, SSAccount, NSArray;

__attribute__((visibility("hidden")))
@interface AccountStore : NSObject <SSAccountStore> {
	NSMutableArray* _accounts;
	NSLock* _lock;
}
@property(readonly, assign, getter=isExpired) BOOL expired;
@property(readonly, assign) NSArray* accounts;
@property(readonly, assign) SSAccount* activeLockerAccount;
@property(readonly, assign) SSAccount* activeAccount;
+(id)defaultStore;
-(void)_signOutAccount:(id)account;
-(void)_setCreditsString:(id)string forAccountWithUniqueIdentifier:(id)uniqueIdentifier;
-(void)_sendLogoutRequestForAccount:(id)account;
-(void)_postAccountStoreDidChange;
-(void)_ntsSetActiveLockerAccount:(id)account;
-(void)_ntsSetActiveAccount:(id)account;
-(id)_ntsAccountWithUniqueIdentifier:(id)uniqueIdentifier;
-(id)_ntsAccounts;
-(id)_newDemoAccount;
-(id)_copyActiveLockerAccountIdentifier;
-(id)_copyActiveAccountIdentifier:(const CFStringRef*)identifier;
-(id)_copyAccountsFromLockdown;
-(id)_addAccount:(id)account asActiveAccount:(BOOL)account2 asActiveLockerAccount:(BOOL)account3;
-(void)_accountChangeNotification;
-(id)signOutAccountsWithUserInfo:(id)userInfo;
-(id)setAccountCreditsWithUserInfo:(id)userInfo;
-(void)resetAccountWithUserInfo:(id)userInfo;
-(id)addAccountWithUserInfo:(id)userInfo;
-(void)synchronizeData;
-(void)signOutAllAccounts;
-(void)signOutAccount:(id)account;
-(id)setActiveLockerAccount:(id)account;
-(id)setActiveAccount:(id)account;
-(void)setAccountCredits:(id)credits forAccountWithUniqueIdentifier:(id)uniqueIdentifier;
-(void)resetExpirationForTokenType:(int)tokenType;
-(void)resetExpiration;
-(BOOL)isExpiredForTokenType:(int)tokenType;
-(id)addAccount:(id)account;
-(id)accountWithUniqueIdentifier:(id)uniqueIdentifier reloadIfNecessary:(BOOL)necessary;
-(id)accountWithUniqueIdentifier:(id)uniqueIdentifier;
-(void)dealloc;
-(id)init;
@end

