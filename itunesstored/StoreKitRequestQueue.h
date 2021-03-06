/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "ISSingleton.h"
#import "RequestQueue.h"


__attribute__((visibility("hidden")))
@interface StoreKitRequestQueue : RequestQueue <ISSingleton> {
}
+(id)sharedInstance;
+(void)setSharedInstance:(id)instance;
-(void)sendResponseForOperation:(id)operation;
-(void)sendError:(id)error forOperation:(id)operation;
-(void)requestProductsWithInfo:(id)info identity:(id)identity;
-(void)cancelRequestWithInfo:(id)info identity:(id)identity;
@end

