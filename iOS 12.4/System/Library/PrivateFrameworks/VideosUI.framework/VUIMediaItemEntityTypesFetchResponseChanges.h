/*
* This header is generated by classdump-dyld 1.0
* on Wednesday, February 3, 2021 at 10:28:46 PM Australian Eastern Daylight Time
* Operating System: Version 12.4 (Build 16G77)
* Image Source: /System/Library/PrivateFrameworks/VideosUI.framework/VideosUI
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class VUICollectionChangeSet;

@interface VUIMediaItemEntityTypesFetchResponseChanges : NSObject {

	BOOL _localMediaItemsAvailableDidChange;
	VUICollectionChangeSet* _mediaItemEntityTypesChangeSet;

}

@property (nonatomic,readonly) VUICollectionChangeSet * mediaItemEntityTypesChangeSet;              //@synthesize mediaItemEntityTypesChangeSet=_mediaItemEntityTypesChangeSet - In the implementation block
@property (nonatomic,readonly) BOOL localMediaItemsAvailableDidChange;                              //@synthesize localMediaItemsAvailableDidChange=_localMediaItemsAvailableDidChange - In the implementation block
-(id)init;
-(id)description;
-(VUICollectionChangeSet *)mediaItemEntityTypesChangeSet;
-(BOOL)localMediaItemsAvailableDidChange;
-(id)initWithMediaItemEntityTypesChangeSet:(id)arg1 localMediaItemsAvailableDidChange:(BOOL)arg2 ;
@end

