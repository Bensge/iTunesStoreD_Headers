/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <iTunesStore/ISOperation.h>

@class NSString, NSArray;

__attribute__((visibility("hidden")))
@interface CheckHashesOperation : ISOperation {
	long long _bytesToHash;
	NSString* _filePath;
	NSArray* _hashes;
}
@property(readonly, assign) long long numberOfBytesToHash;
@property(readonly, assign) NSArray* hashes;
@property(readonly, assign) NSString* filePath;
-(void)run;
-(void)dealloc;
-(id)initWithFilePath:(id)filePath hashes:(id)hashes bytesToHash:(long long)hash;
@end
