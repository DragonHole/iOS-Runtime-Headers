/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:22:20 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/MediaPlaybackCore.framework/MediaPlaybackCore
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <MediaPlaybackCore/MediaPlaybackCore-Structs.h>
#import <MediaPlaybackCore/MPCPlayerItem.h>

@class MPAVItem;

@interface MPCMediaPlayerLegacyItem : MPCPlayerItem {

	SCD_Struct_MP7 _snapshot;
	MPAVItem* _avItem;

}

@property (nonatomic,readonly) MPAVItem * avItem;              //@synthesize avItem=_avItem - In the implementation block
-(MPAVItem *)avItem;
-(void)_rateDidChangeNotification:(id)arg1 ;
-(void)_timeDidJumpNotification:(id)arg1 ;
-(id)composerName;
-(id)artworkCatalog;
-(id)albumName;
-(id)initWithAVItem:(id)arg1 ;
-(void)_artworkDidChangeNotification:(id)arg1 ;
-(void)_titlesDidChangeNotification:(id)arg1 ;
-(void)_durationAvailablityDidChangeNotification:(id)arg1 ;
-(void)_modelGenericObjectDidChangeNotification:(id)arg1 ;
-(void)_explicitDidChangeNotification:(id)arg1 ;
-(id)modelGenericObjectRepresentation;
-(void)_updateSnapshot;
-(SCD_Struct_MP7)durationSnapshot;
-(BOOL)isExplicit;
-(id)artistName;
-(void)dealloc;
-(id)title;
@end

