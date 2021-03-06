/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>
#import "itunesstored-Structs.h"
#import "NSCopying.h"

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface PersistentStoreConfiguration : NSObject <NSCopying> {
	NSString* _databaseFileName;
	NSArray* _legacyModelVersionIdentifiers;
	NSString* _modelFileName;
	int _storeType;
}
@property(assign, nonatomic) int storeType;
@property(retain, nonatomic) NSString* modelFileName;
@property(copy, nonatomic) NSArray* legacyModelVersionIdentifiers;
@property(readonly, assign, nonatomic) NSString* integrityCookieFileName;
@property(retain, nonatomic) NSString* databaseFileName;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithStoreType:(int)storeType;
@end

