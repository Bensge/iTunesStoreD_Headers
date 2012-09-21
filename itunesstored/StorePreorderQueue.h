/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "itunesstored-Structs.h"

@class ISOperationQueue, NSMutableArray;

__attribute__((visibility("hidden")))
@interface StorePreorderQueue : NSObject {
	NSMutableArray* _clients;
	dispatch_queue_s* _dispatchQueue;
	ISOperationQueue* _operationQueue;
}
+(id)sharedPreorderQueue;
-(void)_sendChangeNotificationForKinds:(id)kinds;
-(id)_preorderQueryWithAccountID:(id)accountID database:(id)database;
-(void)_handleMessage:(void*)message connection:(xpc_connection_s*)connection usingReplyBlock:(id)block;
-(void)_handleMessage:(void*)message connection:(xpc_connection_s*)connection usingBlock:(id)block;
-(void)_handleLoadQueueFinish:(id)finish;
-(void)_handleCheckQueueFinish:(id)finish;
-(id)_copyPreorderAccountIdentifiers;
-(id)_clientForConnection:(xpc_connection_s*)connection;
-(void)_clientDisconnectNotification:(id)notification;
-(void)registerManagerWithMessage:(void*)message connection:(xpc_connection_s*)connection;
-(void)getPreordersWithMessage:(void*)message connection:(xpc_connection_s*)connection;
-(void)checkQueueWithMessage:(void*)message connection:(xpc_connection_s*)connection;
-(void)cancelPreordersWithMessage:(void*)message connection:(xpc_connection_s*)connection;
-(void)removePreordersWithPreorderIdentifiers:(id)preorderIdentifiers;
-(void)checkPreorderQueue;
-(void)addPreordersWithItems:(id)items accountID:(id)anId;
-(void)dealloc;
-(id)init;
@end
