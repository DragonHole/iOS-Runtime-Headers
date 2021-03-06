/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:25:08 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/SlideshowKit.framework/Frameworks/OpusKit.framework/OpusKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <OpusKit/OKMediaItem.h>

@class MPMediaItem;

@interface OKMPMediaItem : OKMediaItem {

	MPMediaItem* _mediaItem;

}

@property (retain) MPMediaItem * mediaItem;              //@synthesize mediaItem=_mediaItem - In the implementation block
+(id)urlForMediaObject:(id)arg1 ;
+(id)urlForMPAsset:(id)arg1 ;
+(id)scheme;
+(BOOL)isRemote;
-(MPMediaItem *)mediaItem;
-(void)setMediaItem:(MPMediaItem *)arg1 ;
-(id)mediaObject;
-(void)setMediaObject:(id)arg1 ;
-(id)resourceURLWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)importMediaToDirectoryURL:(id)arg1 completionHandler:(/*^block*/id)arg2 ;
-(id)createMetadataWithCompletionHandler:(/*^block*/id)arg1 ;
-(id)createThumbnailImageForResolution:(unsigned long long)arg1 withMetadata:(id)arg2 completionHandler:(/*^block*/id)arg3 ;
-(id)avAssetWithCompletionHandler:(/*^block*/id)arg1 ;
-(BOOL)wantsDiskCachedMetadata;
-(void)_resolveAssetIfNeeded;
-(id)init;
-(void)dealloc;
-(id)initWithMPMediaItem:(id)arg1 ;
@end

