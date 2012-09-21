/**
 * This header is generated by class-dump-z 0.2-0.
 * class-dump-z is Copyright (C) 2009 by KennyTM~, licensed under GPLv3.
 *
 * Source: (null)
 */

#import "itunesstored-Structs.h"
#import <Foundation/NSObject.h>

@class NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface DownloadStatusController : NSObject {
	NSMutableDictionary* _assets;
	dispatch_queue_s* _dispatchQueue;
	NSMutableDictionary* _downloads;
}
+(id)statusController;
-(void)_setValues:(id)values forEntity:(long long)entity dictionary:(id)dictionary;
-(void)_setValue:(id)value forEntity:(long long)entity property:(id)property dictionary:(id)dictionary;
-(void)_postChangeNotification:(id)notification forEntityID:(long long)entityID properties:(id)properties;
-(void)_postChangeNotification:(id)notification forEntityID:(long long)entityID property:(id)property;
-(id)_copyValueForEntity:(long long)entity property:(id)property dictionary:(id)dictionary;
-(id)valuesForDownload:(long long)download;
-(id)valuesForAsset:(long long)asset;
-(id)valueForDownload:(long long)download property:(id)property;
-(id)valueForAsset:(long long)asset property:(id)property;
-(void)setValuesWithDictionary:(id)dictionary forDownload:(long long)download;
-(void)setValuesWithDictionary:(id)dictionary forAsset:(long long)asset;
-(void)setValue:(id)value forDownload:(long long)download property:(id)property;
-(void)setValue:(id)value forAsset:(long long)asset property:(id)property;
-(void)setBytesDownloaded:(long long)downloaded forAsset:(long long)asset ofDownload:(long long)download;
-(void)removeAllValuesForDownload:(long long)download;
-(void)removeAllValuesForAsset:(long long)asset;
-(void)dealloc;
-(id)init;
@end
