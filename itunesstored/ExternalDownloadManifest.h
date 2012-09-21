/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <Foundation/NSObject.h>

@class NSArray;

__attribute__((visibility("hidden")))
@interface ExternalDownloadManifest : NSObject {
	NSArray* _invalidDownloads;
	NSArray* _validDownloads;
}
@property(readonly, assign) NSArray* validDownloads;
@property(readonly, assign) NSArray* invalidDownloads;
-(BOOL)_parsePropertyList:(id)list;
-(void)dealloc;
-(id)initWithValidDownloads:(id)validDownloads invalidDownloads:(id)downloads;
-(id)initWithPropertyList:(id)propertyList;
-(id)init;
@end
