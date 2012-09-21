/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "itunesstored-Structs.h"
#import "APSConnectionDelegate.h"

@class NSMutableDictionary, ISOperationQueue, NSMutableArray;

__attribute__((visibility("hidden")))
@interface PushNotificationController : NSObject <APSConnectionDelegate> {
	NSMutableDictionary* _connections;
	dispatch_queue_s* _dispatchQueue;
	ISOperationQueue* _operationQueue;
	int _pushEnabledState;
	NSMutableArray* _tokenOperations;
}
+(id)soundFilesDirectoryPath;
+(id)sharedInstance;
-(void)_updatePushEnabledState;
-(void)_updateEnvironmentAfterTokenPost:(id)post;
-(id)_requestedEnvironmentName;
-(void)_reloadPushStateInContext:(id)context;
-(void)_reloadDaemonClientInContext:(id)context;
-(void)_reloadActiveEnvironmentInContext:(id)context;
-(void)_postTokensIfNecessaryInContext:(id)context;
-(void)_postTokenForEnvironment:(id)environment;
-(void)_postNotificationsAvailableForClient:(id)client inContext:(id)context;
-(id)_portNameForEnvironmentName:(id)environmentName;
-(void)_openConnectionForEnvironment:(id)environment;
-(int)_numberOfClientsInContext:(id)context;
-(id)_newPostTokenOperationForEnvironment:(id)environment account:(id)account;
-(id)_newAPSConnectionWithEnvironment:(id)environment;
-(void)_loadConnectionsInContext:(id)context;
-(BOOL)_isValidEnvironment:(id)environment;
-(BOOL)_isPushEnabled;
-(id)_environmentNameForConnection:(id)connection;
-(id)_environmentForName:(id)name createIfNeeded:(BOOL)needed inContext:(id)context;
-(id)_enabledTopics;
-(void)_closeEnvironment:(id)environment inContext:(id)context;
-(id)_clientForIdentifier:(id)identifier createIfNeeded:(BOOL)needed inContext:(id)context;
-(void)_addNotificationWithUserInfo:(id)userInfo client:(id)client context:(id)context;
-(void)_urlBagDidLoadNotification:(id)_urlBag;
-(void)_storeFrontChangedNotification:(id)notification;
-(void)_networkTypeChanged:(id)changed;
-(void)_accountStoreChangedNotification:(id)notification;
-(void)connection:(id)connection didReceiveMessageForTopic:(id)topic userInfo:(id)info;
-(void)connection:(id)connection didReceivePublicToken:(id)token;
-(void)unregisterNotificationClient:(XXStruct_kUSYWB*)client;
-(void)showLocalNotificationWithUserInfo:(id)userInfo;
-(void)registerNotificationClient:(XXStruct_kUSYWB*)client;
-(id)copyPoppedNotificationsForClient:(XXStruct_kUSYWB*)client;
-(void)postClientNotificationWithUserInfo:(id)userInfo;
-(void)dealloc;
-(id)init;
@end
