/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import <iTunesStore/ISOperation.h>

@class NSData;

__attribute__((visibility("hidden")))
@interface DownloadArtworkCacheOperation : ISOperation {
	NSData* _artworkData;
	long long _downloadID;
}
@property(readonly, assign) NSData* artworkData;
@property(readonly, assign) long long downloadIdentifier;
-(void)_setArtworkData:(id)data;
-(void)run;
-(void)dealloc;
-(id)initWithDownloadIdentifier:(long long)downloadIdentifier;
@end

