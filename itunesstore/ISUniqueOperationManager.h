/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import "ISSingleton.h"
#import <Foundation/NSObject.h>

@class NSLock, ISUniqueOperationContext, NSMutableDictionary, NSMutableArray;

@interface ISUniqueOperationManager : NSObject <ISSingleton> {
	ISUniqueOperationContext* _activeContext;
	NSMutableArray* _contexts;
	NSLock* _lock;
	NSMutableDictionary* _lockPool;
}
+(id)sharedInstance;
+(void)setSharedInstance:(id)instance;
-(id)init;
-(void)dealloc;
-(void)uniqueOperationFinished:(id)finished forKey:(id)key;
-(void)setPredecessorIfNeeded:(id)needed forKey:(id)key;
-(id)predecessorForKey:(id)key operation:(id)operation;
-(id)_contextForOperation:(id)operation;
-(id)_activeContext;
-(id)lockWithIdentifier:(id)identifier;
-(void)checkOutOperation:(id)operation;
-(void)checkInOperation:(id)operation;
@end

