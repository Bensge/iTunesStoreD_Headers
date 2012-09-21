/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "itunesstored-Structs.h"
#import "ISSingleton.h"
#import "RequestQueue.h"


__attribute__((visibility("hidden")))
@interface StoreServicesRequestQueue : RequestQueue <ISSingleton> {
}
+(id)sharedInstance;
+(void)setSharedInstance:(id)instance;
-(id)_newRedeemOperationWithCodes:(id)codes;
-(id)_newOperationsForStoreServicesURLOperation:(id)storeServicesURLOperation;
-(id)_newItemLookupOperationWithInfo:(id)info identity:(id)identity;
-(id)_newDownloadManifestOperationWithURL:(id)url originalOperation:(id)operation;
-(id)_newRentalCheckoutOperationWithRequest:(id)request;
-(id)_newAuthenticateOperationWithRequest:(id)request client:(id)client;
-(void)_handleStoreServicesURLOperation:(id)operation;
-(void)_clientMessagabilityChangedNotification:(id)notification;
-(void)sendResponseForOperation:(id)operation;
-(void)sendError:(id)error forOperation:(id)operation;
-(void)showPromptWithInfo:(id)info identity:(id)identity;
-(void)setGroupIdentifier:(id)identifier forRequestWithIdentifier:(id)identifier2 identity:(id)identity;
-(void)personalizeOffersWithInfo:(id)info identity:(id)identity;
-(void)lookupItemsWithInfo:(id)info identity:(id)identity;
-(void)loadURLBagWithInfo:(id)info identity:(id)identity;
-(void)getPlayInfoWithInfo:(id)info identity:(id)identity;
-(void)getAvailableItemKindsWithInfo:(id)info identity:(id)identity;
-(void)getAccountPurchaseHistoryWithInfo:(id)info identity:(id)identity;
-(void)disconnectRequestWithInfo:(id)info identity:(id)identity;
-(id)copyRequestsWithGroupIdentifier:(id)groupIdentifier identity:(id)identity;
-(void)checkUpdateQueueWithInfo:(id)info identity:(id)identity;
-(void)checkOutRentalWithInfo:(id)info identity:(id)identity;
-(void)checkInRentalWithInfo:(id)info identity:(id)identity;
-(void)cancelRequestWithInfo:(id)info identity:(id)identity;
-(void)authorizeMachineWithInfo:(id)info identity:(id)identity;
-(void)authenticateWithInfo:(id)info identity:(id)identity;
-(void)addURLRequestWithInfo:(id)info identity:(id)identity;
-(void)addPurchasesWithMessage:(void*)message connection:(xpc_connection_s*)connection;
-(void)addPurchasesWithInfo:(id)info identity:(id)identity;
-(void)addDownloadsUsingManifestWithInfo:(id)info identity:(id)identity;
-(void)dealloc;
-(id)init;
@end

