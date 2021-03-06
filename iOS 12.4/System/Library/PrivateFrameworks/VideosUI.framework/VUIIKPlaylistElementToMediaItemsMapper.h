/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:43 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@interface VUIIKPlaylistElementToMediaItemsMapper : NSObject {

	unsigned long long _resumeMenuBehavior;

}

@property (assign,nonatomic) unsigned long long resumeMenuBehavior;              //@synthesize resumeMenuBehavior=_resumeMenuBehavior - In the implementation block
-(id)init;
-(unsigned long long)resumeMenuBehavior;
-(id)_storeMediaItemsForVideoElement:(id)arg1 ;
-(id)_auxMediaItemForVideoElement:(id)arg1 ;
-(void)_populateMediaItem:(id)arg1 withMetadatafromVideoElement:(id)arg2 ;
-(void)_populateMediaItem:(id)arg1 withMetadatafromTimelineEventElement:(id)arg2 ;
-(void)_populateMediaItem:(id)arg1 withMetadatafromRelatedContentElement:(id)arg2 ;
-(BOOL)_shouldDisableResumeMenuForAsset:(id)arg1 ;
-(id)mediaItemsFromIKPlaylistElement:(id)arg1 ;
-(id)_clipMediaItemsMediaItem:(id)arg1 fromTimelineElement:(id)arg2 ;
-(void)setResumeMenuBehavior:(unsigned long long)arg1 ;
@end

