/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:26:14 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/Memories.framework/Memories
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@protocol FlexSongProtocol;
#import <Memories/Memories-Structs.h>
@class NSObject;

@interface FMSong : NSObject {

	NSObject*<FlexSongProtocol> _flexSong;

}

@property (readonly) NSObject*<FlexSongProtocol> flexSong;              //@synthesize flexSong=_flexSong - In the implementation block
+(long long)versionFromArtworkFilename:(id)arg1 ;
+(id)loadSongBundleAtPath:(id)arg1 ;
+(id)availableTagIDs;
+(id)localizedNameForTagWithID:(id)arg1 ;
+(id)loadSongsAndArtworkInFolderAtPath:(id)arg1 ;
+(BOOL)hasValidTagIDs:(id)arg1 ;
-(id)artwork;
-(id)keywords;
-(id)artistName;
-(id)tagIDs;
-(BOOL)canPlay;
-(long long)metadataVersion;
-(SCD_Struct_Mi1)minimumDuration;
-(id)assetWithID:(id)arg1 ;
-(void)requestDownloadOfAllAssetsWithIDs:(id)arg1 ;
-(void)cancelDownloadOfAllAssetsWithIDs:(id)arg1 ;
-(SCD_Struct_Mi1)naturalDuration;
-(id)renditionForDuration:(SCD_Struct_Mi1)arg1 withOptions:(id)arg2 usePreRenderedFades:(BOOL)arg3 ;
-(id)songName;
-(BOOL)recalled;
-(void)_notifySongAssetsChanged;
-(id)audioEncoderPresetName;
-(void)updateAssets:(id)arg1 ;
-(id)renditionForDuration:(SCD_Struct_Mi1)arg1 withOptions:(id)arg2 usePreRenderedFades:(BOOL)arg3 testingContext:(id)arg4 ;
-(id)initWithFlexSong:(id)arg1 ;
-(id)customOptions;
-(void)updateFlexSongBackend:(id)arg1 ;
-(void)updateAsset:(id)arg1 downloadProgress:(double)arg2 ;
-(NSObject*<FlexSongProtocol>)flexSong;
-(id)description;
-(id)_impl;
-(id)uid;
-(BOOL)hidden;
-(long long)sampleRate;
@end

