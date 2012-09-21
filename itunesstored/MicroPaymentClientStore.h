/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "ISSingleton.h"

@class NSMutableArray, NSArray, NSManagedObjectContext;

__attribute__((visibility("hidden")))
@interface MicroPaymentClientStore : NSObject <ISSingleton> {
	NSMutableArray* _clients;
	NSManagedObjectContext* _context;
}
@property(readonly, assign, nonatomic) NSArray* clients;
+(id)sharedInstance;
+(void)setSharedInstance:(id)instance;
-(id)_managedObjectContext;
-(id)_clients;
-(id)copyClientsForIdentifier:(id)identifier;
-(id)clientForIdentity:(id)identity create:(BOOL)create;
-(void)dealloc;
@end
