/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: /System/Library/PrivateFrameworks/iTunesStore.framework/iTunesStore
 */

#import <Foundation/NSObject.h>
#import "NSCopying.h"
#import "iTunesStore-Structs.h"

@class NSArray, NSString, NSSet;

@interface ISURLCacheConfiguration : NSObject <NSCopying> {
@private
	NSArray* _clientIdentifiers;
	unsigned _diskCapacity;
	NSSet* _fileExtensions;
	unsigned _memoryCapacity;
	NSString* _persistentIdentifier;
	NSArray* _urlPatterns;
}
@property(copy, nonatomic) NSArray* URLPatterns;
@property(copy, nonatomic) NSString* persistentIdentifier;
@property(assign, nonatomic) unsigned memoryCapacity;
@property(copy, nonatomic) NSSet* fileExtensions;
@property(assign, nonatomic) unsigned diskCapacity;
@property(copy, nonatomic) NSArray* clientIdentifiers;
-(id)copyWithZone:(NSZone*)zone;
-(void)dealloc;
-(id)initWithPropertyList:(id)propertyList;
-(void)_setURLPatternsFromPropertyList:(id)propertyList;
-(void)_setFileExtensionsFromPropertyList:(id)propertyList;
-(void)_setClientIdentifiersFromPropertyList:(id)propertyList;
@end
